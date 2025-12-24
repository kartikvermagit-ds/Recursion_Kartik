#include<stdio.h>
int power(int a, int b)
{
    int x = 1;
    for(int i=1;i<=b;i++)
    {
        x = x*a;
    }
    return x;
}

int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    int b;
    printf("Enter power : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d", p);
    return 0;
}
/*
Start
x = 1
 |
 |-- i = 1 → x = 1 * a = a
 |
 |-- i = 2 → x = a * a = a²
 |
 |-- i = 3 → x = a² * a = a³
 |
 |-- i = 4 → x = a³ * a = a⁴
 |
End → return a⁴

*/