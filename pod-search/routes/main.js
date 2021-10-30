const { default: axios } = require("axios")
const { json, response } = require("express")
const express = require("express")
const route = express.Router()
const {parseString } = require("xml2js")
 
route.get("/", (req, res, next)=>{
    res.render("index")
})
// route.get("/search", async (req, res, next)=>{
//     const url = "https://itunes.apple.com/search?term=politics&country=US&Media=podcast"
//     const {data }= await axios({ 
//         url,
//         method : 'get',
//         options : {
//             Headers : { Accept : "application/json"}
//         }
//     })
//     const {results}= data
//     const podcasts = results.map(podcast=>{
//         return {
//              id : podcast.artistId,
//              name : podcast.artistName,
//              icon : podcast.artworkUrl60,
//              trackName: podcast.trackName,
//              feed : podcast.feedUrl,
//              genres : podcast.genres
//         }
//     })
//     res.json(podcasts)
// })

route.get("/feed", async (req, res, next)=>{
    const url = req.query.url
    const {data }= await axios({ 
        url,
        method : 'get',
        options : {
            Headers : { Accept : "application/json"}
        }
    })
    parseString(data, (err, json)=>{
        const {rss } = json
        const {channel } = rss
        const payload = channel[0]
        console.log(payload.item)
        res.json({
            data :  payload
        })
    }) 
    
   
})

route.post("/search", async(req, res, next)=>{
    const searchTerm = req.body.term;
    const url =`https://itunes.apple.com/search?term=${searchTerm}&country=US&Media=podcast`
 
    const {data }= await axios({ 
        url,
        method : 'get',
        options : {
            Headers : { Accept : "application/json"}
        }
    })
    const {results}= data
    const podcasts = results.map((podcast, idx)=>{
        return {
             id : idx,
             name : podcast.name ,
             Image : podcast.artworkUrl60,
             trackName: podcast.trackName,
             feed : podcast.feedUrl,
             categories : podcast.genres
        }
    })
    res.json({podcasts})
})


module.exports = route