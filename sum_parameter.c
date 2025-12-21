#include<stdio.h>
void sum (int n, int s)
{
    if(n==0)
     {
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
/*
sum(4, 0)
→ sum(3, 4)

sum(3, 4)
→ sum(2, 7)

sum(2, 7)
→ sum(1, 9)

sum(1, 9)
→ sum(0, 10)

sum(0, 10)
→ print 10
*/