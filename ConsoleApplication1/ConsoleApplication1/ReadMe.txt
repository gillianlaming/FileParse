Gillian Laming, Lab 1

1. Errors encountered over in process:
- 'parsingFunction': Lab1 identifier not found
- no suitable conversion function from "std::string" to "int" exists, mismatched type error	

2. Test cases ran (i.e., what the command lines were), and summary 
of what prgram did and whether that was correct behavior.
- Command Lines run:
Lab1.exe input_file.txt
output from that command line was:
these
all
are
strings
7string
str4ing
string2
more
strings
0
1
2
3
5
7
11
13
17
19

I also ran echo %errorlevel%, which return 0 which indicated success. 

Extra Credit: Attempting to create directory /home/warehouse/gdlaming/perl5
@gdlaming@shell ~

make: Nothing to be done fro "Makefile"
*** No rule to make target 'Lab1.cpp', needed by 'Lab1.exe'. Stop.

command prompt: ./Lab1.exe input_file.txt
result: -bash: ./Lab1.exe: cannot execute binary file

make error: 
range-based afora loops are not allowed in C++98 mode 
*** [Lab1.exe] Error 1