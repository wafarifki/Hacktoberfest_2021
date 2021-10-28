// This Module Need NODEJS

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let lang;

Start();

function PlayAgain()
{
    let txt = lang == "ID" ? "Mulai Lagi [y(es) or no]? " : "Play Again [y(es) or no]? "
    rl.question(txt, (answer) => {
        if (answer.match(/^y(es)?$/i)) {
            process.stdout.write('\u001B[2J\u001B[0;0f');
            return StartGame(lang);
        } else {
            rl.close();
        }
    });
}

function StartGame(Lang){
    switch(Lang) {
        case "ID" : 
        {
            rl.question("Silahkan Pilih\n1. Batu\n2. Gunting\n3. Kertas\nPilihan Kamu : ", function(choose) {
                let name = ["Batu", "Gunting", "Kertas"];
                let bot = Math.floor(Math.random() * 3) + 1;
                let pick = parseInt(choose) || 0;
                if(pick > 3 || pick < 1) {
                    console.error("Kode Tidak Valid");
                    process.stdout.write('\u001B[2J\u001B[0;0f');
                    return StartGame(lang);
                }
                console.log(`BOT : ${name[bot - 1]}, User: ${name[pick - 1]}`)
                if(pick == bot) {
                    console.log("Draw");
                    return PlayAgain();
                } else if (pick == 1 && bot == 2){
                    console.log("Kamu Menang Hore");
                    return PlayAgain();
                } else if (pick == 2 && bot == 3){
                    console.log("Kamu Menang Hore");
                    return PlayAgain();
                } else if (pick == 3 && bot == 1){
                    console.log("Kamu Menang Hore");
                    return PlayAgain();
                } else if(bot == 1 && pick == 2){
                    console.log("Kamu Kalah");
                    return PlayAgain();
                } else if(bot == 2 && pick == 3){
                    console.log("Kamu Kalah");
                    return PlayAgain();
                } else if(bot == 3 && pick == 1){
                    console.log("Kamu Kalah");
                    return PlayAgain();
                }
            });
            break;
        }
        case "EN" : {
            rl.question("Please Choose\n1. Rock\n2. Scissors\n3. Paper\nYour Choose : ", function(choose) {
                let name = ["Rock", "Scissors", "Paper"];
                let bot = Math.floor(Math.random() * 3) + 1;
                let pick = parseInt(choose) || 0;
                if(pick > 3 || pick < 1) {
                    console.error("Code Invalid");
                    process.stdout.write('\u001B[2J\u001B[0;0f');
                    return StartGame(lang);
                }
                console.log(`BOT : ${name[bot - 1]}, User: ${name[pick - 1]}`)
                if(pick == bot) {
                    console.log("Draw");
                    return PlayAgain();
                } else if (pick == 1 && bot == 2){
                    console.log("You Win Horray");
                    return PlayAgain();
                } else if (pick == 2 && bot == 3){
                    console.log("You Win Horray");
                    return PlayAgain();
                } else if (pick == 3 && bot == 1){
                    console.log("You Win Horray");
                    return PlayAgain();
                } else if(bot == 1 && pick == 2){
                    console.log("You Lose");
                    return PlayAgain();
                } else if(bot == 2 && pick == 3){
                    console.log("You Lose");
                    return PlayAgain();
                } else if(bot == 3 && pick == 1){
                    console.log("You Lose");
                    return PlayAgain();
                }
            });
            break;
        }
        default : {
            console.log("Wrong Data");
            rl.close();
        }
    }
}

function Start()
{

    rl.question("Choose Your Language:\n1. Indonesia\n2. English\nYour Input : ", function(input) {
        switch(parseInt(input))
        {
            case 1: {
                lang = "ID";
                StartGame(lang);
                break;
            }
            case 2: {
                lang = "EN";
                StartGame(lang);
                break;
            }
            default: {
                console.log("Lang ID Not Valid")
                rl.close();
                break;
            }
        }
    });
}

rl.on('SIGINT', () => {
   process.exit(0);
});

rl.on("close", function(x) {
   process.exit(0);
});
