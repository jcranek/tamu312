# Joshua Cranek
# 312 Prog Assig

#include <stdexcept>
#include <iostream>

using namespace std;

#part 3

static int functionCount;

#create an alu


#Create variables for each of the following:
#Let 16 (00010000)= ADDU
#Let 17 (00010001)= SUBU
#Let 2 (00000010)= NEG
#Let 3 (00000011)= EQ
#Let 4 (00000100)= LT
#Let 5 (00000101)= GT
#Let 6 (00000110)= AND
#Let 7 (00000111)= OR
#Let 8 (00001000)= SLL
#Let 9 (00001001)= SRL

#Create an 8 bit ALU that can do all of the above operations on a byte:

bool* alu(bool op_code[8], bool* output, bool input1[8], bool input2[8]){

	switch(BinToDec(op_code))
	{
		case OP_ADDU:
			return addu(output,input1,input2);
			break;
		case OP_SUBU:
			return subu(output,input1,input2);
			break;
		case OP_NEG:
			return negate(output,input1);
			break;
		case OP_EQ:
			return equal(output,input1,input2);
			break;
		case OP_LT:
			return lessthan(output,input1,input2);
			break;
		case OP_GT:
			return greaterthan(output,input1,input2);
			break;
		case OP_AND:
			return and8(output,input1,input2);
			break;
		case OP_OR:
			return or8(output,input1,input2);
			break;
		case OP_SLL:
			return shiftLeft(output,input1);
			break;
		case OP_SRL:
			return shiftRight(output,input1);
			break;
		default:
			return zero;
			break;
	}

}
