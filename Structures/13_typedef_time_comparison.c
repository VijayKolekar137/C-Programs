#include<stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
}time;

void display_time(time t)
{
    printf("The timing is %d:%d:%d\n",t.hour,t.minute,t.second);
}

int time_comp(time t1, time t2)
{
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    if(t1.hour<t2.hour)
    {
        return -1;
    }

    if(t1.minute>t2.minute)
    {
        return 1;
    }
    if(t1.minute<t2.minute)
    {
        return -1;
    }

    if(t1.second>t2.second)
    {
        return 1;
    }
    if(t1.second<t2.second)
    {
        return -1;
    }

    return 0;
}

int main()
{
    time t1 = {4,5,45};
    time t2 = {8,45,50};

    display_time(t1);
    display_time(t2);

    int result = time_comp(t1,t2);

    printf("The time comparison result is %d",result);

    return 0;
}
