import java.util.Scanner;
class Dog {
    public static String askName() {
	System.out.println("Mis on sinu nimi?");
	Scanner scanner = new Scanner(System.in);
	String name = scanner.nextLine();
	scanner.close();
	System.out.println("Kas su nimi on tõesti " + name + "?");
	int lengthOfName = name.length();
	if (lengthOfName > 10) {
	    System.out.println("Küll sul on pikk nimi!");
	} else if (lengthOfName > 5) {
	    System.out.println("Küll sul on mõõdukas nimi!");
	} else {
	    System.out.println("Küll sul on lühike nimi!");
	}
	switch (lengthOfName) {
	case 7: {
	    System.out.println("Nii palju on pöialpoisse!");
	    break;
	}
	case 2: {
	    System.out.println("Nii palju eri numbreid tunneb arvuti.");
	    break;
	}
	default: {
	    System.out.println("Ma ei viitsi isegi mitte võrrelda!");
	}
	}
	return name;
    }
    public static void main(String[] args) {
	String name = Dog.askName();
	System.out.println("Sinu nimes sisaldub a-täht " + String.valueOf(Dog.countCharacter(name, 'a')) + " korral.");
	System.out.println("Kontroll: " + Dog.countCharacterWithWhile(name, 'a'));
    }

    public static int countCharacter(String string, char character) {
	int numberOfOccurencies = 0;
	for (int numberOfCharacter = 0; numberOfCharacter < string.length(); numberOfCharacter++) {
		if (string.charAt(numberOfCharacter) == character) {
			numberOfOccurencies++;
		}
	}
	return numberOfOccurencies;
    }

    public static int countCharacterWithWhile(String string, char character) {
	int numberOfOccurencies = 0;
	int numberOfCharacter = 0;
	int lengthOfString = string.length();
	while (numberOfCharacter < lengthOfString) {
	    if (string.charAt(numberOfCharacter) == character) {
		numberOfOccurencies++;
	    }
	    numberOfCharacter++;
	}
	return numberOfOccurencies;
    }
    
}
