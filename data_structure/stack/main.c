#include "stack.h"

int main(void)
{
    stack i;
    
    stackinit(&i);
    printf("current cursor : %d\n", i.cur);
    return 0;
}
