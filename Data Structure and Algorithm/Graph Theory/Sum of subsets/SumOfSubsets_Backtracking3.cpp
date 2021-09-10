/* Part of Cosmos by OpenGenus Foundation */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int total_solution, sum;

void subsetsum_Backtracking(int Set[], int pos, int sum, int temp_sum, int size, bool &found)
{
    if (pos > 0)
    {
        if (sum == temp_sum)
        {
            ++total_solution;
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i] < 0)
                {
                    cout << vec[i] << " ";
                }
                else
                    cout << " + " << vec[i];
            }

            cout << "\n";
            found = true;
            // exit(0);                     //for 1 output
        }
    }
    

    for (int i = pos; i < size; i++)
    {
        if (temp_sum + Set[i] <= sum)
        {
            temp_sum += Set[i];
            vec.push_back(Set[i]);
            // consider next level node (along depth)
            subsetsum_Backtracking(Set, i + 1, sum, temp_sum, size, found);
            temp_sum -= Set[i];
            vec.pop_back();
        }
    }
}

int main()
{
    int i, n, sum;
   
    cout << "N: ";
    cin >> n;
    int a[n];
    cout << "List: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // cout << "Enter the value of sum: ";
    // cin >> sum;
    sum = 0;

    bool f = false;

    int array_size = sizeof(a) / sizeof(a[0]);

    sort(a, a + array_size);

    cout << "\nOutput \n";
    
    subsetsum_Backtracking(a, 0, sum, 0, n, f);

    cout << "\n";
    if (f)
        cout << "There are " << total_solution << " different sums that makes " << sum << "\n";
    else
        cout << "no required subset found" << endl;

    return 0;
}

/*

5
-7 -3 -2 5 8 

output 5 + -2 + -3 

6
-1 2 -3 4 -5 6

Output
6 + 2 + -3 + -5 
4 + 2 + -1 + -5 
6 + -1 + -5 
4 + -1 + -3 

4
-10
-7 0 3 -3

*/
