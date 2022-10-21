#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
