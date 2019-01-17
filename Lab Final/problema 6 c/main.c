#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    unsigned char *p = &a;
    for(int i = 3; i >= 0; i--)
        printf("%d ", *(p+i));
    return 0;
}
