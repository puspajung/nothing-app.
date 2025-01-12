#include<stdio.h>
int main()
{
    int num,rem,great=0;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=rem%10;
        great=(num>great)?num:great;
        num=num/10;
    }
    printf("greatest=%d",great);
    return 0;
}
