#include <stdio.h>

long long int findLongestSegment(long long int x[], long long int target, int n){
    long long int maxLength = -1;
    long long int currentSum = 0;
    int start = 0;

    for(int end = 0; end < n; end++){
        currentSum += x[end];

        while(currentSum > target){
            currentSum -= x[start];
            start++;
        }

        maxLength = (end-start+1 > maxLength)? end-start+1 : maxLength;
    }
    return maxLength;
}


// long long int slidingWindow(long long int x[], int n, long long int target)
// {
//     long long int left = 0, right = 0;
//     long long int sum = x[0];

//     while (right < n && left <= right)
//     {
//         if (sum == target)
//         {
//             return right - left + 1;
//         }
//         else if (sum < target)
//         {
//             right++;
//             sum += x[right];
//         }
//         else
//         {
//             sum -= x[left];
//             left++;
//         }
//     }

//     return -1;
// }

// int binarySearch(int total[], int n, int key)
// {
//     int left = 0;
//     int right = n - 1;
//     int mid;
//     while (left <= right)
//     {
//         mid = left + (right - left) / 2;

//         if (total[mid] == key || key > total[mid] && key < total[mid + 1])
//         {
//             return mid + 1;
//         }
//         else if (total[mid] < key)
//         {
//             left = mid;
//         }
//         else
//         {
//             right = mid;
//         }
//     }
//     return -1;
// }

// int linear(int total[], int key, int n){
//     for(int i = 0; i<n ;i++){
//         if(total[i] == key || total[i] < key && total[i+1] > key){
//             return i+1;
//             break;
//         }
//     }
// }

int main()
{
    int n;
    scanf("%d", &n);

    long long int x[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x[i]);
    }

    int t;
    scanf("%d", &t);

    long long int num;
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &num);

        long long int result = findLongestSegment(x, num, n);
        if(!result)result = -1;
        printf("Case #%d: %lld\n", i + 1, result);
    }

    return 0;
}