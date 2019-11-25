<?php
declare(strict_types=1);
ini_set ( 'display_errors', '1' );
if (defined ( 'E_DEPRECATED' )) {
     error_reporting ( E_ALL & ~ E_DEPRECATED & ~E_STRICT );
} else {
     error_reporting ( E_ALL & ~ E_STRICT);
}
class tool {
      public static function askname() {
                echo "Kriik!\n";
	   }$name = readline("Mis on sinu nimi? ");
}
tool::askName();
