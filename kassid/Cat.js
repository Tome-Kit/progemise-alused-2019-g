"use strict";
class Cat{
    constructor(){
	console.info("Meow!");
	document.getElementById("buttonForAnswering").onclick=
	    function() {
		Cat.answer();
	    };
    }
    static answer() {
	document.getElementById("answer").innerHTML="Kas su nimi on tõesti " + document.getElementById("name").value + "?";
	if (document.getElementById("name").value.lenght > 10) {
	    document.getElementById("answer").innerHTML += " See on pikk nimi.";
	} else {
	    document.getElementById("answer").innerHTML += ("See on lühike nimi.");
	}
	let lengthOfName = document.getElementById("name").value.length;
	if (lengthOfName > 10) {
	    document.getElementById("answer").innerHTML += ("See on pikk nimi.");
	} else if (lengthOfName > 5) {
	    document.getElementById("answer").innerHTML += ("See on keskmise pikkusega nimi.");
	} else {
	    document.getElementById("answer").innerHTML += ("See on lühike nimi.");

	}
	switch (lengthOfName) {
	case 5: {
	    document.getElementById("answer").innerHTML += (" Sama palju maapealseid korruseid on meie majal.");
	    break;
	}
	case 2: {
	    document.getElementById("answer").innerHTML += (" Nii palju erinevaid numbreid tunneb arvuti.");
	    break;
	}
	default: {
	    document.getElementById("answer").innerHTML += (" Öösiti on külmem kui väljas.");
	}
	}
    }
}
let cat= new Cat();
