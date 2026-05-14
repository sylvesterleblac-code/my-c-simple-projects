#include<stdio.h>
int a;
int b;
int main(){
int c;
int product(int a, int b);
printf("Input a: ");
scanf("%d", &a);
printf("Input b: ");
scanf("%d", &b);
c = product(a, b); // this is a function call
printf("The answer is: %d\n", c);
} // this is the end of the main
/* and this  is the 
start of a new variable
aka a user-defined function */
int product(int a, int b)
{ int Jibu; //local variables
 Jibu = a * b;
 return(Jibu);
}
