import React from "react";

const Episode = ({image, link, text, linkUrl, name, date}) =>{
    // const bgImage = "url('images/img_2.jpg')"
    const bgImage = `url('${image}')`
    return(
        <div className="d-block d-md-flex podcast-entry bg-white mb-5">
        <div className="image" style={{backgroundImage:bgImage }}></div>
        <div className="text">
          <h3 className="font-weight-light"><a href={link}>{text}</a></h3>
          <div className="text-white mb-3"><span className="text-black-opacity-05"><small>{name}<span className="sep">/</span> {date}<span className="sep">/</span> 1:30:20</small></span></div>

          <div className="player">
            <audio id="player2" preload="none" controls controlsList="nodownload" style={{width: "100%"}}>
              <source src={linkUrl} type="audio/mp3" />
            </audio>
          </div>

        </div>
      </div>
    )
}
export default Episode;