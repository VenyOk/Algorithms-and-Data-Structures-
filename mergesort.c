#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int* arr, int i,int j)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
int MODULE(int a)
    {
        if (a>=0)
        {
            return a;
        }
        return -a;
    }

void insertsort(int* arr, int l, int r)
    {
        int i = l + 1;
        while (i < r)
        {
            int loc = i - 1;
            while ((loc >= l) && (MODULE(arr[loc + 1])) < MODULE(arr[loc]))
            {
                swap(arr,loc+1,loc);
                loc--;
            }
            i++;
        }
    }
/* Из презентации*/
void merge(int k,int l, int m,int* arr)

    {   
        int* t = calloc(m - k + 1,sizeof(int));
        int i = k;
        int j = l;
        int h = 0;
        while (h < m - k)
        {
            if (j < m && ((i == l) || (MODULE(arr[j]) < MODULE(arr[i]))))
            {
                t[h] = arr[j];
                j++;
            }
            else
            {
                t[h] = arr[i];
                i++;
            }
            h++;
        }
        for (int z = 0;z<m - k;z++)
        {
            arr[z + k] = t[z];
        }
        free(t);
    }
/* Из презентации*/
void mergesortrec(int low,int high, int* arr)

    {   
        if (low < high)
        {
            if (high - low > 5)
            {
                int mid = (low + high) / 2;
                mergesortrec(low,mid,arr);
                mergesortrec(mid,high,arr);
                merge(low,mid,high,arr);
            }
            else
            {
                insertsort(arr,low,high);
            }
        }
    }
/* Из презентации */
void mergesort(int n, int* arr)

    {
        mergesortrec(0,n,arr);
    }

int main()

    {
        int n;
        scanf("%d",&n);
        int* arr = calloc(n,sizeof(int));
        for (int i = 0; i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        mergesort(n,arr);
        for (int i = 0; i < n;i++)
        {
            printf("%d ",arr[i]);
        }
        free(arr);
        return 0;
    }
