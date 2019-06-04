#include <stdio.h>

long convertFirstToBinary(int a);
long convertSecondToBinary(int b);
long convertThirdToBinary(int c);
long convertFourthToBinary(int d);
long convertFifthToBinary(int e);

int main(){

int a;
int b;
int c;
int d;
int e;
int i;
int ctr;
int k;
int R0 = 0;
int R1;
int R2;
int binaryFirstInput;
int binarySecondInput;
int binaryThirdInput;
int binaryFourthInput;
int binaryFifthInput;
int choice;
int binarySum[15];
int sumOfBinary;
long firstBinary;
long secondBinary;
long thirdBinary;
long fourthBinary;
long fifthBinary;

//Input five numbers greater than 4 bits
    printf("Please input five numbers greater than 4 bits: \n");

//Input first number
do{
    printf("Enter first number: \n");
    scanf("%d", &a);
}while(a < 15);

//convert first input to binary
long convertFirstToBinary(int a){
int binaryFirstInput = 0;
int r, i = 1, step = 1;

while(a != 0){
    r = a % 2;
    printf("Step %d: %d/2, Remainder = %d, Quotient = %d \n \n", step++, a, r, a/2);
    a = a / 2;
    binaryFirstInput = binaryFirstInput + r * i;
    i = i * 10;
}
    return binaryFirstInput;
}


//Input second number
do{
    printf("Enter second number: \n");
    scanf("%d", &b);
}while(b < 15);

//Convert second input to binary
long convertSecondToBinary(int b){
int binarySecondInput = 0;
int r, i = 1, step = 1;

while(b != 0){
    r = b % 2;
    printf("Step %d: %d/2, Remainder = %d, Quotient = %d \n \n", step++, b, r, b/2);
    b = b / 2;
    binarySecondInput = binarySecondInput + r * i;
    i = i * 10;
}
    return binarySecondInput;
}

//Input third number
do{
    printf("Enter third number: \n");
    scanf("%d", &c);
}while(c < 15);

//Convert third input to binary
long convertThirdToBinary(int c){
int binaryThirdInput = 0;
int r, i = 1, step = 1;

while(c != 0){
    r = c % 2;
    printf("Step %d: %d/2, Remainder = %d, Quotient = %d \n \n", step++, c, r, c/2);
    c= c / 2;
    binaryThirdInput = binaryThirdInput + r * i;
    i = i * 10;
}
    return binaryThirdInput;
}


//Input fourth number
do{
    printf("Enter fourth number: \n");
    scanf("%d", &d);
}while(d < 15);

//Convert fourth input to binary
long convertFourthToBinary(int d){
int binaryFourthInput = 0;
int r, i = 1, step = 1;

while(d != 0){
    r = d % 2;
    printf("Step %d: %d/2, Remainder = %d, Quotient = %d \n \n", step++, d, r, d/2);
    d = d / 2;
    binaryFourthInput = binaryFourthInput + r * i;
    i = i * 10;
}
    return binaryFourthInput;
}


//Input fifth number
do{
    printf("Enter fifth number: \n");
    scanf("%d", &e);
}while(e < 15);

//Convert fifth input to binary
long convertFifthToBinary(int e){
int binaryFifthInput = 0;
int r, i = 1, step = 1;

while(e != 0){
    r = e % 2;
    printf("Step %d: %d/2, Remainder = %d, Quotient = %d \n \n", step++, e, r, e/2);
    e = e / 2;
    binaryFifthInput = binaryFifthInput + r * i;
    i = i * 10;
}
    return binaryFifthInput;
}


//Display five numbers
printf("The five numbers you inputted are: %d, %d, %d, %d, and %d \n \n", a, b, c, d, e);
printf("The binary conversion of the first number: %d is %d \n \n", a, convertFirstToBinary(a));
printf("The binary conversion of the second number: %d is %d\n \n", b, convertSecondToBinary(b));
printf("The binary conversion of the third number: %d is %d\n \n", c, convertThirdToBinary(c));
printf("The binary conversion of the fourth number: %d is %d\n \n", d, convertFourthToBinary(d));
printf("The binary conversion of the fifth number: %d is %d \n \n", e, convertFifthToBinary(e));


//Assign first number to R1
R1 = a;
//Assign second number to R2
R2 = b;
//Add R1 and R2 and assign sum to R0
R0 = R1 + R2;

printf("The sum of input 1 and input 2 is %d \n \n", R0);


//Assign third number to R1
R1 = c;

//R0 + new R1
R0 = R0 + R1;

//Add previous R0 and new R1
printf("The sum of current R0 and input 3 is %d \n \n", R0);

//Assign fourth number to R2
R2 = d;

//R0 + new R2
R0 = R0 + R2;

//Add previous R0 and new R2
printf("The sum of current R0 and input 4 is %d \n \n", R0);

//Assign fifth number to R1
R1 = e;

//R0 + new R1
R0 = R0 + R1;

//Add previous R0 and new R1
printf("The sum of current R0 and input 5 is %d \n \n", R0);

return 0;

}





