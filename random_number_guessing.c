#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%50+1;
    // printf("The number is %d \n",number);

    do{
        printf("Guess the number between 1 to 50 : ");
        scanf("%d",&guess);
        if(guess>number){
            printf("please try lower number\n");
        }
        else if (guess<number){
            printf("please try higher number\n");
        }
        else{
            printf("You guessed it in %d attempts",nguess);
        }
        nguess++;
        }while(guess!=number);
    return 0;
}