//variables recuperation des données du code C*/s
var planete;
var chargement=0;

var mercure;
var mercure_asym;
var venus;
var venus_asym;
var terre;
var terre_asym;
var mars;
var mars_asym;




function readFile(input) {//fonction de recuperation des donnees dans le fichier json cree par le code C
  let file = input.files[0];

  let reader = new FileReader();

  reader.readAsText(file);

  reader.onload = function() {
        
		planete = JSON.parse(reader.result);
		mercure = planete['merc-euler'];
		mercure_asym = planete['merc-asym'];
		venus = planete['venus-euler'];
		venus_asym = planete['venus-asym'];
		terre = planete['earth-euler'];
		terre_asym = planete['earth-asym'];
		mars = planete['mars-euler'];
		mars_asym = planete['mars-asym'];
		
		
		//console.log(mercure);
		chargement=1;
  };

  reader.onerror = function() {
    console.log(reader.error);
  };
}


//------------------------------------//
let i=0;
var canvas;
var indice_mercure = false;
var indice_mercureAsym = false;
var indice_venus = false;
var indice_venusAsym = false;
var indice_terre = false;
var indice_terreAsym = false;
var indice_mars = false;
var indice_marsAsym = false;

function setup() {//creation du canvas pour le dessin
  canvas = createCanvas(800, 430);
  canvas.position(450,140);
  background(3, 34, 76);
}


function draw() {
		
		if(chargement==1 && indice_mercure==true){ //mercure
			
			var x = ((mercure[i][0][0]) / 1000000000) + 400;
			var y = ((mercure[i][0][1]) / 1000000000) + 215;
			
			let c = color(223, 109, 20);
			fill(c);
			ellipse(x, y, 2);
			i++;
		}
		
		if(chargement==1 && indice_mercureAsym==true){ //mercure asymetrique

			var x = ((mercure_asym[i][0][0]) / 1000000000) + 400;
			var y = ((mercure_asym[i][0][1]) / 1000000000) + 215;
			
			let c = color(231, 62, 1);
			fill(c);
			ellipse(x, y, 3);
			i++;
		}
				if(chargement==1 && indice_venus==true){ //venus

			var x = ((venus[i][0][0]) / 1000000000) + 400;
			var y = ((venus[i][0][1]) / 1000000000) + 215;
			
			let c = color(121, 28, 248);
			fill(c);
			ellipse(x, y, 2);
			i++;
		}
		
		if(chargement==1 && indice_venusAsym==true){ //venus asymetrique

			var x = ((venus_asym[i][0][0]) / 1000000000) + 400;
			var y = ((venus_asym[i][0][1]) / 1000000000) + 215;
			
			let c = color(75, 0, 130);
			fill(c);
			ellipse(x, y, 3);
			i++;
		}
		
		if(chargement==1 && indice_terre==true){ //terre

			var x = ((terre[i][0][0]) / 1000000000) + 400;
			var y = ((terre[i][0][1]) / 1000000000) + 215;
			
			let c = color(22, 184, 78);
			fill(c);
			ellipse(x, y, 2);
			i++;
		}
		
		if(chargement==1 && indice_terreAsym==true){ //terre asymetrique

			var x = ((terre_asym[i][0][0]) / 1000000000) + 400;
			var y = ((terre_asym[i][0][1]) / 1000000000) + 215;
			
			let c = color(84, 249, 141);
			fill(c);
			ellipse(x, y, 3);
			i++;
		}
		
		if(chargement==1 && indice_mars==true){ //mars

			var x = ((mars[i][0][0]) / 1000000000) + 400;
			var y = ((mars[i][0][1]) / 1000000000) + 215;
			
			let c = color(184, 32, 16);
			fill(c);
			ellipse(x, y, 2);
			i++;
		}
		
		if(chargement==1 && indice_marsAsym==true){ //mars asymetrique

			var x = ((mars_asym[i][0][0]) / 1000000000) + 400;
			var y = ((mars_asym[i][0][1]) / 1000000000) + 215;
			
			let c = color(219, 23, 2);
			fill(c);
			ellipse(x, y, 3);
			i++;
		}
		
		
		
		
		let c = color('yellow');
		fill(c);
		noStroke(); // pas de bordure
		ellipse(400, 215, 30);// soleil
		
		if (i > 36490){
		i = 0;
		clear();
		background(3, 34, 76);
		}
		
}

// function fichier() {
// var input = document.createElement('input');
// input.type = 'file';
// input.click();
// }


//fonctions apres activation des boutons
function mercure_indice(){
	indice_mercure = !indice_mercure;
}
function mercureAsym_indice(){
	indice_mercureAsym = !indice_mercureAsym;
}
function venus_indice(){
	indice_venus = !indice_venus;
}
function venusAsym_indice(){
	indice_venusAsym = !indice_venusAsym;
}
function terre_indice(){
	indice_terre = !indice_terre;
}
function terreAsym_indice(){
	indice_terreAsym = !indice_terreAsym;
}
function mars_indice(){
	indice_mars = !indice_mars;
}
function marsAsym_indice(){
	indice_marsAsym = !indice_marsAsym;
}


function Reset() {
	i = 0;
	clear();
	background(3, 34, 76);
	draw();
}

