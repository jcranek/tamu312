# Joshua Cranek
# 312 Prog Assig

#include <stdexcept>
#include <iostream>

using namespace std;

#part 2

static int functionCount;


#create byte functions

bool getValue(bool byte[8], int offset){

	return byte[offset];

}


void writeValue(bool* byte, int offset, bool value){

	byte[offset] = value;
	
}


void printValue(bool byte[8]){

	cout << byte[1] << byte[2] << byte[3] << byte[4] << byte[5] << byte[6] << byte[7] << byte[8] << endl;

}


void printValueInDecimal(bool byte[8]){

	

}

 
bool* mux(bool* output, bool operation, bool input1[8], bool input2[8])
bool* addu(bool* output, bool input1[8], bool input2[8]);
bool* negate(bool* output, bool input[8]) (create the 2's complement version of 	 this number - make sure that a value negated twice is itself)

bool* subu(bool* output, bool input1[8], bool input2[8]);

bool equal(bool input1[8], bool input2[8]); (return 0 if two values are different) 

bool lessthan(bool input1[8], bool input2[8]); (return 0 if false)

bool greaterthan(bool input1[8], bool input2[8]); (return 0 if false)

bool* equal(bool* output, bool input1[8], bool input2[8]); (return 00000000 if two values are different) 

bool* lessthan(bool* output, bool input1[8], bool input2[8]); (return 00000000 if false)

bool* greaterthan(bool* output, bool input1[8], bool input2[8]); (return 00000000 if false)

bool* and(bool* output, bool input1[8], bool input2[8]); (bitwise and)

bool* or(bool* output, bool input1[8], bool input2[8]); (bitwise or)

bool* shiftLeft(bool* output, bool input[8]) (shift left all bits, equivalent to multiplication with 2)

bool* shiftRight(bool* output, bool input[8]) (shift right all bits including the sign bit)(shift in same value as MSB)
