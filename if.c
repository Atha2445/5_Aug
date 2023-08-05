#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("person is eligible for voting");
    }
    else
    {
        printf("He/She is still Small");
    }
    return 0;
}
