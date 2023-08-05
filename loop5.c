#include<stdio.h>
int main()
{
    int n,sum=0,a,t,rev;
    printf("Enter a no.");
    scanf("%d",&n);
    t=n;
    while(n!=0);
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }

    if (t==rev)
        printf("Pallindrome");
    else
        printf("Not Pallindrome");
    return 0;

}

