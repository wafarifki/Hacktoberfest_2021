import React, {useState} from "react";
import List from "./list"
 
const [list, setList ] = useState([])
// const list = [
//     {id : 0, icon : "images/person_1.jpg", name : "testing", image : "Claire", genre : "POD", feed : "#"},
//     {id : 0, icon : "images/person_1.jpg", name : "testing", image : "Claire", genre : "POD", feed : "#"},
//     {id : 0, icon : "images/person_1.jpg", name : "testing", image : "Claire", genre : "POD", feed : "#"}
// ]

 const ArtList = ()=>{
     return (
        <ul className="list-unstyled">
            {list.map((li)=> <List image={li.icon} link={li.feed} name={li.name}  />)}
</ul>
     )
 }

 export default ArtList;