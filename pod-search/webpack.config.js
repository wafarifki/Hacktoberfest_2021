const webpack = require('webpack')
const path = require('path')
const UglifyJsWebpackPlugin = require('uglifyjs-webpack-plugin')

module.exports = {
  entry: {
    app: './src/index.js'
  },
  output: {
    path: __dirname+'/public/dist',
    filename: 'bundle/[name].js',
    sourceMapFilename: 'bundle/[name].map',
    chunkFilename: 'bundle/[name].js'
  },
  node: {
    fs: 'empty'
  },
  devtool: '#source-map',
  performance: process.env.NODE_ENV === 'production' ? { hints: false } : {},
  plugins: process.env.NODE_ENV === 'production' ? [
    new webpack.DefinePlugin({
      'process.env': {
        'NODE_ENV': JSON.stringify('production')
      }
    })
  ] : [],
  optimization: process.env.NODE_ENV === 'production' ? {
    minimize: true,
    minimizer: [
      new UglifyJsWebpackPlugin({
        uglifyOptions: {
          output: {
            comments: false
          },
          compress: {
            drop_console: true,
            dead_code: true
          }
        }
      })
    ],
    splitChunks: {
      cacheGroups: {
        vendor: {
          test: /node_modules/,
          chunks: 'initial',
          name: 'commons',
          enforce: true
        }
      }
    }
  } : {
    minimize: false,
    splitChunks: {
      cacheGroups: {
        vendor: {
          test: /node_modules/,
          chunks: 'initial',
          name: 'commons',
          enforce: true
        }
      }
    }
  },
  module: {
    rules: [
      {
        test: /\.jsx?$/,
        exclude: /(node_modules|bower_components)/,
        loader: 'babel-loader',
        query:{
          presets:['react', 'env'],
          plugins: [
            'transform-object-rest-spread',
            'transform-runtime'
          ]
        }
      },
      {
        test: /\.json$/,
        loader: 'json-loader'
      }
    ]
  }
}
