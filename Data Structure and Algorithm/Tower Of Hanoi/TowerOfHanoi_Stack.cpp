/* 
Tower of Hanoi by Stack
*/
#include <bits/stdc++.h>
#include <stack>
using namespace std;

stack<int>st;
int pass = 1;
void toh_iterative(int n,int from,int aux,int to)
{
    st.push(n);
    st.push(from);
    st.push(aux);
    st.push(to);

    while(!st.empty())
    {
        to= st.top(),st.pop();
        aux =st.top(),st.pop();
        from =st.top(),st.pop();
        n =st.top(),st.pop();

        if(n==1)
        {
            cout<<"Pass: "<<pass;
            cout<<" Move disc "<< from <<" from "<<from<<" to "<<to<<"\n";
            pass++;
        }
        else
        {
            st.push(n-1);st.push(aux);st.push(from);st.push(to);
            st.push(1);st.push(from);st.push(aux);st.push(to);
            st.push(n-1);st.push(from);st.push(to);st.push(aux);
        }
    }
}

int main()
{
    int n;
    cout<<"Disc Number: ";
    while(cin>>n){
        toh_iterative(n,1,2,3);
    }
    return 0;
}