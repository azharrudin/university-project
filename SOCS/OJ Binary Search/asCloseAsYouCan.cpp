#include <stdio.h>

int binarySearch(long long int total[], int n, long long int key)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (key > total[right])
        {
            return n;
        }
        else
        {
            if (total[mid] == key || key > total[mid] &&  key < total[mid + 1])
            {
                return mid + 1;
            }
            else if (total[mid] < key)
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    long long int x[t];
    long long int total[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &x[i]);
        if (i == 0)
            total[i] = x[i];
        else
            total[i] = total[i - 1] + x[i];
    }

    int n;
    scanf("%d", &n);

    long long int m;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m);
        
        int result;
        if(m > total[0]){
            result = binarySearch(total, t, m);
        }
        

        if(m < total[0]) printf("Case #%d: -1\n", i + 1);
        else printf("Case #%d: %d\n", i + 1, result);
    }

    return 0;
}