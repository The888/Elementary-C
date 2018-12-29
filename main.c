#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{

int i=1;
srand(time(NULL));
int secretnumber=(rand()%20)+1;
char enter[10];
int guess;
printf("Welcome to the number guessing game\n");
printf("\nTo continue, press enter.\n");
gets(enter);
printf("A secret number between 1 and 20 has been generated and you've unlimited tries to guess it.\n");
printf("\nThe game will end when you correctly guesses the secret number.");
printf("\nTo continue, press enter.\n");

printf("Enter your (1) guess: ");
scanf("%d",&guess);

while (guess != secretnumber){
    if (guess > secretnumber){
        printf("Your guess is too large!");
    }else {
    printf("Your guess is too small!");
    }
      i+=1;
    printf("\nPlease try guessing again!");
    printf("\nEnter your (%d) guess: ",i);
    scanf("%d",&guess);


}
printf("\nCongratulations, you correctly guessed that the secret number is %d after %d trials!\n",secretnumber,i);
printf("\nPress enter to exit");
    return 0;

}
