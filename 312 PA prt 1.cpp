// Joshua Cranek
// 312 Prog Assig

#include <stdexcept>
#include <iostream>

using namespace std;

//part 1

static int functionCount;

//basic functions 

bool And(bool a, bool b){
	
	functionCount++;
	return a && b;
	
}


bool Or (bool a, bool b){
	
	functionCount++;
	return a||b;
	
}

	
bool Not(bool a){
	
	functionCount++;
	return !a;
	
}


bool XOR(bool a, bool b){

	return OR(AND(a,NOT(b)),AND(NOT(a),b));
	
}


bool Mux(bool operation, bool output_if_true, bool output_if_false){

	return OR(AND(output_if_true, NOT(operation)),AND(output_if_false,operation));

}


bool Sum(bool a, bool b){

	return XOR(a,b);

}


bool Sum(bool a bool b, bool c){

	return SUM(SUM(a,b),c);

}


bool CarryOut(bool a, bool b, bool c){

	return OR(OR(AND(a,b),AND(a,c)),AND(b,c));

}


bool Equal(bool a, bool b){

	return NOT(SUM(a,b));

}


void printFunctionCount(){

	cout << "FunctionCount: " << functionCount << endl;

}


void print(bool a){

	cout << "Result: " << a << endl;

}


void resetFunctionCount(){

	functionCount = 0;

}
