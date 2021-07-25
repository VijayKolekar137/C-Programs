#include<stdio.h>

int main()
{
    FILE *fp1;
    FILE *fp2;

    char c;

    fp1 = fopen("source.txt","r");
    fp2 = fopen("target.txt","w");

    c = fgetc(fp1);

    while(c!=EOF)
    {
        fputc(c,fp2);
        c = fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
