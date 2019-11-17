#include<stdio.h>
#include<string.h>
int countCharacter(char* string, char character) {
  int numberOfOccurencies = 0;
  int lengthOfString = strlen(string);
  for (int index = 0; index < lengthOfString; index++) {
    if (string[index] == character) {
      numberOfOccurencies++;
    }
  }
  return numberOfOccurencies;
}
int countCharacterWithWhile(char* string, char character) {
  int numberOfOccurencies = 0;
  int lengthOfString = strlen(string);
  int index = 0;
  while (index < lengthOfString) {
    if (string[index] == character) {
      numberOfOccurencies++;
    }
    index++;
  }
  return numberOfOccurencies;
}
void askForName() {
  printf("Mis on sinu nimi?\n");
  char name[50];
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;
  printf(
	 "Kas su nimi on tõesti %1$s?\n",
	 name // 1
  );
  int lengthOfName = strlen(name);
  if (lengthOfName > 10) {
    printf("Küll sul on pikk nimi!\n");
  } else if (lengthOfName > 5) {
    printf("Sul on keskmise pikkusega nimi.\n");
  } else {
    printf("Sul on lühike nimi.\n");
  }
  switch (lengthOfName) {
  case 5: {
    printf("Nii palju korruseid on me majal.\n");
    break;
  }
  case 2: {
    printf("Nii palju eri numbreid tunneb arvuti.\n");
    break;
  }
  default: {
    printf("Öösiti on külmem kui väljas.\n");
  }
  }
  int numberOfOccurencies = countCharacter(name, 't');
  printf(
	 "Sinu nimes esineb t-täht %1$u korral.\n",
	 numberOfOccurencies // 1
	 );
  numberOfOccurencies = countCharacterWithWhile(name, 'a');
  printf(
	 "Sinu nimes esineb a-täht %1$u korral.\n",
	 numberOfOccurencies // 1
	 );
}
int main() {
  printf("Auh!\n");
  askForName();
  return 0;
}
