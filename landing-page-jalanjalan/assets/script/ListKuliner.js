class ItemKuliner {
  constructor(title, prov, desc, imgUrl, minPrice, maxPrice) {
    this.title = title;
    this.prov = prov;
    this.desc = desc;
    this.imgUrl = imgUrl;
    this.minPrice = minPrice;
    this.maxPrice = maxPrice;
  }
}

let containerKulinerList = document.getElementById("kuliner_list")
  .firstElementChild;
let listKuliner = [
  new ItemKuliner(
    "5 Tempat Makan Sate Terenak di Sleman",
    "DI Yogyakarta",
    "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Tempore, culpa.",
    "https://res.cloudinary.com/alfianandi/image/upload/v1598854312/jalanjalan/8b0f291e0b5d13013de63901f45d1714_600x400_xcrezm.jpg",
    "12",
    "25"
  ),
  new ItemKuliner(
    "Kumpulan Tempat Makan Sate Bandeng di Banten",
    "Banten",
    "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Tempore, culpa.",
    "https://res.cloudinary.com/alfianandi/image/upload/v1598854364/jalanjalan/3548501076_b6koyu.jpg",
    "15",
    "30"
  ),
  new ItemKuliner(
    "10 Jajanan Tradisional di Jakarta",
    "Jakarta",
    "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Tempore, culpa.",
    "https://res.cloudinary.com/alfianandi/image/upload/v1598854434/jalanjalan/kerak-telor_rlgsrj.jpg",
    "0.5",
    "10"
  ),
  new ItemKuliner(
    "Cilung, Makanan Khas Bandung Dengan Rasa Unik",
    "Jawa Barat",
    "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Tempore, culpa.",
    "https://res.cloudinary.com/alfianandi/image/upload/v1598854452/jalanjalan/1080419164_y1sq0l.jpg",
    "1",
    "5"
  ),
  new ItemKuliner(
    "Yuk Bisnis Pempek Palempang Dengan Bahan-bahan Ini",
    "Palembang",
    "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Tempore, culpa.",
    "https://res.cloudinary.com/alfianandi/image/upload/v1598854470/jalanjalan/cropped-foto-utama-pempek-2-1-eb18a340ffdc5cb06ad6c4ff0b5cab93_600x400_ea5r6f.jpg",
    "2",
    "5"
  ),
  new ItemKuliner(
    "5 Toko Oleh-oleh Bika Ambon Paling Enak di Medan",
    "Medan",
    "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Tempore, culpa.",
    "https://res.cloudinary.com/alfianandi/image/upload/v1598854488/jalanjalan/bika-ambon__fpmyxj.jpg",
    "5",
    "30"
  )
];

function createElementKuliner(title, prov, desc, imgUrl, minPrice, maxPrice) {
  let elementKulinerList = document.createElement("li");
  elementKulinerList.innerHTML = `
    <section class="kuliner_main__list__header">
        <img src="${imgUrl}" alt=""/>
    </section>
    <section class="kuliner_main__list__content">
        <h2 class="header_scale_control">${title}</h2>
        <section class="kuliner_cat">
            <a href="#">${prov}</a>
        </section>
        <p>${desc}</p>
        <section class="harga_kuliner">
            <p>Harga : Rp${minPrice}K - Rp${maxPrice}K</p>
        </section>
    </section>
    `;

  return elementKulinerList;
}

for (let kuliner of listKuliner) {
  containerKulinerList.insertAdjacentElement(
    "beforeend",
    createElementKuliner(
      kuliner.title,
      kuliner.prov,
      kuliner.desc,
      kuliner.imgUrl,
      kuliner.minPrice,
      kuliner.maxPrice
    )
  );
}
