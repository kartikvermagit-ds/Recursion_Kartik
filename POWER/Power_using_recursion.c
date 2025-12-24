#include<stdio.h>
int power(int a, int b)
{
    if(b==0)
    return 1;
     return a*power(a,b-1);
}
int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    int b;
    printf("Enter power : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to the power %d is %d",a, b, p);
    return 0;
}
/*
Tree Diagram for power(a, 4)
power(a,4)
   |
   └── a * power(a,3)
            |
            └── a * power(a,2)
                     |
                     └── a * power(a,1)
                              |
                              └── a * power(a,0)
                                       |
                                       └── 1

*/