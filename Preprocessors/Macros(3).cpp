#define io(v) cin>>v                                        //for input
#define k(x) #x                                             //for output
#define foreach(v, i) for(i=0;i<v.size();i++)               //for loop
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int ans;
    cout<<"Input: ";	
	io(ans);
    cout << k(Output =) <<' '<< ans;
    
    int n,i;
    n = i = 0;

    cout<<"\nElements of vectors: "; 
    cin >> n;
	
    vector<int> v(n);
    cout<<"Input the vectors: ";
	foreach(v, i) 
    {
		io(v)[i];
	}
    
    cout<<"Output the vectors: ";
	foreach(v, i) 
    {
		cout<< v[i]<< " ";
	}

    return 0;

}