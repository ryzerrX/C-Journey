#include <stdio.h>

int checkpassword(char name[])
{
    char str[] = "toshjadhav" ;
    for(int i=0; i<sizeof(str)-1; i++)
    {
        if(name[i]!=str[i])
        {
            return 0;
        }

    }
    if(name[sizeof(str)-1]=='\n')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
int main()
{
    char name[15];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
  
    int result=checkpassword(name);
    if(result)
    {
        printf("correct");
    }
    else
    {
        printf("password incorrect");
    }
    return 0;
}
