#include <stdio.h>


void solve(int n, int* arr, int* ans, int index,int s)

    {
        if (((s&(s - 1)) == 0) && (s > 0))
        {
            (*ans)++;
        }
        if (index == n)
        {
            return;
        }
        else
        {
            int i = index;
            while (i < n)
            {
                solve(n,arr,ans,i + 1,s + arr[i]);
                i++;
            }
        }
    }





int main()

    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int answer = 0;
        for (int i = 0;i<n;i++)
        {
            solve(n,arr,&answer,i + 1,arr[i]);
        }
        printf("%d",answer);
        return 0;
    }
