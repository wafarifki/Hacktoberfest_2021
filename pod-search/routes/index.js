// Full Documentation - https://docs.turbo360.co
const express = require('express')
const router = express.Router()

/*  This is the home route. It renders the index.mustache page from the views directory.
  Data is rendered using the Mustache templating engine. For more
  information, view here: https://mustache.github.io/#demo */
router.get('/', (req, res) => {
  res.render('index', { text: 'This is the dynamic data. Open index.js from the routes directory to see.' })
})

/*  This route render json data */
router.get('/json', (req, res) => {
  res.json({
    confirmation: 'success',
    app: process.env.TURBO_APP_ID,
    data: 'this is a sample json route.'
  })
})

/*  This route sends text back as plain text. */
router.get('/send', (req, res) => {
  res.send('This is the Send Route')
})

/*  This route redirects requests to Turbo360. */
router.get('/redirect', (req, res) => {
  res.redirect('https://www.turbo360.co/landing')
})

module.exports = router
