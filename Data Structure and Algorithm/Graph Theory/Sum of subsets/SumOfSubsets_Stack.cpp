#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <vector>

using namespace std;

vector<int> vec;

int Elements, sum;
int cnt, total_solution, input;

stack<int> Solution_Set;
bool Has_Solution;

void Display_Solution_Set()
{
    stack<int> Temp_Stack;

    while ( !Solution_Set.empty())
    {
        cout << Solution_Set.top() << " ";          //10,20
        Temp_Stack.push(Solution_Set.top());
        Solution_Set.pop();
    }
    cout << '\n';
    while (!Temp_Stack.empty())
    {
        Solution_Set.push(Temp_Stack.top());
        Temp_Stack.pop();
    }
    ++total_solution;
}
// 10, 7, 5, 18, 12, 20, 15
//sum 30 
void Sum_Of_Subsets(int s, int index)
{
    if (s > sum)
        return; //return if s exceed sum

    if (s == sum)
    {
        Has_Solution = true;
        Display_Solution_Set();
        return;
    }
    
    // 10, 7, 5, 18, 12, 20, 15             //10,20
    for (int i = index; i < Elements; i++)
    { 
        //Adding element to the stack
        Solution_Set.push(vec[i]);

        //add vec[i] to the 's' and recusively start from next number
        cout << ++cnt;
        cout<< "S: " << s << "\n";
        Sum_Of_Subsets(s + vec[i], i + 1); //10+7, 2

        Solution_Set.pop(); //Removing element from stack(Backtracking)
    }
}

int main()
{
    cout << "Total number of elements: ";
    cin >> Elements;
    cout << "Total sum: ";
    cin >> sum;
    // sum = sum ;

    cout << "Give inputs: ";
    for (int i = 0; i < Elements; i++)
    {
        cin >> input;
        // input = input;
        vec.push_back(input);
    }
    sort(vec.begin(), vec.end());

    cout << "\nOutput\n";
    Sum_Of_Subsets(0, 0);

    if (Has_Solution == false)
        cout << "\nNo Solution\n";
    else
        cout << "\nThere are " << total_solution << " different sums that makes " << sum << "\n";


    vector<int>::iterator i1;
  
    for (i1 = vec.begin(); i1 != vec.end(); ++i1) {
        // Accessing elements using iterator
        cout << (*i1) << " ";
    }

    return 0;
}
/* 

7
30

5 7 10 12 15 18 20
10 7 5 18 12 20 15


Output
15 5 10
20 10
18 5 7
12 18

There are 4 different sums that makes 30


5
0
-7 -3 -2 5 8

6
0
-1 2 -3 4 -5 6


*/