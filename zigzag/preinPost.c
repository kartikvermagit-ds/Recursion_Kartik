#include <stdio.h>
void preInPost(int n)
{  
     if(n==0) return;
    printf("Pre %d\n",n);
    preInPost(n - 1);
    printf("In %d\n",n);
    preInPost(n - 1);
    printf("Post %d\n",n);
    return;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    preInPost(n);

    return 0;
}
/*
preInPost(2)
 ├─ Pre 2
 ├─ preInPost(1)
 │   ├─ Pre 1
 │   ├─ preInPost(0)
 │   ├─ In 1
 │   ├─ preInPost(0)
 │   └─ Post 1
 ├─ In 2
 ├─ preInPost(1)
 │   ├─ Pre 1
 │   ├─ In 1
 │   └─ Post 1
 └─ Post 2
*/