/* Dynamic Programming C implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b);
int cnt;

int lcs(char *X, char *Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
                cout << "Loop1: "
                     << "count: " << ++cnt << " L[" << i << "][" << j << "] = " << L[i][j] << "\n";
            }
            else if (X[i - 1] == Y[j - 1])
            {

                L[i][j] = L[i - 1][j - 1] + 1;
                cout << "\nLoop2: "
                     << "count: " << ++cnt
                     << " L[" << i << "][" << j << "] = L[" << i << " - 1][" << j << " - 1] + 1 = " << L[i][j] << "\n";
                    
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
                cout << "Loop3: "
                     << "count: " << ++cnt
                     << " L[" << i << "][" << j << "] = max(L[" << i << " - 1][" << j << "], L[" << i << "][" << j << " - 1]) = " << L[i][j] << "\n";
            }
        }
    }

    int index = L[m][n];

    char lcs[index + 1];
    lcs[index] = '\0';

    i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        }

        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    cout << "\n\nLCS of " << X << " and " << Y << " is " << lcs;

    return L[m][n];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    cnt = 0;
    int m = strlen(X);
    int n = strlen(Y);

    printf("\n\nLength of LCS is %d", lcs(X, Y, m, n));

    return 0;
}
