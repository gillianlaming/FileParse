// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int parsingFunction(vector<string> & b, char * a);

int messageFunct(const char * a);

int main(int argc, char * argv[])
{
	
	//first check to make sure only 1 argument is being passed thru
	if (argc > commandLineArguments) {
		return messageFunct(argv[programName]);
	}

	vector<string> v;
	//want to pass v and argv[1] to parsing function
	int e = parsingFunction(v, argv[inputFile]);
	if (e != success) { //if the function wasn't successful
		return e;
	}

	vector<int> z;
	for (size_t s = 0; s < v.size(); ++s) { //test each string in v to see if it is only digits
		bool a = true;
		for (char& c : v[s]) { //iterate char by char thru string
			if (isdigit(c) == 0) { //isdigit returns 0 when the char is not a digit
				a = false;
			}
		}
		if (a) {
			int digitString;
			istringstream iss (v[s]);//(1) wrap the string in an input string stream, 
			iss >> digitString; //(2) use the stream's extraction (>>) operator to convert it to an integer, and 
			z.push_back(digitString); //(3) push that integer back into the vector of integers.
		}
		else {
			cout << v[s] << endl; //print to output stream if it doesn't contain all digits
		}
		
	}
	for (size_t s = 0; s < z.size(); ++s) {
		cout << z[s] << endl;
	}
    return 0;

}

int parsingFunction(vector<string> & b, char * a)
{ 
	//param a is name of the file
	//ifstream ifs;
	//ifs.open(a);
	ifstream ifs(a);
	if (ifs.is_open()) 
	{
		while (!ifs.eof()) {
			string line_1;
			getline(ifs, line_1);
			istringstream iss(line_1);
			while (iss >> line_1) { //while there are still strings to be extracted
				if (!line_1.empty()) { //exclude empty strings
					b.push_back(line_1);
				}
			}
		}
	}
	else {
		return failure; //unable to open file failure?
	}
	
	return success;
}

int messageFunct(const char * a) //takes a C style string or a reference to a const C++ style string as its only parameter
{
	cout << "usage: " << a << " input_file.txt" << endl; //print usage message
	return commandLineFail; //return failure number
}
