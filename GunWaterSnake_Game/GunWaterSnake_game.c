#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int GunWaterSnake(char you, char comp)
{

    if(you == comp)
    {
        return 0;
    }

    if(you =='s' && comp =='w')
    {
        return 1;
    }
    else if(you =='w' && comp =='s')
    {
        return -1;
    }

    if(you =='g' && comp =='s')
    {
        return 1;
    }
    else if(you =='s' && comp =='g')
    {
        return -1;
    }

    if(you =='w' && comp =='g')
    {
        return 1;
    }
    else if(you =='g' && comp =='w')
    {
        return -1;
    }
}

int main()
{
    char you,comp;
    char resume;
    srand(time(0));
    int number = rand()%100 +1;

    if(number<33)
    {
        comp= 's';
    }
    else if(number>33 && number<66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("********************************* Gun Water Snake Game *******************************************\n\n\n");


    printf("Enter 'S' for snake, 'W' for water and 'G' for gun\n\n");
    scanf("%c",&you);


    int result = GunWaterSnake(you,comp);

    if(result == 0)
    {
        printf("\nIts Draw");
    }
    else if(result == 1)
    {
        printf("\nYou win");
    }
    else
    {
        printf("\nYou lose");
    }

    return 0;
}
