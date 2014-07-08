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

 
bool* mux(bool* output, bool operation, bool input1[8], bool input2[8]){

	output[0] = MUX(operation, input1[0], input2[0]);
	output[1] = MUX(operation, input1[1], input2[1]);
	output[2] = MUX(operation, input1[2], input2[2]);
	output[3] = MUX(operation, input1[3], input2[3]);
	output[4] = MUX(operation, input1[4], input2[4]);
	output[5] = MUX(operation, input1[5], input2[5]);
	output[6] = MUX(operation, input1[6], input2[6]);
	output[7] = MUX(operation, input1[7], input2[7]);
	return output;

}

bool* addu(bool* output, bool input1[8], bool input2[8]){

	output[0] = SUM(input1[0], input2[0], false);
	bool Carry = CarryOut(input1[0], input2[0], false);

	output[1] = SUM(input1[1], input2[1], Carry);
	Carry = CarryOut(input1[1], input2[1], Carry);

	output[2] = SUM(input1[2], input2[2], Carry);
	Carry = CarryOut(input1[2], input2[2], Carry);

	output[3] = SUM(input1[3], input2[3], Carry);
	Carry = CarryOut(input1[3], input2[3], Carry);

	output[4] = SUM(input1[4], input2[4], Carry);
	Carry = CarryOut(input1[4], input2[4], Carry);

	output[5] = SUM(input1[5], input2[5], Carry);
	Carry = CarryOut(input1[5], input2[5], Carry);

	output[6] = SUM(input1[6], input2[6], Carry);
	Carry = CarryOut(input1[6], input2[6], Carry);

	output[7] = SUM(input1[7], input2[7], Carry);
	Carry = CarryOut(input1[7], input2[7], Carry);

	output[8] = Carry;

	return output;

}


bool* negate(bool* output, bool input[8]){ # (create the 2's complement version of 	 this number - make sure that a value negated twice is itself)

	output[0] = NOT(input[0]);
		output[1] = NOT(input[1]);
		output[2] = NOT(input[2]);
		output[3] = NOT(input[3]);
		output[4] = NOT(input[4]);
		output[5] = NOT(input[5]);
		output[6] = NOT(input[6]);
		output[7] = NOT(input[7]);

		bool one[8] = {1,0,0,0,0,0,0,0};
		bool temp[8];

		return addu(temp, output, one);

}

bool* subu(bool* output, bool input1[8], bool input2[8]){

	return addu(output, input1, negate(output,input2));

}


bool equal(bool input1[8], bool input2[8]){  (return 0 if two values are different) 

	bool sum = SUM(input1[0],input2[0]);
	sum = SUM(sum, input1[1],input2[1]);
	sum = SUM(sum, input1[2],input2[2]);
	sum = SUM(sum, input1[3],input2[3]);
	sum = SUM(sum, input1[4],input2[4]);
	sum = SUM(sum, input1[5],input2[5]);
	sum = SUM(sum, input1[6],input2[6]);
	sum = SUM(sum, input1[7],input2[7]);
	return sum;

}

bool lessthan(bool input1[8], bool input2[8]){ # (return 0 if false)

	bool* out;
	return AND(NOT(equal(input1,input2)),subu(out,input1,input2)[7]);

}

bool greaterthan(bool input1[8], bool input2[8]){ # (return 0 if false)

	return lessthan(input2,input1);

}

bool* equal(bool* output, bool input1[8], bool input2[8]){ # (return 00000000 if two values are different) 

	output[0] = EQUAL(input1[0],input2[0]);
	output[1] = EQUAL(input1[1],input2[1]);
	output[2] = EQUAL(input1[2],input2[2]);
	output[3] = EQUAL(input1[3],input2[3]);
	output[4] = EQUAL(input1[4],input2[4]);
	output[5] = EQUAL(input1[5],input2[5]);
	output[6] = EQUAL(input1[6],input2[6]);
	output[7] = EQUAL(input1[7],input2[7]);
	return output;

}

bool* lessthan(bool* output, bool input1[8], bool input2[8]){ (return 00000000 if false)

	output = mux(output,lessthan(input1, input2),one, zero);
	return output;

}

bool* greaterthan(bool* output, bool input1[8], bool input2[8]){ (return 00000000 if false)

	output = mux(output,greaterthan(input1, input2),one, zero);
	return output;

}

bool* and8(bool* output, bool input1[8], bool input2[8]){ #  (bitwise and)

	output[0] = AND(input1[0], input2[0]);
	output[1] = AND(input1[1], input2[1]);
	output[2] = AND(input1[2], input2[2]);
	output[3] = AND(input1[3], input2[3]);
	output[4] = AND(input1[4], input2[4]);
	output[5] = AND(input1[5], input2[5]);
	output[6] = AND(input1[6], input2[6]);
	output[7] = AND(input1[7], input2[7]);
	return output;

}

bool* or8(bool* output, bool input1[8], bool input2[8]){ #  (bitwise or)

	output[0] = OR(input1[0], input2[0]);
	output[1] = OR(input1[1], input2[1]);
	output[2] = OR(input1[2], input2[2]);
	output[3] = OR(input1[3], input2[3]);
	output[4] = OR(input1[4], input2[4]);
	output[5] = OR(input1[5], input2[5]);
	output[6] = OR(input1[6], input2[6]);
	output[7] = OR(input1[7], input2[7]);
	return output;

}

bool* shiftLeft(bool* output, bool input[8]){ # (shift left all bits, equivalent to multiplication with 2)

	output[0] = 0;
	output[1] = input[0];
	output[2] = input[1];
	output[3] = input[2];
	output[4] = input[3];
	output[5] = input[4];
	output[6] = input[5];
	output[7] = input[6];

	return output;

}

bool* shiftRight(bool* output, bool input[8]){ # (shift right all bits including the sign bit)(shift in same value as MSB)

	output[0] = input[1];
	output[1] = input[2];
	output[2] = input[3];
	output[3] = input[4];
	output[4] = input[5];
	output[5] = input[6];
	output[6] = input[7];
	output[7] = 0;

	return output;

}
