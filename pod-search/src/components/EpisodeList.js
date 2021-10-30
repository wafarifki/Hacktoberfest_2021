import React from "react";
import Episode from "./episode"

//  const EpiList = [
//      {id : 0, name : "By Mike Smith", image : "/images/img_1.jpg", linkUrl : "https://audio-ssl.itunes.apple.com/itunes-assets/AudioPreview115/v4/a5/dd/92/a5dd929d-c457-3b53-e278-cf2e5bfc544a/mzaf_16628235598750249007.std.aac.p.m4a",
//       date : "16 September 2017 ", text : "Episode 08: How To Create Web Page Using Bootstrap 4"}
//  ]

const episodeList = ({EpiList})=>{
    return (
        <div>
            {EpiList.map((Epi) => <Episode key={Epi.id} {...Epi} />)}
        </div>
    )
}

export default episodeList;
