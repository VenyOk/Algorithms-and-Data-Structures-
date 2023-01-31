#include <stdio.h>

int main()

    {
        int sz,num,t;
        long long A=0,B=0;
        scanf("%d",&sz);
        for (int i = 0;i < sz;i++)
        {
            scanf("%d",&num);
            t = 1 << num;
            A = A | t;
        }
        scanf("%d",&sz);
        for (int i = 0;i < sz;i++)
        {
            scanf("%d",&num);
            t = 1 << num;
            B = B | t;
        }
        long long C = A & B;
        for (int i = 0;i<32;i++)
        {
            t = 1 << i;
            if (t & C)
            {
                printf("%d ",i);
            }
        }
        return 0;
    }
