#include <stdio.h>

int main()

    {   
        int check[8] = {0,0,0,0,0,0,0,0};
        int arr1[8],arr2[8],i,j;
        int ans=1;
        for (i=0;i<8;i++)
        {
            scanf("%d",&arr1[i]);
        }
        for (i=0;i<8;i++)
        {
            scanf("%d",&arr2[i]);
        }
        for (i=0;i<8;i++)
        {
            for (j=0;j<8;j++)
            {
                if ((arr1[i]==arr2[j]) && !check[j])
                {
                    check[j] = 1;
                    break;
                }
            }
            if (j == 8){
                ans = 0;
            }
        }
        if (ans==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        return 0;
    }
