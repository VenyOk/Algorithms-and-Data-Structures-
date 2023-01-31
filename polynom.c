#include <stdio.h>


int main()

    {
        long long x0,n,i;
        scanf("%lld%lld",&n,&x0);
        long long arr[n + 1];
        for (i=0;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        long long ans=0;
        for (i=0;i<=n;i++)
        {
            ans = arr[i] + ans*x0;
        }
        printf("%lld ",ans);
        ans=0;
        for (i=0;i<n;i++)
        {
            ans =arr[i]*(n-i) + ans*x0;
        }
        printf("%lld",ans);
        return 0;
    }

