// THis is for me to test variables 
// Succesffuly made int values for the name and the age of the character. 
// Could change the name or age to anything you desire now that there are integers. 

#include <iostream>;

using namespace std; 

int main()
{
	int characterAge;
	characterAge = 69;
	// This is the first way of doing variables. First you establish the name by typing "int 'variable name'".
	// Then you write the variable and what you want to set the desired value to. 

	string characterName = "Benjamin";
	// The second way to do this is to type "string," then the variable name, then equals, and then type what you want the var to be. 

	cout << "There once was a man named " << characterName << "." << endl;
	cout << "He took a CS class which made him stressed." << endl;
	cout << "The class made him feel like he was " << characterAge << " even though he was only 19." << endl; 
	cout << "There was a lot of self teaching that " << characterName << " had to do." << endl; 

	return 0; 
}