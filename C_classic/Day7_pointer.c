#include <stdio.h>
//Call by value
int addV(int a, int b)
{
    return a+b;
}
//Call by reference
int addR(int* a , int *b)
{
    return *a+*b;
}

int main(void){
    int x = 3, y = 4;
    printf("%d\n", AddV(3,4));
    printf("%d\n", Add(&x,&y));
}