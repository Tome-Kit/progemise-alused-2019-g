#include <iostream>
#include <string.h>
using namespace std;
int countCharacter(char* string, char character) {
  int numberOfOccurencies = 0;
  int lengthOfString = strlen(string);
  for (int numberOfCharacter = 0; numberOfCharacter < lengthOfString; numberOfCharacter++) {
        if (string[numberOfCharacter] == character) {
         numberOfOccurencies++;
      }
  }
  return numberOfOccurencies;
}
int countCharacterWithWhile(char* string, char character) {
  int numberOfOccurencies = 0;
  int lengthOfString = strlen(string);
  int numberOfCharacter = 0;
  while (numberOfCharacter < lengthOfString) {
    if (string[numberOfCharacter] == character) {
      numberOfOccurencies++;
    }
    numberOfCharacter++;
  }
  return numberOfOccurencies;
}
void askForName() {
  char name[50];
  cout << "Auh!\n";
  cout << "Mis on sinu nimi? ";
  cin.getline(name, sizeof(name));
  cout << "Kas su nimi on tõesti " << name << "?" << endl;
  if (strlen(name) > 10) {
    cout << "See on pikk nimi." << endl;
  } else {
    cout << "See on lühike nimi." << endl;
  }
  int lengthOfName = strlen(name);
  if (lengthOfName > 10) {
    cout << "See on pikk nimi." << endl;
  } else if (lengthOfName > 5) {
    cout << "See on keskmise pikkusega nimi." << endl;
  } else {
    cout << "See on lühike nimi." << endl;
  }
  switch (lengthOfName) {
  case 5: {
    cout << "Nii palju on meie majal korruseid." << endl;
    break;
  }
  case 2: {
    cout << "Nii palju eri numbreid tunneb arvuti." << endl;
    break;
  }
  default: {
    cout << "Öösiti on külmem kui väljas." << endl;
  }
  }
  cout << "Sinu nimes sisaldub t-täht " << countCharacter(name, 't') << " korral" << endl;
  cout << "Sinu nimes sisaldub a-täht " << countCharacterWithWhile(name, 'a') << " korral" << endl;
}
// main() is where program execution begins.
int main() {
  askForName();
  return 0;
}
