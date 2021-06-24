// This program reads from a file and justfies the text
// 10-22-19
// Benjamin Goodhart

#include <iostream>
#include <string>
#include <fstream>
#include <time.h>  


using std::cout; using std::cin; using std::endl;
using std::string; using std::ifstream; using std::ofstream;

int main() {
	ifstream fin;
	ofstream fout;
	srand(time(nullptr));

	fin.open("unjustified.txt");
	fout.open("justified.txt");
	
		string s;

		while (getline(fin, s)) {

			int insertPoint = 0;

			while (s.find_first_of(".,?!;", insertPoint) != string::npos){
				if (s.find_last_of(".,?!;") == s.size() - 1)
					break;
				int Pos = s.find_first_of(".,?!;", insertPoint);
				s.insert(Pos + 1, " ");
				insertPoint = Pos + 1;


			};

			int Pos = 0;

			while (s.length() > 40 && s.length() < 75) {
				Pos = s.find_first_of(" ", Pos);
				if (rand() % 2 && Pos != -1) {
					s.insert(Pos + 1, " ");
				}
				if (Pos == -1) {
					Pos = 0;
				}
					Pos = s.find_first_not_of(" ", Pos);
				}

			fout << s << endl;

		}
		fout.close();
		fin.close();
}