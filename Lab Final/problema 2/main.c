#include <stdio.h>
#include <stdlib.h>

int operatie(int a, int b){
    char op;
    op = getchar();
    switch(op){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            return;
        case '*':
            printf("%d",a*b);
            return;
        case '/':
            if(b == 0){
                printf("Nu se poate imparti cu 0");
                break;
            }
            else
                printf("%f",a/b);
                return;
        default:
            printf("Nu s-a introdus operator corect");
            return;

    }
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    getchar();
    operatie(a,b);
    return 0;
}
