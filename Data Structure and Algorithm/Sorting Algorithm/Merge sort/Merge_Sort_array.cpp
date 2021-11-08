#include <iostream>
using namespace std;

void display(int C[], int n3)
{
    for(int i=0; i<n3; i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
    cout<<n3;
}

void merge(int A[], int B[], int n1, int n2)
{
    int C[n1+n2];
    int i=n1-1, j=0, k=0;
    while(i>=0 && j<n2)
    {
        if(A[i] <= B[j])
        {
            C[k] = A[i];
            i--;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while(i>=0)
    {
        C[k] = A[i];
        i--;
        k++;
    }
    while(j<n2)
    {
        C[k] = B[j];
        j++;
        k++;
    }
    display(C, n1+n2);
}

int main()
{
    int A[5] = {13, 9, 8, 5, 2};
    int B[6] = {1, 4, 7, 12, 15, 21};

    int n1 = sizeof(A)/sizeof(A[0]);
    int n2 = sizeof(B)/sizeof(B[0]);

    merge(A, B, n1, n2);
}