README HappyNumbers

	I. Einleitung

Das Programm dient dazu alle fröhliche Zahlen von 1 bis zu einer eingegebenen oberen Schranke zu finden und auszugeben.

Die Aufgabe habe ich aus dem Kapitel 15.5 des Buches "Das Java-Praktikum" 2. Auflage von R. Schiedermeier und K. Köhler.

	II. Was sind fröhliche Zahlen

Was sind fröhliche Zahlen?
Man prüft dies wie folgt:
	1. Man summiert das quadrat der einzelnen Ziffern der Zahl ist das Ergebnis 1, so handelt es
	   sich um eine fröhliche Zahl.
	
	2. Ist es nicht 1, so verfährt man mit dem ergebnis wie in Schritt 1.
	3. Man verfährt damit so lange, bis die 1 erreicht wurde, oder sich ein wiederholende
	   Reihenfolge ergibt.

Bsp:

19 => 1² + 9² = 82
82 => 8² + 2² = 68
68 => 6² + 8² = 100
100=> 1¹ + 0² = 1

Damit ist 19 eine Fröhliche Zahl.


	III.Programm Beschreibung:

UProgs enthält die Unterprogramme mit denen ich arbeite, HappyTest enthält die main Datei.

	Die Unterprogramme

	1.) Zehnhoch
	
	Übergibt einen Integer und nimmt diesen als exponenten einner Zehner Potenz. Diese wird
	zurückgegeben.
	Anmerkung: Zur Übung wollte ich nicht auf vordefinierte Funktionen zurückgreifen.

	2.) Stellen

	Man übergibt einen Integer und erhält als Aufgabe die Anzahl der Ziffern aus der die Zahl
	besteht.

	3.) Quersumme

	Man übergibt einen Integer, dessen einzelne Ziffern man quadriert und audsummiert und
	anschließend an das main Programm zurück gibt.

	4.) TestHappy

	Erhält einen Integer und Überprüft ob dieser dem Kriterium einer fröhlichen Zahl entspricht.

	5.) Das Programm gibtZiffern. . .

	Ist beim Codieren entstanden. Findet die einzelnen Ziffern einer Zahl und speicherte diese in
	das an ihm übergebene Array
	
