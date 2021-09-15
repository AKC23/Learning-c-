// Space optimized C++ implementation of LCS problem
#include <bits/stdc++.h>
using namespace std;

int cnt;
vector<char> print_result;
// Returns length of LCS
// for X[0..m-1], Y[0..n-1]
int lcs(string &X, string &Y)
{

    // Find lengths of two strings
    int m = X.length(), n = Y.length();
    vector<vector<int>> L(2, vector<int>(n + 1, INT_MAX));

    // int L[2][n + 1];

    // Binary index, used to index current row and previous row.
    bool bi;

    for (int i = 0; i <= m; i++)                    //Cormen 3rd edition page 393
    {
        // Compute current binary index
        bi = i & 1;

        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[bi][j] = 0;
                cout << "Loop1: "
                     << "count: " << ++cnt << " L[" << bi << "][" << j << "] = " << L[bi][j] << "\n";
            }
            else if (X[i - 1] == Y[j - 1])
            {
                L[bi][j] = L[1 - bi][j - 1] + 1;
                cout << "\nLoop2: "
                     << "count: " << ++cnt
                     << " L[" << bi << "][" << j << "] = L[1 - " << bi << "][" << j << " - 1] + 1 = " << L[bi][j] << "\n";
                // print_result.push_back(Y[j - 1]);
            }
            else
            {
                L[bi][j] = max(L[1 - bi][j], L[bi][j - 1]);
                cout << "Loop3: "
                     << "count: " << ++cnt
                     << " L[" << bi << "][" << j << "] ="
                     << " max(L[1 - " << bi << "][" << j << "],"
                     << "L[" << bi << "][" << j << " - 1]) = " << L[bi][j] << "\n";
            }
        }
    }

    // Print the lcs
    cout << "\n\nLCS of " << X << " and " << Y << " is : ";
    vector<char>::iterator it;
    for (it = print_result.begin(); it != print_result.end(); it++)
    // for (int k = 0;k<print_result.size();k++)
    {
        cout << *it << " ";
        // cout << print_result[k] << " ";
    }
    cout << "\n";
    // Last filled entry contains
    // length of LCS
    // for X[0..n-1] and Y[0..m-1]

    return L[bi][n];
}

// Driver code
int main()
{
    string X = "AGGTAB";
    string Y = "GXTXAYB";
    cnt = 0;
    printf("Length of LCS is %d\n", lcs(X, Y));

    return 0;
}