// CPP program to illustrate
// std::reverse() function of STL
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector <int> v ;
    // Inserting elements in vector
    for (int i = 0; i < 8; i++)
        v.push_back(i+10);

    cout << "\nReverse only from index 5 to 7 in array: ";
    // Reversing elements from index 5 to index 7
    reverse(v.begin() + 5, v.begin() + 8);

    // Displaying elements of vector
    vector <int> :: iterator it;

    for (it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";

    // Reversing directly from beginning to end
    cout << "\nReverse full array: ";

    int i,a[] = {4, 5, 6, 7};
    //std::reverse(std::begin(a), std::end(a));
    reverse(a, a+3);
    // Print the array
    for (i=0; i<4; i++)
    {
            cout << a[i] << " ";
    }
    //std::cout << a[0] << a[1] << a[2] << a[3] << '\n';
    cout<<endl;
    return 0;
}

