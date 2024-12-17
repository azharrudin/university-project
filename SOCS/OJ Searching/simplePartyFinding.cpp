#include <stdio.h>

void merge(int data[], int leftIdx, int midIdx, int rightIdx)
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
        if (leftSet[i] < rightSet[j])
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

void mergeSort(int data[], int leftIdx, int rightIdx)
{
    if (leftIdx < rightIdx)
    {
        int midIdx = leftIdx + (rightIdx - leftIdx) / 2;

        mergeSort(data, leftIdx, midIdx);
        mergeSort(data, midIdx + 1, rightIdx);

        merge(data, leftIdx, midIdx, rightIdx);
    }
}

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);

    int n;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);

        int x[1000];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[j]);
        }

        int mmr;
        scanf("%d", &mmr);

        mergeSort(x, 0, n - 1);

        int result = binarySearch(x, n, mmr);
        // printf("%d", result);

        if(result == n-1){
            printf("CASE #%d: %d %d\n", i, x[result-1], x[result]);
        }else if(result == -1){
            printf("CASE #%d: -1 -1\n", i);
        }else{
            printf("CASE #%d: %d %d\n", i, x[result], x[result+1]);
        }
    }
    return 0;
}