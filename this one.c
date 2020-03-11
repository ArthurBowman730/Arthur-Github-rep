#include <stdio.h>
#include <stdlib.h>

int main()
{
int sum = 0;
int i = 0;
int d = 2;
int xn = 2;
int xnm1 = 0;

d = xn - xnm1;

while (i < 11 ){
    i++;
    xn = xnm1 + d;
    sum = sum + xnm1;
    printf("%d\n %d\n", xnm1, sum);
    xnm1 = xn;

}
xnm1 = xn;
return 0;
}
