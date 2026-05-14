#include<stdio.h>
int main() {
int secretNum = 23;
int guess ;
while(1){
printf("Enter a number: ");
scanf("%d", &guess);
if(guess < secretNum){
printf("Too low. Try again: \n")
scanf(;}else if(guess == secretNum)
{printf("Yay! You got it.");}
else{printf("Too High\n");}

}


return 0;
}
