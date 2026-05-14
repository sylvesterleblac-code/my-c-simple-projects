#include<stdio.h>
int main()
{
 char colour[20];
 char pluralNoun[20];
 char celebrity[20];
 char celebrityL[20];

 printf("Enter a colour: \n");
 scanf("%s", colour);
 printf("Enter a plural noun: \n");
 scanf("%s", pluralNoun);
 printf("Enter a celebrity: \n");
 scanf("%s%s", celebrity, celebrityL);
 
 printf("Roses are %s\n", colour);
 printf("Violets are %s\n", pluralNoun);
 printf("I love  %s %s\n", celebrity, celebrityL);
return 0;
}
