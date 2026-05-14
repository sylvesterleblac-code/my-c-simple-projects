#include<stdio.h>

int main()
{int secretNumber = 78;
int guessCount = 0;
int guess;
int guessLimit = 5;
int outOfGuesses = 0;
while(guess != secretNumber){
if (guessCount < guessLimit)
printf("Enter a guess: ");
scanf("%d", &guess);
if (guess < secretNumber) 
{printf("Too High\n");

else{printf("Too Low\n");}
guessCount++;}else {outOfGuesses == 1;}
printf("Hey you win\n");}}
/*if(guess > secretNumber){
printf("Too large\n");
}else if(guess < secretNumber){printf("Too small\n");
}*/return 0;
}
