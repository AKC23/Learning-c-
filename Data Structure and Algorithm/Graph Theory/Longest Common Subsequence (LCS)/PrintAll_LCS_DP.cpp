/* Dynamic Programming C implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b);
int cnt;
#define N 100

int L[N][N];

set<string> findLCS(string X, string Y, int m, int n)
{
    // int L[m + 1][n + 1];
    int i, j;
    // construct a set to store possible LCS
    set<string> s;

    // If we reaches end of either string, return
    // a empty set
    if (m == 0 || n == 0)
    {
        s.insert("");
        return s;
    }

    // If the last characters of X and Y are same
    if (X[m - 1] == Y[n - 1])
    {
        // recurse for X[0..m-2] and Y[0..n-2] in
        // the matrix
        set<string> tmp = findLCS(X, Y, m - 1, n - 1);

        // append current character to all possible LCS
        // of substring X[0..m-2] and Y[0..n-2].
        for (string str : tmp)
            s.insert(str + X[m - 1]);
    }

    // If the last characters of X and Y are not same
    else
    {
        // If LCS can be constructed from top side of
        // the matrix, recurse for X[0..m-2] and Y[0..n-1]
        if (L[m - 1][n] >= L[m][n - 1])
            s = findLCS(X, Y, m - 1, n);

        // If LCS can be constructed from left side of
        // the matrix, recurse for X[0..m-1] and Y[0..n-2]
        if (L[m][n - 1] >= L[m - 1][n])
        {
            set<string> tmp = findLCS(X, Y, m, n - 1);

            // merge two sets if L[m-1][n] == L[m][n-1]
            // Note s will be empty if L[m-1][n] != L[m][n-1]
            s.insert(tmp.begin(), tmp.end());
        }
    }
    return s;
}

int lcs(string X, string Y, int m, int n)
{

    int i, j;

    for (i = 0; i <= m; i++)
    {
        cout << "Row: " << i<<"  ";
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
                // cout << "Loop1: "
                //      << "count: " << ++cnt << " L[" << i << "][" << j << "] = " << L[i][j] << "\n";
                cout << L[i][j] << " ";
            }
            else if (X[i - 1] == Y[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
                // cout << "\nLoop2: "
                //      << "count: " << ++cnt
                //      << " L[" << i << "][" << j << "] = L[" << i << " - 1][" << j << " - 1] + 1 = " << L[i][j] << "\n";
                cout << L[i][j] << " ";
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
                // cout << "Loop3: "
                //      << "count: " << ++cnt
                //      << " L[" << i << "][" << j << "] = max(L[" << i << " - 1][" << j << "], L[" << i << "][" << j << " - 1]) = " << L[i][j] << "\n";

                cout << L[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return L[m][n];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{

    // string X = "ABCB";
    // string Y = "BDCAB";

    string X = "AMMAABBA";
    string Y = "MABABA";
    cnt = 0;
    int m = X.length();
    int n = Y.length();

    cout << "\nX: " << X << "\nY: " << Y<<"\n";
    cout << "\nLCS Matrix: \n";
    printf("\n\nLength of LCS: %d", lcs(X, Y, m, n));

    set<string> s = findLCS(X, Y, m, n);

    cout << "\nLCS: ";
    for (auto it = begin(s); it != end(s); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}

/* 
AGTGATG
GTTAG

Length of LCS is 4

GTAG
GTTG


abcabcaa
acbacba

Length of LCS is 5

ababa
abaca
abcba
acaba
acaca
acbaa
acbca

 */