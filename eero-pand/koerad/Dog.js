"use strict";
class Dog {
    constructor(){
	console.info("Auh!");
	document.getElementById("buttonForAnswering").onclick = function() {
	    Dog.answer();
	};
    }
    static answer() {
	document.getElementById("answer").innerHTML = "Kas su nimi on tõesti " + document.getElementById("name").value + "?";
	if (document.getElementById("name").value.length > 10) {
	    document.getElementById("answer").innerHTML += (" See on pikk nimi.");
	} else {
	    document.getElementById("answer").innerHTML += (" See on lühike nimi.");
	}
	const lengthOfName = document.getElementById("name").value.length;
	console.log(lengthOfName);
	if (lengthOfName > 10) {
	    document.getElementById("answer").innerHTML += (" See on pikk nimi.");
	} else if (lengthOfName > 5) {
	    document.getElementById("answer").innerHTML += (" See on keskmise pikkusega nimi.");
	}  else {
	    document.getElementById("answer").innerHTML += (" See on lühike nimi.");
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
	document.getElementById("answer").innerHTML += (" Sinu nimes sisaldub t-täht " + Dog.countCharacterWithWhile(document.getElementById("name").value, "t") + " korral.");

    }
    static countCharacter(string, character) {
	let numberOfOccurencies = 0;
	for (let numberOfCharacter = 0; numberOfCharacter < string.length; numberOfCharacter++) {
	    console.log(character);
	    if (string.charAt(numberOfCharacter) === character) {
		
			numberOfOccurencies++;
		}
	}
	return numberOfOccurencies;
    }
    static countCharacterWithWhile(string, character) {
	let numberOfCharacter = 0;
	let numberOfOccurencies = 0;
	while (numberOfCharacter < string.length) {
	    if (string.charAt(numberOfCharacter) == character) {
		numberOfOccurencies++;
	    }
	    numberOfCharacter++;
	}
	return numberOfOccurencies;
    }

}
const dog = new Dog();
