#ifndef P5_H
#define P5_H

// Unsigned and signed versions of multiplier and divider.
// Note that you should integrate them into the ALU you built in p3.

bool* multu(bool* output, bool input1[8], bool input2[8]);
bool* mult(bool* output, bool input1[8], bool input2[8]);

bool* divu(bool* output, bool input1[8], bool input2[8]);
bool* div(bool* output, bool input1[8], bool input2[8]);

#endif // P5_H