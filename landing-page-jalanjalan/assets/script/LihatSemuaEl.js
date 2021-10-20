function readAllPostHandler(dataEl) {
    for (let el of dataEl) {
        let readAllPostElement = document.createElement("div");
        let parentElement = document.getElementById(el.id);

        readAllPostElement.innerHTML = `
            <a href="#">
                <span>${el.text}</span>
                <img src="./assets/image/icon/arrow_right.png">
            </a>
        `;
        readAllPostElement.setAttribute("class", "pagination");

        parentElement.insertAdjacentElement("beforeend", readAllPostElement);
    }
}

let dataReadAll = [{
        id: "wisata_main",
        text: "Lihat Semua Informasi Wisata"
    },
    {
        id: "kuliner_main",
        text: "Lihat Semua Kuliner Enak"
    },
    {
        id: "pemandangan_main",
        text: "Lihat Pemandangan Terbaru"
    }
];

readAllPostHandler(dataReadAll);