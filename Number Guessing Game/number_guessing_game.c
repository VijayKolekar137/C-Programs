#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    char play;

    srand(time(0));

    number = rand()%100+1;

    //printf("Random number is %d\n",number);

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);

        if(guess>number)
        {
            printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);


    printf("Do you want to play agein (Y/N): ");
    scanf("%c",&play);

     if(play=='y')
        {
            main();
        }
        else if(play='n')
        {
            return 0;
        }

    return 0;
}
