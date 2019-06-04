#include <stdio.h>

int main(){

int a,b,c,d,e,f;
int sum1, sum2, sum3;
int sub1, sub2, sub3;
int prod1, prod2, prod3;
int quot1, quot2, quot3;


printf("Enter first set of two numbers: \n");
scanf("%d", &a);
scanf("%d", &b);

printf("Enter second set of two numbers: \n");
scanf("%d", &c);
scanf("%d", &d);

printf("Enter third set of two numbers: \n");
scanf("%d", &e);
scanf("%d", &f);

sum1 = a + b;
sum2 = c + d;
sum3 = e + f;
sub1 = a - b;
sub2 = c - d;
sub3 = e - f;
prod1 = a * b;
prod2 = c * d;
prod3 = e * f;
quot1 = a / b;
quot2 = c / d;
quot3 = e / f;

printf("\nSingle Instruction Single Data: \n");
printf("\nTIME 1: \n");
printf(" \t\t%d + %d = %d \n", a,b, sum1);

printf("\nTIME 2: \n");
printf("\t\t%d + %d = %d \n", c,d, sum2);

printf("\nTIME 3: \n");
printf("\t\t%d + %d = %d \n", e,f, sum3);

printf("\nSingle Instruction Multiple Data: \n");
printf("\nTIME 1: \n");

printf("\t\t%d + %d = %d \n", a,b, sum1);
printf("\t\t%d + %d = %d \n", c,d, sum2);
printf("\t\t%d + %d = %d \n", e,f, sum3);

printf("\nMultiple Instruction Single Data: \n");
printf("\nTIME 1: \n");
printf("\t\t%d + %d = %d \n", a,b, sum1);
printf("\t\t%d - %d = %d \n", a,b, sub1);
printf("\t\t%d * %d = %d \n", a,b, prod1);
printf("\t\t%d / %d = %d \n", a,b, quot1);

printf("\nMultiple Instruction Multiple Data: \n");
printf("\nTIME 1: \n");
printf("\t\t%d + %d = %d \n", a,b, sum1);
printf("\t\t%d - %d = %d \n", a,b, sub1);
printf("\t\t%d * %d = %d \n", a,b, prod1);
printf("\t\t%d / %d = %d \n", a,b, quot1);
printf("\n");

printf("\t\t%d + %d = %d \n", c,d, sum2);
printf("\t\t%d - %d = %d \n", c,d, sub2);
printf("\t\t%d * %d = %d \n", c,d, prod2);
printf("\t\t%d / %d = %d \n", c,d, quot2);
printf("\n");

printf("\t\t%d + %d = %d \n", e,f, sum3);
printf("\t\t%d - %d = %d \n", e,f, sub3);
printf("\t\t%d * %d = %d \n", e,f, prod3);
printf("\t\t%d / %d = %d \n", e,f, quot3);


return 0;




}
