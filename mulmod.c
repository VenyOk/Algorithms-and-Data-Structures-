include <stdio.h>
int main()
    {
        unsigned long long a,b,m;
        unsigned long long arr[64] = {0};
        scanf("%llu %llu %llu",&a,&b,&m);
        int j = 0;
        while (b>0)

            {
                arr[63 - j] = b % 2;
                b /= 2;
                j++;
            }
        unsigned long long result = 0;
        for (int i = 0;i<64;i++)
        {
            result = result*2%m + a*arr[i]%m;
            result %= m;
        }
        result%=m;
        printf("%llu", result);
        return 0;
    }
