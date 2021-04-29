#include <stdio.h>
#include <conio.h>

int main()
{
    char sname[50];
    int rollno;
    char course[30];
    char city[20];

    printf("Enter your name: ");
    scanf("%s",&sname);

    printf("Enter your roll no: ");
    scanf("%d",&rollno);

    printf("Enter your Course name: ");
    scanf("%s",&course);

    printf("Enter your city name: ");
    scanf("%s",&city);

    printf("\nStudent name: %s \nRoll No:%d \nCourse: %s \nCiyt: %s \n ",sname,rollno,course,city);

    return 0;
}
