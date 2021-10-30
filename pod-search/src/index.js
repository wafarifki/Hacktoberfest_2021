import React , {useState, useEffect} from "react"
import ReactDOM from "react-dom"
import Header from "./components/header"
import ListArt from "./components/list"
import Episodes from "./components/EpisodeList"
import axios from "axios"


const App = () =>{
    const [selectedPodcast, setSelectedPodcast]  = useState(null)
     const ArtList = ()=>{
        const [searchTerm, setSearchTerm] = useState('')
        const [itemLi, setItemList] = useState([])
       

        const selectPodcast = (podcast, event)=>{
            event.preventDefault()
            console.log("Podcast is " + JSON.stringify(podcast))
            setSelectedPodcast(podcast)
        } 
        useEffect(()=>{
            // console.log("SELECTED PODCAST IS "+ JSON.stringify(selectedPodcast))
            if(!selectedPodcast)
            return
            const url = `/feed?url=${selectedPodcast.feed}`
            // console.log(url)
            axios({
                url : url,
                method : "get",
                options : {
                    Headers : { Accept : "application/json"}
                }
            }).then(({data})=>{
                console.log("there is no error"+ JSON.stringify(data))
                const { item } = data
                // console.log(data.item)
            }).catch(err => console.log("there is error"))
        }, [selectedPodcast])

        const onType = (event)=>{
            setSearchTerm(event.target.value)
        }
        const onButtonClick = (event)=>{
            axios({
                url : "/search",
                method : "post",
                data : {
                    term : searchTerm.trim().toLocaleLowerCase()
                },
                options : {
                    Headers : { Accept : "application/json"}
                }
            })
            .then(({data}) =>{
                let podlist = data.podcasts
               const PodeList =  podlist.sort((podL)=>{
                    podL.name != undefined || podL.trackName != undefined
                })
                    // console.log(PodeList)
                    setItemList(PodeList)
                    // console.log(data.podcasts)
            })
            .catch(err =>{
                console.log(err)
            })
        }
         return (
            <div className="col-lg-3">
                  <div className="featured-user mb-5 mb-lg-0">
                      <h3 className="mb-2">Search Podcasts</h3>
                      <div style={{display:"flex"}}>
                        <input onChange={onType} type="text" style={{height:"32px"}} className="form-control mb-4" />
                        <button onClick={onButtonClick} className="btn btn-info p-1 ml-2" style={{height: "32px"}}>GO!</button>
                      </div>
                        <ul className="list-unstyled">
                  {itemLi.map((item)=> <ListArt image={item.Image} key={item.id} feed={item.feed} onSelect={(e)=>{ selectPodcast(item, e)}} name={ item.name ? item.name : item.trackName } categories={item.categories}  />)}  
    </ul>
    </div>  
</div>
         )
     }

    return(<div className="site-wrap">
         
        <Header />
        <div className="site-section">
            <div className="container">
                <div className="row">            
                         <ArtList />
                         
        <div className="col-lg-9">
            <Episodes  EpiList={selectedPodcast ? [ selectedPodcast ]:[] }/>  
            
        </div>
        </div>
        </div>
                </div>
            </div>
    )
}

ReactDOM.render(<App />, document.getElementById("root"))