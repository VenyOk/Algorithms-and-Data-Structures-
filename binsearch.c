#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
int num = 9;
unsigned long binsearch(unsigned long nel, int(*compare)(unsigned long i))
    {
        unsigned long left= 0;
        unsigned long right = nel;
        while (left+1 < right)
        {
            unsigned long mid = (left + right) / 2;
            if (compare(mid) == 0)
            {
                return mid;
            }
            else
            {
                if (compare(mid) < 0)
                {
                    left = mid;
                }
                else
                {
                    right = mid;
                }
            }
        }
        if (compare(left) == 0)
        {
            return left;
        }
        return nel;
    }

int compare (unsigned long i)
    {
        if (arr[i]<num)
        {
            return -1;
        }
        else
        { 
            if (arr[i]==num)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }


int main()

    {
        unsigned long ans = binsearch(8,compare);
        printf("%lu",ans);
        return 0;
    }
