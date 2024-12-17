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