class ItemWisata {
    constructor(title, prov, imgUrl, desc) {
        this.title = title;
        this.prov = prov;
        this.imgUrl = imgUrl;
        this.desc = desc;
    }
}

let listWisataContainer = document.getElementById("list_wisata");

let listWisata = [
    new ItemWisata(
        "5 Wisata Banten yang Gak Kalah Unik",
        "Banten",
        "https://res.cloudinary.com/alfianandi/image/upload/v1598854242/jalanjalan/tower_banten_fdto2w.jpg",
        "Lorem ipsum dolor sit amet consectetur adipisicing elit.Neque, ipsum."
    ),
    new ItemWisata(
        "Macam-macam Tempat Wisata di Jakarta",
        "Jakarta",
        "https://res.cloudinary.com/alfianandi/image/upload/v1598853889/jalanjalan/892066-best-jakarta-wallpapers-1920x1080_gjjmbn.jpg",
        "Lorem ipsum dolor sit amet consectetur adipisicing elit.Neque, ipsum."
    ),
    new ItemWisata(
        "Yuk Main ke Kalbar dan Liat Wisatanya",
        "Kalimantan Barat",
        "https://res.cloudinary.com/alfianandi/image/upload/v1598853981/jalanjalan/kalimantan-barat.jpg",
        "Lorem ipsum dolor sit amet consectetur adipisicing elit.Neque, ipsum."
    ),
    new ItemWisata(
        "Keseruan Bermain di Tangkuban Perahu",
        "Jawa Barat",
        "https://res.cloudinary.com/alfianandi/image/upload/v1598854031/jalanjalan/tangkuban-perahu-jawa-barat.jpg",
        "Lorem ipsum dolor sit amet consectetur adipisicing elit.Neque, ipsum."
    ),
    new ItemWisata(
        "5 Pantai Paling Populer di Banten",
        "Banten",
        "https://res.cloudinary.com/alfianandi/image/upload/v1598854142/jalanjalan/pantai-banten.jpg",
        "Lorem ipsum dolor sit amet consectetur adipisicing elit.Neque, ipsum."
    ),
    new ItemWisata(
        "5 Tempat Bersejarah Terunik di Yogyakarta",
        "DI Yogyakarta",
        "https://res.cloudinary.com/alfianandi/image/upload/v1598854077/jalanjalan/candi-borobudur.jpg",
        "Lorem ipsum dolor sit amet consectetur adipisicing elit.Neque, ipsum."
    )
];

function createElement(title, prov, imgUrl, desc) {
    let itemWisataElement = document.createElement("li");
    itemWisataElement.innerHTML = `
      <section class="wisata_cat">
          <span>${prov}</span>
      </section>
      <img src="${imgUrl}"/>
      <section class="wisata_desc">
          <h2 class="header_scale_control">${title}</h2>
          <section class="wisata_rating">
              <span>
                  <img src="./assets/image/icon/full_star.png" alt="" />
                  <img src="./assets/image/icon/full_star.png" alt="" />
                  <img src="./assets/image/icon/full_star.png" alt="" />
                  <img src="./assets/image/icon/full_star.png" alt="" />
                  <img src="./assets/image/icon/full_star.png" alt="" />
              </span>
          </section>
      <p>
          ${desc}
      </p>
      </section>
    `;

    return itemWisataElement;
}

function renderItemWisata() {
    for (let wisata of listWisata) {
        listWisataContainer.insertAdjacentElement(
            "beforeend",
            createElement(wisata.title, wisata.prov, wisata.imgUrl, wisata.desc)
        );
    }
}

renderItemWisata();
