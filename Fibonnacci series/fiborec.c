#include <stdio.h>
int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // int x = fibo(n);
    printf("%d", fibo(n));
    return 0;
}
/*
Recursion Tree for fibo(5)
fibo(5)
├── fibo(4)
│   ├── fibo(3)
│   │   ├── fibo(2) → 1
│   │   └── fibo(1) → 1
│   │       fibo(3) = 2
│   └── fibo(2) → 1
│       fibo(4) = 3
└── fibo(3)
    ├── fibo(2) → 1
    └── fibo(1) → 1
        fibo(3) = 2

fibo(5) = 3 + 2 = 5

Type	           Complexity
Time Complexity 	O(2ⁿ)
Space Complexity	O(n)
*/