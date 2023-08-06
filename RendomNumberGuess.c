#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number,guess,ngusesses=1;
    srand(time(0));
    number = rand()%100+1;//Generates a random number between 1 and 100
    // print f("The number is %d\n", number);
    printf("***This is an Game which generate a random number this number guses you.***\n\n");
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
