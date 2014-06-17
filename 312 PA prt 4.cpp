// Joshua Cranek
// 312 Prog Assig

#include <stdexcept>
#include <iostream>

using namespace std;

//part 3

static int functionCount;

//create something to check for overflow and throw an exception

bool* add(bool* output, bool input1[8], bool input2[8]);
bool* sub(bool* output, bool input1[8], bool input2[8]);
