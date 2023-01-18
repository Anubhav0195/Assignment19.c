#include<stdio.h>
int main()
{
    char str[5][20];
    int i,j, vowel = 0;
    printf("Enter the string: ");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j] !='\0';j++)
        {
            if(str[i][j]=='a'|| str[i][j]=='e'|| str[i][j]=='i'|| str[i][j]=='o'|| str[i][j]=='u')
            vowel++;

        }
        printf("%s =%d\n",str[i],vowel);
        vowel=0;
    }
    return 0;
}