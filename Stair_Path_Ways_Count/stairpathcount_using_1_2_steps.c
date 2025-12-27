#include<stdio.h>
int stair(int n)
{
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    int totalWays = stair(n-1)+stair(n-2);
    return totalWays;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}
/*
stair(5)
├── stair(4)
│   ├── stair(3)
│   │   ├── stair(2) → 2
│   │   └── stair(1) → 1
│   └── stair(2) → 2
│       stair(4) = 5
└── stair(3)
    ├── stair(2) → 2
    └── stair(1) → 1
        stair(3) = 3

stair(5) = 5 + 3 = 8

Time Complexity: O(2ⁿ)
Space Complexity: O(n)

*/