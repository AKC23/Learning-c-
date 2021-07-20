#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e6+10;
#define pii pair<ll,ll>
#define MOD 1000000007
#define PI acos(-1.0)

void toh2(int n,char a,char b,char c)
{
    if(n==0) return;

    toh2(n-1,a,c,b);
    cout<<a<<"->"<<c<<"\n";
    toh2(n-1,b,a,c);
}

void toh1(int n,char B,char A,char E)
{
    if(n==0) return;
    if(n==1){
        cout<<B<<"->"<<E<<"\n";
        return;
    }

    toh1(n-1,B,E,A);
    cout<<B<<"->"<<E<<"\n";
    toh1(n-1,A,B,E);

}

stack<int> st;

void toh_iterative(int n,int B,int A,int E)
{
    st.push(n);
    st.push(B);
    st.push(A);
    st.push(E);

    while(!st.empty()){
        E=st.top(),st.pop();
        A=st.top(),st.pop();
        B=st.top(),st.pop();
        n=st.top(),st.pop();

        if(n==1){
            cout<<"Move disk from "<<B<<"-->"<<E<<"\n";
        }
        else{
            st.push(n-1);st.push(A);st.push(B);st.push(E);

            st.push(1);st.push(B);st.push(A);st.push(E);

            st.push(n-1);st.push(B);st.push(E);st.push(A);

        }
    }
}

int main()
{
    int n;
    while(cin>>n){
        //toh2(n,'A','C','B'),puts("");
        toh1(n,'1','2','3'),puts("");
        //toh_iterative(n,1,2,3);

    }

}