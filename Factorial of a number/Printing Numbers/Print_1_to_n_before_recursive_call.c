#include <stdio.h>

void increasing(int n)
{
    if (n == 0) 
        return;   // base case

    printf("%d\n", n);   // print BEFORE recursion
    increasing(n - 1);  // recursive call
    /*  Print before recursion → decreasing order (n to 1)*/
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    increasing(n);
    return 0;
}
/*
increasing(5)
 print 5
 └─ increasing(4)
    print 4
    └─ increasing(3)
       print 3
       └─ increasing(2)
          print 2
          └─ increasing(1)
             print 1
             └─ increasing(0) → return

*/