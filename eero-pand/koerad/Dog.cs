using System;

namespace dogs
{
    class Dog
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"Auh!");
	    askForName();
	}
	static void askForName() {
	    Console.WriteLine("Mis on sinu nimi?");
	    string name;
	    name = Console.ReadLine();
	    Console.WriteLine("Kas su nimi on tõesti " + name + "?");
	    if (name.Length > 10) {
	       Console.WriteLine("Küll sul on pikk nimi!");
	    } else if (name.Length > 5) {
	      Console.WriteLine("Sul on keskmise pikkusega nimi.");
	    } else {
	      Console.WriteLine("Sul on lühike nimi.");
	    }
	    switch (name.Length) {
	       case 5: {
		   	Console.WriteLine("Nii palju korruseid on meie majal.");
			break;
		}
		case 2: {
		     Console.WriteLine("Nii palju eri numbreid tunneb arvuti.");
		     break;
		}
		default: {
			 Console.WriteLine("Öösiti on külmem kui väljas.");
			 break;
			 }
			 }
			 int numberOfOccurencies = countCharacter(name, 't');
			 Console.WriteLine("Sinu nimes esineb t-täht " + numberOfOccurencies + " korral.");
			 numberOfOccurencies = countCharacterWithWhile(name, 'a');
			 Console.WriteLine("Sinu nimes esineb a-täht " + numberOfOccurencies + " korral.");
}
	static int countCharacter(string stringToParse, char character) {
	       int numberOfOccurencies = 0;
	       for (int numberOfCharacter = 0; numberOfCharacter < stringToParse.Length; numberOfCharacter++) {
	       	   if (stringToParse[numberOfCharacter] == character) {
		      numberOfOccurencies++;
		   }
		   }
		   return numberOfOccurencies;
	}
	static int countCharacterWithWhile(string stringToParse, char character) {
	       int numberOfOccurencies = 0;
	       int index = 0;
	       while (index < stringToParse.Length) {
	       	     if (stringToParse[index] == character) {
		     	numberOfOccurencies++;
		}
		index++;
		}
		return numberOfOccurencies;
	}
}
}
