#include<stdio.h>
int main()
{
 int T[20];
 for(int i = 0; i < 20; i++)
 {printf("Input the tree size: \n");
 scanf("%d", &i);
 }
 int tallest = T[0];
 int shortest = T[0];
 for(int i = 0; i < 20; i ++)
 {if(i > T[0])
 {printf("The tallest tree is: %d\n", tallest);}
  {if(i < T[0])
{printf("The shortest tree is: %d\n", shortest);
 }}}



 return 0;
}
