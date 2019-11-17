#! /usr/bin/env bash
echo "Auh!"
countCharacter() {
    local numberOfOccurencies=0
    for ((numberOfCharacter=1; numberOfCharacter<=${lengthOfName}; numberOfCharacter++))
    do
	local character=`expr substr "$1" $numberOfCharacter 1`
	if test "$character" == "$2"
	then
	    let "numberOfOccurencies++"
	fi
    done
    echo $numberOfOccurencies
}
countCharacterWithWhile() {
    local numberOfOccurencies=0
    local numberOfCharacter=1
    while (($numberOfCharacter <= ${lengthOfName}))
    do
	local character=`expr substr "$1" $numberOfCharacter 1`
	if test "$character" == "$2"
	then
	    let "numberOfOccurencies++"
	fi
	let "numberOfCharacter++"
    done
    echo $numberOfOccurencies
}

function askForName() {
    echo -n "Mis on sinu nimi? "
    read name
    echo "Kas su nimi on tõesti" $name?
    lengthOfName="${#name}"
    if test "${lengthOfName}" -gt 10
    then
	echo "See on pikk nimi."
    elif test "${lengthOfName}" -gt 5
    then
	echo "See on keskmise pikkusega nimi."
    else
	echo "See on lühike nimi."
    fi
    case "${lengthOfName}" in
	10)
	    echo "Nii palju on meie majal korruseid."
	    ;;
	5)
	    echo "Nii palju eri numbreid tunneb arvuti."
	    ;;
	*)
	    echo "Öösiti on külmem kui väljas."
	    ;;
    esac
}

askForName
numberOfOccurencies="$(countCharacter ${name} "t")"
echo "Sinu nimes sisaldub t-täht $numberOfOccurencies korral."
numberOfOccurencies2="$(countCharacterWithWhile ${name} "t")"
echo "Sinu nimes sisaldub t-täht $numberOfOccurencies2 korral."
