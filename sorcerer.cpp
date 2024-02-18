// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include sorcerer header file to utilize variables
#include "sorcerer.h"

//This is our enemy class

//Constructor for sorcerer
// This doesn't do anything
sorcerer::sorcerer() {}


//Defined our sorcerer class
sorcerer::sorcerer(string Name, int Health, int Power, int Damage, int Critical, string School, string Study) : character(Name, Health, Power, Damage)
{ //Starting scope operator, this starts a code block
	
	//Defined our sorcerer school
	sorcererSchool = School;
	//Defined our sorcerers study
	sorcererStudy = Study;
	//Defined our critical damage
	criticalDamage = Critical;
}; // Ending scope operator, this end a block of code.
//This is our display method
void sorcerer::display()
{ //Starting scope operator, this starts a code block
	//calls character display
	character::display();
	// The two cout store variables for their description
	cout << "This sorcerer went to the school of " << sorcererSchool << " where he studied in " << sorcererStudy << endl;

	cout << "When drawing enough power from the dark realm, this sorcerers critical damage adds " << criticalDamage << " points to their attack damage." << endl;
} // Ending scope operator, this end a block of code.