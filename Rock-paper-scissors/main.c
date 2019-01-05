#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char answer[8];

void print(choice){
printf("\nComputer chose %s!\n\n",choice);
 }

void compchoice(){

 srand(time(NULL));
 char choice[8]="";

 int r = rand() % 3;
  if (r==0){
    strcpy(choice,"rock");
    print(choice);
  }else if (r==1){
     strcpy(choice,"paper");
     print(choice);
  }else {
     strcpy(choice,"scissors");
     print(choice);
 }
compare(choice);
}

void compare(choice){

if ((strcmp(answer,"rock")==0) && (strcmp(choice,"paper")==0)){
    printf("You lose");
}else if ((strcmp(answer,"rock")==0) && (strcmp(choice,"scissors")==0)){
    printf("You win");
}
else if ((strcmp(answer,"paper")==0) && (strcmp(choice,"scissors")==0)){
    printf("You lose");
}else if ((strcmp(answer,"paper")==0) && (strcmp(choice,"rock")==0)){
    printf("You win");
}else if ((strcmp(answer,"scissors")==0) && (strcmp(choice,"paper")==0)){
    printf("You win");
}else if ((strcmp(answer,"scissors")==0) && (strcmp(choice,"paper")==0)){
     printf("You lose");
 }else{
   printf("It's a tie!");
 }



}



int main()
{

   printf("Welcome to the rock paper scissors games! \n \n");
   printf("Choose between rock, paper or scissors: ");
   scanf("%s",&answer);
   compchoice();

printf("\n\n");
    return 0;
}
