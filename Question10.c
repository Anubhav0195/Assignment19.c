#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char a[3][2][20]={{"Prateek","123"},{"Anubhav","0198"},{"Chotu","0903"}};
    char username[]="Anubhav";
    char password[]="0198";
    
    for(i=0;i<3;i++)
    {
        if(strcmp(username,a[i][0]) == 0 && strcmp(password,a[i][1]) == 0)
        {
            printf("Login sucessful: ");
            flag = 1;
        }
        
    }
    if(flag == 0)
    {
        printf("Username and password not matched");
        return 0;
    }



}