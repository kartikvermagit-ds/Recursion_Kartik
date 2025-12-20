#include<stdio.h>
int powerof(int a, int b);
int main(){
    printf("Enter the number a and b");
    scanf("%d %d", &a ,&b);
   return 0;
}
int powerof(int a, int b)
{
if(b==0)
return 1;
else
{
    return powerof(a , b-1)*a;
}
}