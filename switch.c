#include<stdio.h>
#include<stdlib.h>

int main()
{
	char grade = 'A';
	switch(grade) {
	case 'A':
	    printf("You did great!\n");
		break;
	switch(grade) {
        case 'B':
            printf("You did good!\n");
                break;
        case 'C':
            printf("You did poorly!\n");
                break;
           
        case 'D':
            printf("You did very bad!\n");
                break;
        case 'E':
            printf("You failed!\n");
                break;
/*
        case 'E':
            printf("You did great!\n");
                break;
*/
	default:
       printf("Invalid grade\n");
}
return 0;
}
}
