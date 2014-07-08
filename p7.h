#ifndef P7_H
#define P7_H

// This will tick a clock cycle, in which you will mimic the execution of the 5
// stages: IF, ID, EX, MEM, and WB, using functions you have built before.
//
// Your implementation MUST clearly show these 5 stages.
//
// Do not forget to increment PC.
//
// Note that you will also need to make changes to support the "load immediate
// value" instruction (LI) whose op code is 00001010.
void tick();

#endif // P7_H