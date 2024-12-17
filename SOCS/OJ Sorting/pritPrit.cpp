#include <stdio.h>

void merge(long long int data[], int leftIdx, int midIdx, int rightIdx){
    int leftSetSize = midIdx - leftIdx + 1;
    int rightSetSize = rightIdx - midIdx;
    int leftSet[leftSetSize], rightSet[rightSetSize];

    for(int i=0; i<leftSetSize; i++){
        leftSet[i] = data[leftIdx + i];
    }

    for(int i=0; i<rightSetSize; i++){
        rightSet[i] = data[midIdx + i + 1];
    }

    int i=0;
    int j=0;
    int k = leftIdx;

    while(i<leftSetSize && j<rightSetSize){
        if(leftSet[i] <= rightSet[j]){
            data[k] = leftSet[i];
            i++;
        }else{
            data[k] = rightSet[j];
            j++;
        }
        k++;
    }

    while(i<leftSetSize){
        data[k] = leftSet[i];
        i++;
        k++;
    }

    while(j<rightSetSize){
        data[k] = rightSet[j];
        j++;
        k++;
    }
}

void mergeSort(long long int data[], int leftIdx, int rightIdx){
    if(leftIdx < rightIdx){
        int midIdx = leftIdx + (rightIdx-leftIdx)/2;

        mergeSort(data, leftIdx, midIdx);
        mergeSort(data, midIdx+1, rightIdx);

        merge(data, leftIdx, midIdx, rightIdx);
    }
}

int binarySearch(long long int arr[], int size, int key){
    int low = 0;
    int high = size-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == key){
            return mid+1;
        }else if(arr[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);

    long long int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n[i]);
    }

    mergeSort(n, 0, t-1);

    int x;
    scanf("%d", &x);

    long long int y;
    for (int i = 0; i < x; i++)
    {
        scanf("%lld", &y);

        int result = binarySearch(n, t, y);
        if(result == -1){
            printf("-1\n");
        }else{
            printf("%d\n", result);
        }
    }

    return 0;
}