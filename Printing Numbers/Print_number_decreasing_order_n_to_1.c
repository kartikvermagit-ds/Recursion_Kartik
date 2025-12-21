#include <stdio.h>
void decreasing(int n)
{
    if (n == 0)
        return;
    printf("Code is unfinished:%d\n",n);
        decreasing(n - 1);
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
/*
Assume n=5
decreasing(5)
 ├─ print 5
 └─ decreasing(4)
     ├─ print 4
     └─ decreasing(3)
         ├─ print 3
         └─ decreasing(2)
             ├─ print 2
             └─ decreasing(1)
                 ├─ print 1
                 └─ decreasing(0)
                     └─ return (base case)

                     Output :
                     Code is unfinished:5
                     Code is unfinished:4
                     Code is unfinished:3
                     Code is unfinished:2
                     Code is unfinished:1



*/
//recursion is slower than Iteration