#include "stdafx.h"

using namespace std;
int randint() //Gets a random integer 0-3
{
	int r = rand() % 4;
	return r;
}

int main()
{
	srand(time(0)); //Seeds the random function
	string bases[4] = { "A","T","C","G" };
	cout << "Enter the length of the strand you wish to generate: ";
	string len;
	cin >> len;
	string out;
	string out2;
	//for each character in the input string
	for (int x = 0; x < stoi(len); x++) {
		out.append(bases[randint()]); //append randomly chosen base to output string using randint() function
	}
	for (int x = 0; x < out.length(); x++) {
		char c = out[x];
		if (c == 'A') {
			out2.append("T");
		} 
		else if (c == 'T') {
			out2.append("A");
		}
		else if (c == 'C') {
			out2.append("G");
		}
		else if (c == 'G') {
			out2.append("C");
		}
	}
	cout << out << "\n" << out2 << "\n";
	cout << "What base should the frequency be calculated for: ";
	char inf;
	cin >> inf;
	int outf = 0;
	//for each character of the generated DNA strand string
	for (int x = 0; x < out.length(); x++) {
		char c = out[x];
		//if character is the one getting the frequency calculated for
		if (c == inf) {
			outf = outf + 1; //add 1 to the frequency as one occurence of the base was found
		}
	}
	cout << outf << "\n";
	//system("pause>nul"); //pause program waiting for input before exit
	return 0;
}
