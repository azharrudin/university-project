#include <stdio.h>
int binarysearch(int arr[], int left, int right, int val)
{
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
        {
            right = mid+1;
        }
        else if(arr[mid] < val){
            left = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", binarysearch(arr, 0, 10, 8));
}
// binary search