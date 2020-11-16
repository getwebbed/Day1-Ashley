/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter an integer: ");
    scanf("%d", &size );
    printf("<");
    while(size>0)
    {
        printf("O");
        size = size-1;
    }
    printf(">");

    return 0;
}

/*
the input code for me didn't work, it may have been the c compiller that I was using. Although the code does look right, execpt it might be scanf("%d", &rows) instead of %size. 
*/
