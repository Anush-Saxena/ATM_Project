#include<stdio.h>
int main()
{
    float x, y;
    char ch;
    printf("Enter initial amount\n");
    scanf("%f",&x);
    printf("Enter \n c for credit\nd for debit \nb for balance\n");
    scanf("\n%c",&ch);
    switch(ch)
    {
    case 'c':
        printf("enter credit amount\n");
        scanf("%f",&y);
        x=x+y;
        printf("new amount=%f",x);
        break;
    case 'd':
        printf("Enter debit amount\n");
        scanf("%f",&y);
        if(x>=y)
        {
        x=x-y;
        printf("New Amount=%f",x);
        }
        else
        {
            printf("Insufficient amount");
        }
        break;
        case 'b':
        printf("amount in your account= %f",x);
        break;
        default:
        printf("choose correct option for operation");
    }
}