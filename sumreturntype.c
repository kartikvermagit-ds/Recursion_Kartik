#include <stdio.h>
int sum(int n)
{
    if (n == 0) // base call
        return 0;
    return n + sum(n - 1);
     // recursive call
     /* if (n == 1 || n == 0)
     return 1; // base case
     int recAns=n + sum(n - 1);
    return recAns;
     */
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int result = sum(n);
    printf("%d", result);
    return 0;
}
/* Recursion Call tree diagram
sum(4)
 |
 └── 4 + sum(3)
        |
        └── 3 + sum(2)
               |
               └── 2 + sum(1)
                      |
                      └── 1 + sum(0)
                             |
                             └── 0   ← base case
*/
/*
Return Flow from Bottom to Top
sum(0) = 0
sum(1) = 1 + 0 = 1
sum(2) = 2 + 1 = 3
sum(3) = 3 + 3 = 6
sum(4) = 4 + 6 = 10
*/
/*
This is linear recursion
Depth of recursion = n
Time Complexity → O(n)
Space Complexity → O(n) (due to function call stack)
*/