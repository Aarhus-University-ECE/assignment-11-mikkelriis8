#include "sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn (int n)
{
    /* pre-condition */
    assert(n > 0);
    
    /* post-condition */
    if(n == 1) { // base case
        return 1;
    } else { // inductive step
        return 2 * n - 1 + sumn(n - 1);
    }
}