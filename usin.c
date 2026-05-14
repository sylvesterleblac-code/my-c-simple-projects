#include<stdio.h>
int main() 
{
 char name[20];
 printf("Enter your full name: \n");
 fgets(name, 20, stdin);
 printf("Your name is %s\n", name);
 return 0;
}

