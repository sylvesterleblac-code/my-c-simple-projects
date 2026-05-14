#include<stdio.h>

int main()
{
int age = 30;
double gpa = 3.4;
char grade = 'A';
int * pAge = &age;
double * pGpa = &gpa;
char * pGrade = &grade;
printf("Age's memory address is %p\n", &age);
printf("the memory address is %d\n", *pAge);

return 0;
}
