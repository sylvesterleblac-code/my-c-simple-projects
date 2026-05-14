#include<stdio.h>
int main()
{
 int num1;
 printf("Enter a number: \n");
 scanf("%d", &num1);
 if(num1 < 10)
 {printf("Your number is not so cool\n");
 }
 else
 {
  printf("Your number is cool\n");
 }
 return 0;
}
