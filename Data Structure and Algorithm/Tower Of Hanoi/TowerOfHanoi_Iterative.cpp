/// Iterative version of the Tower of Hanoi problem
/// @author Sohom Sahaun (@sohomsahaun)

#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int height, from, to, aux;
    Data() {}
    Data(int height, int from, int to)
        : height(height), from(from), to(to)
    {
        aux = 6 - from - to;
    }
};

void tower_iter(int height, int from, int to)
{
    stack<Data> st;
    st.push({height, from, to});
    while (!st.empty())
    {
        Data d = st.top();
        st.pop();
        if (d.height == 1)
        {
            cout << "Move from " << d.from << " to " << d.to << "\n";
            continue;
        }
        st.push({d.height - 1, d.aux, d.to});
        st.push({1, d.from, d.to});
        st.push({d.height - 1, d.from, d.aux});
    }
}

int main()
{
    tower_iter(3, 1, 3);
    return 0;
}