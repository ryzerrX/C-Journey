#include <stdio.h>

struct Budget_Cal
 {
    int option;
    int amount;
 };

struct Budget_Cal inputs()
{
    struct Budget_Cal a;
    printf("Action\n");
    scanf("%d",&a.option);
    if(a.option!=3)
    {
        printf("Enter amount\n");
        scanf("%d",&a.amount);
    }
    return a;

}

int main()
{
    printf("Options:\nWithdraw=1\tDeposit=2\tStatement=3\n");
    struct Budget_Cal temp;
    int totalbalance=0;
    int looprunning=1;
    while(looprunning)
    {
        temp=inputs();
        switch (temp.option)
        {
            case 1 :
            if(totalbalance>temp.amount)
            {
                totalbalance=totalbalance-temp.amount;
                printf("Balance:\t%d\n",totalbalance);
            }
            else
            {
                printf("Deposit some money first\n");
            }
            break;

            case 2 :
            totalbalance=totalbalance+temp.amount;
            printf("Balance:\t%d\n",totalbalance);

            break;

            case 3 :
            printf("Balance:\t%d\n",totalbalance);
            looprunning=0;
            break;

            default :
            break;
        }

    }

    return 0;
}
    