#include<stdio.h>

int main() 
{
FILE * fpointer = fopen("employees.txt", "w");

fprintf(fpointer, "Gift, Penetration Tester\nJohn, Social Engineer\nPinato, soc analyst");

fclose(fpointer);


return 0;
}
