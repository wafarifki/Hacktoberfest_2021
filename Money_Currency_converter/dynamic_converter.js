var first = document.getElementById('first');
var second = document.getElementById('second');
var output = document.getElementById('output');
var input = document.querySelector('#input');
var input_display = document.getElementById('input_display');

//USD
let onCalculate_usd2thb = () => {
	var output = document.getElementById('output');
	fetch('/JSON/USD/usd2thb.json')
	.then(response => response.json())
	.then(data => {
		input_display.innerText = " USD";
	output.innerText = data.rate * input.value + " thai bath";
	});

}
let onCalculate_usd2usd = () => {
	input_display.innerText = " USD";
	output.innerText = input.value + " us dollar";
}
let onCalculate_usd2euro = () => {
	var output = document.getElementById('output');
	fetch('/JSON/USD/usd2euro.json')
	.then(response => response.json())
	.then(data => {
		input_display.innerText = " USD";
	output.innerText = data.rate * input.value + " euro";
	});
}

//THB
let onCalculate_thb2usd = () => {
	fetch('/JSON/THB/thb2usd.json')
	.then(response => response.json())
	.then(data => {
		input_display.innerText = " THB";
		output.innerText = data.rate * input.value + " us dollar";
	});

}
let onCalculate_thb2thb = () => {
	input_display.innerText = " THB";
	output.innerText = input.value + " thai bath";
}
let onCalculate_thb2euro = () => {
	fetch('/JSON/THB/thb2euro.json')
	.then(response => response.json())
	.then(data => {
		input_display.innerText = " THB";
		output.innerText = data.rate * input.value + " euro";
	});
}
//EURO
let onCalculate_euro2usd = () => {
        fetch('/JSON/EURO/euro2usd.json')
        .then(response => response.json())
        .then(data => {
			input_display.innerText = " EURO";
        output.innerText = data.rate * input.value + " us dollar";
        });
    }
    let onCalculate_euro2thb = () => {
        fetch('/JSON/EURO/euro2thb.json')
        .then(response => response.json())
        .then(data => {
			input_display.innerText = " EURO";
        output.innerText = data.rate * input.value + " thai bath";
        });
    }
	let onCalculate_euro2euro = () => {
		input_display.innerText = " EURO";
        output.innerText = input.value + " euro";
    }

function normal() {
const valueI = first.options[first.selectedIndex].value;
const valueII = second.options[second.selectedIndex].value;
var click = 0;
var swtch = document.getElementById('swtch');


	switch (valueI) {
		case "1": //USD
		switch (valueII) {
			case "1":
				onCalculate_usd2thb();
				swtch.addEventListener('click', usd2thb, false);
				function usd2thb() {
					click += 1;
					if (click % 2 ==1) {
						onCalculate_thb2usd();
						first.options[1].selected = true;
						second.options[1].selected = true;
						console.log('inv');
					} else {
						onCalculate_usd2thb();
						first.options[0].selected = true;
						second.options[0].selected = true;
						console.log('nor');
						}

				}
				
			break;
			
			case "2":
			onCalculate_usd2usd();
			break;

			case "3":
			onCalculate_usd2euro();
			swtch.addEventListener('click', usd2euro, false);
			function usd2euro() {
				click += 1; 
					if (click % 2 ==1) {
						first.options[2].selected = true;
						second.options[1].selected = true;
						console.log('inv');
					} else {
						first.options[0].selected = true;
						second.options[2].selected = true;
						console.log('normal');
					}
			}
			break;

			
			default:
			console.log('unknow');
			break;
		}
		break;
		
		case "2": //THB
		switch (valueII) {
			case "1":
			onCalculate_thb2thb();
			break;
			
			case "2":
			onCalculate_thb2usd();
			swtch.addEventListener('click', thb2usd, false);
			function thb2usd() {
				click +=1;
				if (click % 2 ==1) {
					first.options[0].selected = true;
					second.options[0].selected = true;
					console.log('inv');
				} else {
					first.options[1].selected = true;
					second.options[1].selected = true;
					console.log('nor');
				}
			}
			break;

			case "3":
			onCalculate_thb2euro();
			swtch.addEventListener('click', thb2euro, false);
			function thb2euro() {
				click +=1;
				if (click % 2 ==1) {
					first.options[2].selected = true;
					second.options[0].selected = true;
					console.log('inv');
				} else {
					first.options[1].selected = true;
					second.options[2].selected = true;
					console.log('nor');
				}
			}
			break;
		}
		break;

		case "3": //EURO
		switch (valueII) {
			case "1":
			onCalculate_euro2thb();
			swtch.addEventListener('click', euro2thb, false);
			function euro2thb() {
				click +=1;
				if (click % 2 ==1) {
					first.options[1].selected = true;
					second.options[2].selected = true;
					console.log('inv');
				} else {
					first.options[2].selected = true;
					second.options[0].selected = true;
					console.log('nor');
				}
			}
			break;
			
			case "2":
			onCalculate_euro2usd();
			swtch.addEventListener('click', euro2usd, false);
			function euro2usd() {
				if (click % 2 ==1) {
					first.options[0].selected = true;
					second.options[2].selected = true;
					console.log('inv');
				} else {
					first.options[2].selected = true;
					second.options[1].selected = true;
					console.log('nor');
				}
			}
			break;

			case "3":
			onCalculate_euro2euro();
			break;			
			
			default:
			console.log('unknow');
			break;
		}

		break;


		default:
		console.log('unknow');
		break;
	}
}

first.onchange = normal;
second.onchange = normal;
normal();
input.addEventListener('input', normal, false);