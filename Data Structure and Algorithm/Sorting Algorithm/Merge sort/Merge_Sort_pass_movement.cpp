#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,move_ment=0;
//ll invCnt;

void doMerge(int a[],int l,int m,int r){

    int s1=m-l+1;
    int s2=r-m;
    int left_auxi[s1],right_auxi[s2];

    for(int i=0;i<s1;i++){
        left_auxi[i]=a[l+i];
    }

    for(int i=0;i<s2;i++){
        right_auxi[i]=a[m+1+i];
    }

    int i=0,j=0,k=l;

    while(i<s1 && j<s2){
        if(left_auxi[i]<=right_auxi[j]){
            a[k]=left_auxi[i];
            i++;
            k++;
            move_ment++;
        }
        else{
            a[k]=right_auxi[j];
            j++;
            k++;
            move_ment++;
            //invCnt+=(m-(l+i)+1);//main change
            //invCnt+=(s1-i);
        }
        cout<<move_ment<<"------\n";
    }

    while(i<s1){
        a[k]=left_auxi[i];
        i++;
        k++;
        move_ment++;
        cout<<move_ment<<"....\n";
    }
    while(j<s2){
        a[k]=right_auxi[j];
        j++;
        k++;
        move_ment++;
        cout<<move_ment<<"++++++\n";
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<"\n";
}

void mergeSort(int a[],int l,int r){

    if(l<r){
        int m=l+(r-l)/2;

        mergeSort(a,l,m);
        mergeSort(a,m+1,r);

        doMerge(a,l,m,r);
    }

}

int main(){

    //int n;

    while(cin>>n && n){
        int a[n+1];
        for(int i=0;i<n;i++){
            //cin>>a[i];
            scanf("%d",&a[i]);
        }
        //invCnt=0;
        mergeSort(a,0,n-1);


    }
}

/**

8
1 5 6 3 8 4 7 2

*/