#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct Student{
char name[50];
char course[50];
int age;
char grade;

};

int main(){
struct Student student1;
student1.age = 22;
student1.grade = 'A';
strcpy(student1.name, "Hellen");
strcpy(student1.course, "Geology");

printf("%c\n", student1.grade);
printf("%s\n", student1.name);
printf("%s\n", student1.course);
printf("%d\n", student1.age);
//printf("%c", student1.g
return 0;
}
