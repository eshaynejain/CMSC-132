#include <stdio.h>

int main(){

int a,b,c,d,e,f,g,h;
int firstSumt1;
int firstSumt2;
int firstSumt3;
int secSumt1;
int secSumt2;
int secSumt3;

printf("Enter 4 numbers: \n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);

printf("Enter another 4 numbers: \n");
scanf("%d", &e);
scanf("%d", &f);
scanf("%d", &g);
scanf("%d", &h);


printf("%d %d %d %d \n", a, b, c, d);
printf("%d %d %d %d \n", e, f, g, h);


printf("At time T1: \n");
firstSumt1 = a + b;
printf("\t\tT1: Sum: %d \n", firstSumt1);

printf("At time T2: \n");
firstSumt2 = firstSumt1 + c;
secSumt1 = e + f;
printf("\t\tT2: Sum: %d\n", firstSumt2);
printf("\t\tT2: Sum: %d\n",secSumt1);

printf("At time T3: \n");
firstSumt3 = firstSumt2 + d;
secSumt2 = secSumt1 + g;
printf("\t\tT3: Sum: %d\n", firstSumt3);
printf("\t\tT3: Sum: %d\n", secSumt2);

printf("At time T4: \n");
secSumt3 = secSumt2 + h;
printf("\t\t%d", secSumt3);



return 0;




}
