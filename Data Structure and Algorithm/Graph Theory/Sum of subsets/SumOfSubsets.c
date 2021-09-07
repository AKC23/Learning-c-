#include <stdio.h>
#include <stdbool.h>
//typedef int bool;
//#define true 1
//#define false 0

bool isSubsetSum(int set[], int n, int sum, int offset)
{
    // Base Cases
    if ((sum + n * offset) == 0)
        return true;
    if (n == 0 && (sum + n * offset) != 0)
        return false;

    if (set[n - 1] > sum + n * offset)
        return isSubsetSum(set, n - 1, sum, offset);

    return isSubsetSum(set, n - 1, sum, offset) ||
           isSubsetSum(set, n - 1, sum - set[n - 1], offset);
}

int main()
{
    int set[] = {-3, 34, -2, 12, 5, 8};
    // int set[] = { -7,-3,-2,5,8};
    int sum = 0;
    int i;
    int n = sizeof(set) / sizeof(set[0]);
    int min = -3; // TBD code to find minimum
    for (i = 0; i < 6; i++)
    {
        set[i] = set[i] - min;
        printf("%d   ", set[i]);
    }

    if (isSubsetSum(set, n, sum, -min) == true)
        printf("Found a subset");
    else
        printf("No subset");
    return 0;
}