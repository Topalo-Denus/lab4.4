#include <stdio.h>
#include <math.h>



int main(void) {
float dx, y, a, b; // variables declaration
float pi;

pi=3.14;
dx=pi/20;


printf("Enter the lower limit of the interval: ");
scanf("%f", &a);
printf("Enter the upper limit of the interval: ");
scanf("%f", &b);

if (a + dx < b) {
printf(" The lower limit:%2.f\n ",a);

printf("The upper limit:%2.f\n", b);

printf(" The interval step:%2.3f\n", dx);
printf("\n--------------");
printf(" \nX\t|\tY\n");
printf("--------------\n");
while (a <= b) {
y = (float)(tan(a));
printf("%2.1f\t|\t%2.1f\n", a, y);
printf("--------------\n");
a += dx;
}
}
else 
printf("\nIncorrect lower and upper bounds entered. Tryagaing...\n");

return 0;
}