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


bool XOR(bool a, bool b)
bool Mux(bool operation, bool output_if_true, bool output_if_false)
bool Sum(bool a, bool b) 
bool Sum(bool a bool b, bool c)
bool CarryOut(bool a, bool b, bool c)
bool Equal(bool a, bool b)


void printFunctionCount()
void print(bool a)
void resetFunctionCount()
