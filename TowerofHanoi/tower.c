#include <stdio.h>
void tower (int n, char s, char h, char d)
{
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    return 0;
}
/*
s = Source
h = Helper
d = Destination

Height of tree = n
Total moves (prints) = 2ⁿ − 1
Time Complexity = O(2ⁿ)
Space Complexity (recursion stack) = O(n)
*/
/*
tower(3, A, B, C)
│
├── tower(2, A, C, B)
│   s=A , h=C , d=B
│   │
│   ├── tower(1, A, B, C)
│   │   s=A , h=B , d=C
│   │   ├── tower(0, A, C, B) → return
│   │   ├── print A -> C
│   │   └── tower(0, B, A, C) → return
│   │
│   ├── print A -> B
│   │
│   └── tower(1, C, A, B)
│       s=C , h=A , d=B
│       ├── tower(0, C, B, A) → return
│       ├── print C -> B
│       └── tower(0, A, C, B) → return
│
├── print A -> C
│
└── tower(2, B, A, C)
    s=B , h=A , d=C
    │
    ├── tower(1, B, C, A)
    │   s=B , h=C , d=A
    │   ├── tower(0, B, A, C) → return
    │   ├── print B -> A
    │   └── tower(0, C, B, A) → return
    │
    ├── print B -> C
    │
    └── tower(1, A, B, C)
        s=A , h=B , d=C
        ├── tower(0, A, C, B) → return
        ├── print A -> C
        └── tower(0, B, A, C) → return

*/