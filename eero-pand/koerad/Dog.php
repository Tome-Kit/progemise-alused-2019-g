<?php
declare(strict_types=1);
ini_set ( 'display_errors', '1' );

if (defined ( 'E_DEPRECATED' )) {
	error_reporting ( E_ALL & ~ E_DEPRECATED & ~ E_STRICT );
} else {
	error_reporting ( E_ALL & ~ E_STRICT );
}
class Dog {
      public static function askName() {
      	     echo "Auh!\n";
	     $name = readline("Mis on sinu nimi? ");
	     echo sprintf(
	     	  'Kas su nimi on tõesti %1$s?%2$s',
		  $name, // 1
		  "\n" // 2
		  );
		  if (strlen($name) > 10) {
		     echo "See on pikk nimi.\n";
		  } else {
		     echo "See on lühike nimi.\n";
}
		$lengthOfName = strlen($name);
		if ($lengthOfName > 10) {
		     echo "See on pikk nimi.\n";		
		} else if ($lengthOfName > 5) {
		     echo "See on keskmise pikkusega nimi.\n";
		} else {
		     echo "See on lühike nimi.\n";
		}
		switch ($lengthOfName) {
			case 5: {
			     echo "Sama palju korruseid on meie majal.\n";
			     break;
			}
			case 2: {
			     echo "Nii palju erinevaid numbreid tunneb arvuti.\n";
			     break;
			}
			default: {
			     echo "Öösiti on külmem kui väljas.\n";
			}
		}

		echo sprintf(
		     'Sinu nimes sisaldub t-täht %1$u korral. %2$s',
		     Dog::countCharacter($name, 't'), // 1
		     "\n" // 2
		);
		echo sprintf(
		     'Sinu nimes sisaldub t-täht %1$u korral. %2$s',
		     Dog::countCharacterWithWhile($name, 't'), // 1
		     "\n" // 2
		);
	 }
		  public static function countCharacter(string $string, string $character): int {
		  	 $numberOfOccurencies = 0;
			 for ($numberOfCharacter = 0; $numberOfCharacter < strlen($string); $numberOfCharacter++) {
			     if (substr($string, $numberOfCharacter, 1) === $character) {
			     	$numberOfOccurencies++;
				}
				}
				return $numberOfOccurencies;
			}
			public static function countCharacterWithWhile(string $string, string $character): int {
			       $numberOfCharacter = 0;
			       $lengthOfString = strlen($string);
			       $numberOfOccurencies = 0;
			       while ($numberOfCharacter < $lengthOfString) {
			       	     if (substr($string, $numberOfCharacter, 1) === $character) {
				     	$numberOfOccurencies++;
				}
				$numberOfCharacter++;
				}
				return $numberOfOccurencies;
			}
}
Dog::askName();
