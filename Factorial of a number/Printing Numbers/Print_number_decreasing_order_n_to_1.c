#include <stdio.h>
void decreaing(int n)
{
    if (n == 0)
        return;
    printf("Code is unfinished:%d\n",n);
        decreaing(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",& n);
    decreasing(n);//call the decreasing function
    return 0;
}
//recursion is slower than Iteration