using System;


namespace toolid {  
	  class Tool {
	  static void Main(string[] args) {
	  Console.WriteLine ($"kriik!");
	  Console.WriteLine ("Mis on sinu nimi?);	
	  string name;
	  name = Console.ReadLine();
	  Console.WriteLine("Kas su nimi on tõesti " + name + "?");
	  if (name.Length > 10) {
	     Console.WriteLine("Küll sul on pikk nimi!");
	     } else {
	     Console.WriteLine("Küll sul on pikk nimi!");
	     } else if (name.Length > 5) {
	     Console.WriteLine("Sul on keskmise pikkusega nimi.");
	     } else {
	     Console.WriteLine("Sul on lühike nimi.");
	    }
	   switch (name.lenght) {
	   	  case 5: {
		       Console.WriteLine("Nii palju korruseid on meie majal.");
		       break;
		  }
		  case 2: {
		       Console.WriteLine("Öösiti on külmem kui väljas.");
		       break;
		  }
			}
         }
     }
}      