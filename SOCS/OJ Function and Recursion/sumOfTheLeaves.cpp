#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNode(int value)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void sumAllBranches(struct TreeNode *root, int currentSum)
{
    if (root == NULL)
    {
        return;
    }
    currentSum = currentSum + root->value;
    if (root->left == NULL && root->right == NULL)
    {
        printf("%d\n", currentSum);
    }
    sumAllBranches(root->left, currentSum);
    sumAllBranches(root->right, currentSum);
}

void initBranch(struct TreeNode *root, int currentIndex, int *arr, int n)
{

    if (currentIndex * 2 <= n)
        root->left = createNode(arr[currentIndex * 2]);
    if (currentIndex * 2 + 1 <= n)
        root->right = createNode(arr[currentIndex * 2 + 1]);
    if (currentIndex * 2 + 1 > n)
    {
        return;
    }
    initBranch(root->left, currentIndex * 2, arr, n);
    initBranch(root->right, currentIndex * 2 + 1, arr, n);
}

int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int j = 1; j <= tc; j++)
    {
        int n;
        scanf("%d", &n);
        getchar();
        int *arr = (int *)malloc(sizeof(int) * (n + 1)); // Allocate memory for arr
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
            getchar();
        }
        printf("Case #%d:\n", j);
        if (n > 2)
        {
            struct TreeNode *root = createNode(arr[1]);
            initBranch(root, 1, arr, n);
            sumAllBranches(root, 0);
        }
        else if (n == 1)
        {
            printf("%d\n", arr[1]);
        }
        else
        {
            printf("%d\n", arr[1] + arr[2]);
        }
        free(arr); // Free the allocated memory
    }
    return 0;
}