// This program should create a file, put text in it, open it
// and print out the text. 
// Benjamin Goodhart
// 10-5-19

#include <iostream>
#include <fstream>
#include <string>


using std::ifstream; using std::ofstream; using std::string;
using namespace std;

/*int main() {

	// string myStr = "This is my string!"; (This has something to do with file i/o. Idk what tho. 
	// I think you can use strings somewhere in i/o

	// Declaring the file in the output stream and naming it "fileName"
	ofstream myFile("fileName.txt");

	// Creating a check to see if the file is open
	if (myFile.fail()) {
		cout << "Unable to open the file." << endl;
		exit(1);
	}
	else  // This is putting the text inside the "myFile", aka fileName, file. 
		myFile << "You successfully put text in this document." << endl;
	myFile.close();
	cout << "Text has successfully been put inside the file fileName.txt" << endl;
}*/


// String practice
int main() {
	
	cout << "Please enter your name: " << endl;
	string name, sentence;
	getline(cin, name);
	cout << "Please enter sentenece about yourself: " << endl;
	getline(cin, sentence);
	cout << "Your sentence is: " << name << sentence << endl;
	cout << name.size();


}