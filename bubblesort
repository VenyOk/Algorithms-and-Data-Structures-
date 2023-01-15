#include <stdio.h>

int arr[] = {};
const size_t SZ = sizeof(arr)/sizeof(arr[0]);
void bubblesort(unsigned long nel, int (*compare)(unsigned long i, unsigned long j),
void (*swap)(unsigned long i,unsigned long j))

    {
        if ((nel==1) || (nel==0))
        {
            return;
        }
        else
        {
            unsigned long left = 0;
            unsigned long right = nel - 1;
            for (unsigned long i = 0;i<nel - 1;i++)
            {
                if (i%2==0)
                {
                    for (unsigned long j=left;j<right;j++)
                    {
                        if (compare(j+1,j)==-1)
                        {
                            swap(j+1,j);
                        }

                    }
                    right--;
                }
                else
                {
                    for (unsigned long j = right;j>left;j--)
                    {
                        if (compare(j,j-1)==-1)
                        {
                            swap(j,j-1);
                        }
                    }
                    left++;
                }
                
            }
        }


    }


int compare(unsigned long i, unsigned long j)

    {
        if (arr[i]<arr[j])
        {
            return -1;
        }
        else
        {
            if (arr[i]==arr[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }

    }


void swap(unsigned long i, unsigned long j)

    {
        unsigned long t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }



int main()

    {

        bubblesort(SZ,compare,swap);
        for (size_t i=0;i<SZ;i++)
        {
            printf("%d ",arr[i]);
        }

        return 0;
    }
