#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number,guess,ngusesses=1;
    srand(time(0));
    number = rand()%100+1;//Genarates a random number between 1 and 100
    // printf("The number is %d\n", number);
    printf("***This is an Game wich genarate a random number this number gusse you.***\n\n");
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number Please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number Please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n",ngusesses);
        }
        ngusesses++;
    } while (guess!=number);
    
    return 0;
}