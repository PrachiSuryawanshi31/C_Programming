#include "Header.h"

#include<assert.h>

int main()
{
    assert(Addition(10,11) == 22);     //assert - test engine

    assert(Addition(-10,20) == 10);
    
    assert(Addition(-10,-20) == -30);


    return EXIT_SUCCESS;
}