#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include sorcerer header file to utilize variables
#include "sorcerer.h"
//Include support header file to utilize variables
#include "support.h"
//Include wizard header file to utilize variables
#include "wizards.h"
//Utilizing this allows us to not have to put std on every line
using namespace std;

//This function is for wizards
void wizard();
//This function is for sorcerers
void sorcerers();
//This function is for supports
void supports();
//This is a string function for user choice
string getUserChoice();

//Main function
int main()
{ //Starting scope operator, this starts a code block

	//string variable for user choice
	std::string userChoice;

	//Three cout for introduction of the program
	cout << "\t\t *** Wizards vs. Sorcerers ***";
	cout << "\n\nWelcome player! \nThis is a teaser for a future game that is currently in the works. \n\nWhat list would you like to see first?";
	cout << "\n\nYour choices are: \n\nWizards \nSorcerers \nSupport";

	//Call the string function for getting user choice
	userChoice = getUserChoice();

	//return 0 because main returns an int
	return 0;
} // Ending scope operator, this end a block of code.


//Function for supports
void supports()
{ //Starting scope operator, this starts a code block
	//string variable for user choice
	string userChoice;

	//call class support 
	support c1("Xavier", 50, 30, 5, 25, 15, "Paladin");
	//calls method for support 1
	c1.display();
	//call class support 
	support c2("Jimothy", 100, 35, 5, 25, 15, "Cleric");
	//calls method for support 2
	c2.display();

	cout << "\n\nYour choices are: \n\nWizards \nSorcerers \nSupport";
	
	//call the string function
	userChoice = getUserChoice();


} // Ending scope operator, this end a block of code.

// Function that stores all wizard values
void wizard()
{ //Starting scope operator, this starts a code block
	//string variable for user choice
	string userChoice;

	cout << "\n\nWizards:" << endl;
	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display();
	cout << "Kalimvor is the Grand Wizard of Time. With his power he can bend the flow of time; reversing his enemies attacks and changing the state of the battlefield.\n" << endl;
	//think of character like declaring an integer
	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display();

	cout << "Kelter is a wizard of the undead. With his power he can make the dead rise and use them to fight off his enemies in the battlefield." << endl;


	cout << "\n\nYour choices are: \n\nWizards \nSorcerers \nSupport";

	//call the string function
	userChoice = getUserChoice();



} // Ending scope operator, this end a block of code.

//function that stores all sorcerer value
void sorcerers()
{ //Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice;

	//cout display
	cout << "\nSorcerers" << endl;

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic");
	// will display s1 values
	s1.display();

	cout << "\nArther of the Lost is a sorcerer that studied Curse Magic. His concentration lead him down a dark path of evil sorcerery. He was exiled from his school and now uses his magic to curse his enemies.\n";
	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts");
	//will display s2 values
	s2.display();

	cout << "\nThough he was once a neurosurgeon, after losing his ability to fully use his hands. Dr. Strange became a Master of the Mystic Arts; he is the beholder of the time stone and a great rival to Kalimvor of Time.";

	cout << "\n\nYour choices are: \n\nWizards \nSorcerers \nSupport";

	//call the string function
	userChoice = getUserChoice();


} // Ending scope operator, this end a block of code.

// string function created for user choice
std::string getUserChoice()
{ //Starting scope operator, this starts a code block
	//string for user choice
	string userChoice;
	//cout for question
	cout << "\n\nWhat would you like to see? ";
	//getline will get users choice and store it here and display
	getline(std::cin, userChoice);

	//if created for wizard choice
	if (userChoice == "Wizards" || userChoice == "Wizard" || userChoice == "wizards" || userChoice == "wizard")
	{ //Starting scope operator, this starts a code block
		//call wizard function
		wizard();
	} // Ending scope operator, this end a block of code.
	// else if for sorcerer choice
	else if (userChoice == "Sorcerers" || userChoice == "Sorcerer" || userChoice == "sorcerers" || userChoice == "sorcerer")
	{ //Starting scope operator, this starts a code block
		//call sorcerer function
		sorcerers();
	} // Ending scope operator, this end a block of code.
	// else if for support choice
	else if (userChoice == "Supports" || userChoice == "Support" || userChoice == "supports" || userChoice == "support")
	{ //Starting scope operator, this starts a code block
		//call support function
		supports();
	} // Ending scope operator, this end a block of code.
	// catch all if user does not make a choice
	else
	{ //Starting scope operator, this starts a code block
		cout << "\nInvalid Response, please try again or check spelling.";
	}// Ending scope operator, this end a block of code.
	
	//return userchoice value
	return userChoice;
} // Ending scope operator, this end a block of code.