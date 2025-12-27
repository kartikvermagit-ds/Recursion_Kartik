#include<stdio.h>
int stair(int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    int totalWays = stair(n-1)+stair(n-2)+stair(n-3);
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
RECURSION TREE DIAGRAM
For stair(4) (1, 2, 3 steps allowed)
stair(4)
├── stair(3)   ← 1 step
│   ├── stair(2) → 2
│   ├── stair(1) → 1
│   └── stair(0) → 1
│       stair(3) = 4
│
├── stair(2)   ← 2 steps → 2
│
└── stair(1)   ← 3 steps → 1

stair(4) = 4 + 2 + 1 = 7

Type	Complexity
Time	O(3ⁿ)
Space	O(n)

*/