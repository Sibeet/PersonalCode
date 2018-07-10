#include <stdio.h>

typedef struct stack{
        int data[10];
        int cur;
}stack;

extern void stackinit(stack *arg);
extern int top(stack *arg);
void pop();
void push();
void empty();
