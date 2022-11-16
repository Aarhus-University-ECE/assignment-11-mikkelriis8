extern "C"{
    #include <stdio.h>
    #include "sumn.h"
    #include "sum.h"
    #include "fib.h"
}


// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    
    printf("%d\n\n", sumn(3));
    
    printf("%d\n", sum(7));
    printf("%d\n", sumtail(7, 0));
    printf("%d\n\n", sumwhile(7));

    printf("%d\n", sum(33));
    printf("%d\n", sumtail(33, 0));
    printf("%d\n\n\n", sumwhile(33));

    printf("%d\n", fib(7, 0, 1));


    return 0;
}