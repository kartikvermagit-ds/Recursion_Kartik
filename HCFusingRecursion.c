#include<stdio.h>
 unsigned int findHCF(int a, int b);
int main()

{ 
    int a, b, z;
    printf("Enter a and b");
    scanf("%d %d",&a,&b);
    z = findHCF(b, a%b);
    printf("HCF is %d", &z);
    return 0;
}
unsigned int findHCF(int a, int b)
{
    if(a%b==0)
    { return b;
    }
    else
    {
        return findHCF(b, a%b);
    }
}
