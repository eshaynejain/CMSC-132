#include <stdio.h>

int main() {

int x;
int R0 = 9;
int sum;

printf("Enter a number: ");
scanf("%d", &x);

sum = x + R0;

R0 = sum;

printf("The MAR of x is %d \n");
printf("The MDR of x is %d \n", x);
printf("The sum of the two numbers is %d \n", R0);


}
