print("Auh!")
def countCharacter(string, character):
    numberOfOccurencies = 0
    lengthOfString= len(string)
    for index in range(0, lengthOfString):
        if string[index] == character:
            numberOfOccurencies += 1
    return numberOfOccurencies
def countCharacterWithWhile(string, character):
    numberOfOccurencies = 0
    lengthOfString = len(string)
    index = 0
    while index < lengthOfString:
        if string[index] == character:
            numberOfOccurencies += 1
        index += 1
    return numberOfOccurencies
def askForName():
    name = input("Mis on sinu nimi? ")
    print("Kas su nimi on tõesti " + name + "?")
    lengthOfName = len(name)
    if lengthOfName > 10:
        print("Sul on pikk nimi.")
    elif lengthOfName > 5:
        print("Sul on keskmise pikkusega nimi.")
    else:
        print("Sul on lühike nimi.")
    numberOfOccurencies = countCharacter(name, "t")
    sentence = "Sinu nimes esineb t-täht {0} korral."
    print(sentence.format(numberOfOccurencies))
    numberOfOccurencies = countCharacterWithWhile(name, "a")
    sentence = "Sinu nimes esineb a-täht {0} korral."
    print(sentence.format(numberOfOccurencies))
askForName()
