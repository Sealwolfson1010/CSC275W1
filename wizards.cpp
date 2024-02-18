#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include wizard header file to utilize variables
#include "wizards.h"


//Constructor for Wizards
wizards::wizards() {}



//call constructor of wizards
wizards::wizards(string Name, int Health, int Power, int Damage, int Spell, string Class, string Move, int Special) : character(Name, Health, Power, Damage)
{//Starting scope operator, this starts a code block
	//Defined our spell points
	spellPoints = Spell;
	//Defined wizard class
	wizardClass = Class;
	//Defined our special move
	specialMove = Move;
	//Defined our special move damage
	specialMoveDamage = Special;
}; // Ending scope operator, this end a block of code.



//This is our display method
void wizards::display()
{//Starting scope operator, this starts a code block
	//calls character display
	character::display();
	// The three cout store variables for their description
	cout << "This wizard has " << spellPoints << " spell points." << endl;
	cout << "Class of Wizard: " << wizardClass << endl;
	cout << "Special Move: " << specialMove << ". Adds " << specialMoveDamage << " points to current attack damage." << endl;
	
}; // Ending scope operator, this end a block of code.
