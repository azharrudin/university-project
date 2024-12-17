#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void merge(long long int data[], int leftIdx, int midIdx, int rightIdx)
{
    int leftSetSize = midIdx - leftIdx + 1;
    int rightSetSize = rightIdx - midIdx;
    int leftSet[leftSetSize], rightSet[rightSetSize];

    for (int i = 0; i < leftSetSize; i++)
    {
        leftSet[i] = data[leftIdx + i];
    }

    for (int i = 0; i < rightSetSize; i++)
    {
        rightSet[i] = data[midIdx + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = leftIdx;

    while (i < leftSetSize && j < rightSetSize)
    {
        if (leftSet[i] <= rightSet[j])
        {
            data[k] = leftSet[i];
            i++;
        }
        else
        {
            data[k] = rightSet[j];
            j++;
        }
        k++;
    }

    while (i < leftSetSize)
    {
        data[k] = leftSet[i];
        i++;
        k++;
    }

    while (j < rightSetSize)
    {
        data[k] = rightSet[j];
        j++;
        k++;
    }
}

void mergeSort(long long int data[], int leftIdx, int rightIdx)
{
    if (leftIdx < rightIdx)
    {
        int midIdx = (rightIdx + leftIdx) / 2;

        mergeSort(data, leftIdx, midIdx);
        mergeSort(data, midIdx + 1, rightIdx);

        merge(data, leftIdx, midIdx, rightIdx);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    int n;
    long long int arr[501];
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);

        long long int max = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &arr[j]);
        }

        mergeSort(arr, 0, n - 1);

        for (int j = 0; j < n-1; j++)
        {
            if (j != (n / 2 - 1))
            {
                if (max <= labs(arr[j] - arr[j + 1]))
                {
                    max = labs(arr[j] - arr[j + 1]);
                }
            }else{
                continue;
            }
        }

        printf("Case #%d: %lld\n", i, max);
    }
    return 0;
}