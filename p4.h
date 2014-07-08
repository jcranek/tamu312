#ifndef P4_H
#define P4_H

// The following two functions operate on signed numbers, and throws an
// exception when overflow happens.
// You should also integrate them into the ALU you built in p3.
bool* add(bool* output, bool input1[8], bool input2[8]);
bool* sub(bool* output, bool input1[8], bool input2[8]);

#endif // P4_H