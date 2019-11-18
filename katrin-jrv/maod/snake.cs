using System;

namespace snakes {
  class Snake {
      static void Main (string[] args) {
           Console.WriteLine ($"Sss..") ;
      }
   }
}

    Console.WriteLine ("What is your name, traveller?") ;
    string name;
    name = Console.Readline () ;
    Console.WriteLine ("Is your name really " + name + "?") ;
    if (name.Length > 6) {
       Console.WriteLine ("You have such a long name!") ;
    } else {
       Console.WriteLine ("Such a short name!")