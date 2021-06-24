// This will calculate a persons BMR
// Benjamin Goodhart
// 09/20/19

#include <iostream>

using namespace::std; using::cin; using::cout;

// Declaring bmr men & women

double bmrMen(double w, double h, double a);
double bmrWomen(double w, double h, double a);


int main() {
	double weightInPound; 
	int heightInInch, heightInFeet, age, gender;

	cout << "Input your weight to the nearest tenth in pounds: ";
	cin >> weightInPound;
	cout << "Input your height in feet: ";
	cin >> heightInFeet;
	cout << "Input your weight in inches: ";
	cin >> heightInInch;
	cout << "Input age: ";
	cin >> age;
	cout << "Enter a '1' for male or enter a '2' for female: ";
	cin >> gender;
	
	double bmr;

	if (gender == 1)
		bmr = bmrMen(weightInPound, (12 * heightInFeet) + heightInInch, age);

	else bmr = bmrWomen(weightInPound, (12 * heightInFeet) + heightInInch, age);

	cout << "Your BMR is " << bmr << "." << endl;

	double donuts;
	donuts = bmr / 195;
	cout << "You can eat " << donuts << " medium sized donuts." << endl;
}



double  bmrMen(double w, double h, double a) {
	return 66 + (6.3 * w) + (12.9 * h) - (6.8 * a);
	
}

double bmrWomen(double w, double h, double a) {
	return 655 + (6.3 * w) + (12.9 * h) - (4.7 * a);
	
}
