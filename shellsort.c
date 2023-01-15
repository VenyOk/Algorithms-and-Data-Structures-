#include <stdio.h>
#include <stdlib.h>
int a[10] = {1, 5, 2, 4, 9, 1, 5, 8, 2, 10};
int count_size_of_array(unsigned long nel)
    {
        unsigned long fib1 = 1;unsigned long fib2 = 1; int cnt = 1;
        while (fib1 < nel)
        {
            unsigned long t = fib1 + fib2;
            fib2 = fib1;
            fib1 = t;
            cnt++;
        }
        return cnt;
    }
void shellsort(unsigned long nel, int(*compare)(unsigned long i,unsigned long j), void(*swap)(unsigned long i, unsigned long j))
    {
        unsigned long arr[count_size_of_array(nel)]; unsigned long fib1 = 1;unsigned long fib2 = 1; int cnt = 1;
        arr[0] = 1;
        while (fib1 < nel)
        {   
            arr[cnt] = fib1;
            unsigned long t = fib1 + fib2;
            fib2 = fib1;
            fib1 = t;
            cnt++;
        }
        while (cnt > 0)
        {
            unsigned long d = arr[cnt - 1];
            for (unsigned long i = d;i < nel;i++)
            {
                unsigned long loc = i;
                while ((loc >= d) && compare(loc - d,loc) > 0)
                {
                    swap(loc - d,loc);
                    loc-=d;
                }
            }
            cnt--;
        }
    }
int compare(unsigned long i, unsigned long j)
    {
        if (a[i] > a[j])
        {
            return 1;
        }
        else
        {
            if (a[i] == a[j])
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
    }
void swap(unsigned long i,unsigned long j)
    {
        unsigned long t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
int main()
    {   
        shellsort(10,compare,swap);
        for (int i = 0; i < 10;i++)
        {
            printf("%d ",a[i]);
        }
        return 0;
    }
