// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char * argv[])
{
	
	//first check to make sure only 1 argument is being passed thru
	if (argc > 2) {
		//badbadbad
		//call the usage message function
	}

	vector<string> v;
	//want to pass v and argv[1] to parsing function
	int e = parsingFunction(argv[1], v);

	vector<int> z;
	//test each string in v to see if it is only digits
	//use C++ library isdigit function ********

    return 0;

}

int parsingFunction(vector<string> & b, char * a)
{ 
	//second parameter is name of the file
	ifstream ifs;
	ifs.open(a);
	if (ifs.is_open()) 
	{
		string line_1;
		getline (ifs, line_1);
		istringstream iss(line_1);
		while (iss >> line_1) { //while there are still strings to be extracted
			if (!line_1.empty()) { //exclude empty strings
				b.push_back(line_1);
			}
		}
	}
	if (/*error*/) {
		return /*nonzero*/;
	}
	return 0;
}
