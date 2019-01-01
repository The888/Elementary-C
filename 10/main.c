#include <stdio.h>
#include <stdlib.h>

//Write a program that prints the next 20 leap years.

void outputfunction(temp,currentyear){
                for (int i =0;i<20;i++){
                printf("The next 20 leap years are: %d. %d\n",i+1,currentyear+temp);
                temp+=4; //leap year every 4 years
                }
}
int main()
{
    int currentyear;
    int remainder; //stores the remainder when current year is divided by 4
    int temp; //store number to increment current year
    printf("Please input the current year: ");
    scanf("%d",&currentyear);
    remainder = currentyear % 4;

    if (remainder==0){ //current year is a leap year
             temp=4; //next leap year in 4 years

        outputfunction(temp,currentyear);


    }else if (remainder == 1){
        temp =3; //next leap year in 3 years
    outputfunction(temp,currentyear);

        }
    else if (remainder == 2){
        temp =2;
     outputfunction(temp,currentyear);

    }else if (remainder == 3){
        temp =1;
     outputfunction(temp,currentyear);

    }else {
     temp =0;
     outputfunction(temp,currentyear);
    }
    return 0;
}
