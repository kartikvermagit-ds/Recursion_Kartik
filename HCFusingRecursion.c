#include <stdio.h>
unsigned int findHCF(int a, int b);
int main()
{
    int a, b, z;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    z = findHCF(a, b);
    printf("HCF is %d", z);

    return 0;
}

unsigned int findHCF(int a, int b)
{
    if (b == 0)          // base case
        return a;

    return findHCF(b, a % b);   // recursive call
}
/*
a = 24, b = 18
findHCF(24,18)
 └── findHCF(18, 24 % 18 = 6)
      └── findHCF(6, 18 % 6 = 0)
           └── return 6   ← base case

Algorithm used: Euclid’s Algorithm
Time Complexity: O(log n)
Space Complexity: O(log n) (recursion stack)

*/