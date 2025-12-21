#include <stdio.h>
void pattern(int n)
{
    if (n == 0)
        return;          // base case
    printf("%d ", n);    // BEFORE recursive call
    pattern(n - 1);      // recursive call
    printf("%d ", n);    // AFTER recursive call
}
int main()
{
    int n = 4;
    pattern(n);
    return 0;
}
/*
pattern(4)
 print 4        ← before
 └─ pattern(3)
    print 3
    └─ pattern(2)
       print 2
       └─ pattern(1)
          print 1
          └─ pattern(0) → return
          print 1       ← after
       print 2
    print 3
 print 4
*/