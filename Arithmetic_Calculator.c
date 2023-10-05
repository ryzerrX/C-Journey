#include <stdio.h>

struct Input
{
   int option;
   int val1, val2;
};

struct Input get_inputs()
{
    struct Input a;
    printf("action\n");
    scanf("%d",&a.option);
    printf("numbers\n");
    scanf("%d%d",&a.val1,&a.val2);
    return a;
}

int addition(int val1, int val2)
{
    int c;
    c=val1+val2;
    return c;
}

void option_name()
{
    printf("1=add\t2=sub\telse=retry\n");
}


void main() 
{
    
    option_name();
    struct Input tmp;
    int c;
    int loop_running=1;
    while (loop_running)
    {
        tmp = get_inputs();
        switch (tmp.option)
        {
        case 1 :
            printf("Addition\n");
            c = addition(tmp.val1,tmp.val2);
            printf("%d\n",c);
            loop_running=0;
            break;
        case 2 :
            printf("Subtraction\n");
            c=tmp.val1-tmp.val2;
            printf("%d\n",c);
            loop_running=0;
            break;
        case 3 :
            loop_running=0;

        default:
            break;
        }
    }
    
}
