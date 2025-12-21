#include<stdio.h>
void increasing(int x, int n)
{
    if(x>n)
    return ;
    printf("%d Code is unfinished\n",x);
    increasing(x+1,n);
    return;
}
int main()
{ int n;
    printf("Enter the number :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
/*
Assume n=5
increasing(1,5)
 ├─ print 1
 └─ increasing(2,5)
     ├─ print 2
     └─ increasing(3,5)
         ├─ print 3
         └─ increasing(4,5)
             ├─ print 4
             └─ increasing(5,5)
                 ├─ print 5
                 └─ increasing(6,5)
                     └─ return (x > n)
                     Output :
                     1 Code is unfinished
                     2 Code is unfinished
                     3 Code is unfinished
                     4 Code is unfinished
                     5 Code is unfinished

*/