class PemandanganItem {
  constructor(title, imgUrl) {
    this.title = title;
    this.imgUrl = imgUrl;
  }
}

let pemandanganContainer = document.getElementById(
  "pemandangan_main__content--list"
);
let pathPemandangan = "./assets/image/pemandangan/";

let pemandanganList = [
  new PemandanganItem(
    "Masjid Raya Baiturrahman, Aceh",
    `${pathPemandangan}/masjid_baiturrahman_aceh.jpg`
  ),
  new PemandanganItem(
    "Candi Borobudur, Yogyakarta",
    `${pathPemandangan}/candi_borobudur_yogyakarta.jpg`
  ),
  new PemandanganItem(
    "Masjid Agung, Banten",
    `${pathPemandangan}/masjid_agung_banten.jpg`
  )
];

function elementPemandangan(title, imgUrl) {
  let newElementPemandangan = document.createElement("li");
  newElementPemandangan.innerHTML = `
    <img class="pemandangan_image" src="${imgUrl}"/>
    <section class="pemandangan_info_container">
        <section class="pemandangan_info">
            <h1>${title}</h1>
            <a href="${imgUrl}" target="blank" download>
                <button>
                    <img src="./assets/image/icon/download.png" alt="" />
                    <span>Unduh</span>
                </button>
            </a>
        </section>
    </section>
    `;

  return newElementPemandangan;
}

function renderElementPemandangan() {
  for (let pemandangan of pemandanganList) {
    pemandanganContainer.insertAdjacentElement(
      "beforeend",
      elementPemandangan(pemandangan.title, pemandangan.imgUrl)
    );
  }
}

renderElementPemandangan();