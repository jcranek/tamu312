#ifndef P2_H
#define P2_H

bool* getValue(bool byte[8], int offset);
void writeValue(bool* byte, int offset, bool value);
void printValue(bool byte[8]);
void printValueInDecimal(bool byte[8]);

bool* mux(bool* output, bool operation, bool input1[8], bool input2[8]);
bool* addu(bool* output, bool input1[8], bool input2[8]);
bool* negate(bool* output, bool input[8]);
bool* subu(bool* output, bool input1[8], bool input2[8]);

bool equal(bool input1[8], bool input2[8]);
bool lessthan(bool input1[8], bool input2[8]);
bool greaterthan(bool input1[8], bool input2[8]);
bool* equal(bool* output, bool input1[8], bool input2[8]);
bool* lessthan(bool* output, bool input1[8], bool input2[8]);
bool* greaterthan(bool* output, bool input1[8], bool input2[8]);

bool* and8(bool* output, bool input1[8], bool input2[8]);
bool* or8(bool* output, bool input1[8], bool input2[8]);

bool* shiftLeft(bool* output, bool input[8]);
bool* shiftRight(bool* output, bool input[8]);

#endif // P2_H