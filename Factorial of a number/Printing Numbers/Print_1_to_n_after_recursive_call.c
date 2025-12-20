#include <stdio.h>
void increasing(int n)
{
    if (n == 0) return;// base case
      increasing(n - 1); // call
      printf("Code is unfinished:%d\n",n); //code
    return;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    increasing(n);//call the increasing function
    return 0;
}
//recursion is slower than Iteration
/*
increasing(5)
 └─ increasing(4)
    └─ increasing(3)
       └─ increasing(2)
          └─ increasing(1)
             └─ increasing(0) → return
          print 1
       print 2
    print 3
 print 4
print 5
*/