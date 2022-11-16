/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    /* pre-condition */
    assert(n > 0);
    
    /* post-condition */
    if(n < 3) { // base case -> returns the final Fibonacci number
        return pp + p; 
    } else { // inductive step
        return fib(n - 1, pp, p + pp);
    }
}
