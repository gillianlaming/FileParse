// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include <vector>
#include <iostream>
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
	parsingFunction(argv[1], v);

	vector<int> z;
	//test each string in v to see if it is only digits
	//use C++ library isdigit function ********

    return 0;

}

int parsingFunction(string a, vector<string> b) { //this is temp. mostly a placeholder so i can create framework for code

}



//hello