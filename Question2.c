#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20],s[20];
    int i,r,round;
    printf("Enter 10 city name:");
    for(i=0;i<9;i++)
    {
        gets(str[i]);
    }
    for(round=1;round<=9;round++)
    {
        for(i=0;i<9-round;i++)
        {
            r=strcmp(str[i],str[i+1]);
            if(r>0)
            {
                strcpy(s,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],s);
            }

        }
    }
    printf("Strings in dictionary order\n");
    for(i=0;i<9;i++)
    {
        printf("%s\n",str[i]);
    }
    

    return 0;
}