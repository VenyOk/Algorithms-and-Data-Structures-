#include <stdio.h>
#include <stdlib.h>

int main()

    {
        size_t n,k;
        scanf("%zu",&n);
        int* arr = malloc(n*sizeof(int));
        for (size_t i =0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%zu",&k);
        long long ans = 0;
        for (size_t i = 0;i<k;i++)
        {
            ans += arr[i];
        }
        long long s = ans;
        for (size_t i = k;i<n;i++)
        {
            s -= arr[i - k];
            s += arr[i];
            if (s>ans)
            {
                ans = s;
            }
        }

        printf("%lld",ans);
        free(arr);
        return 0;
    }
