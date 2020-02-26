#include <stdio.h>
#include <stdlib.h>

int main(){
    float x;
    float y;
printf ("enter an integer");
    scanf("%f", & x);
    y = x*x+2*x; //error was on line 7 when semi colon on line 6 waas removed//
    printf ("y: %f/n", y); //words come up as 78/n//
    return 0;
}
