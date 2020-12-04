/**
Lesson learnt from video 1 to 6
Stl C++ :
*/
#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>     //used to sort elements
#include<queue>
#include<list>

bool myfunc(int a, int b)
{
    return (a>b);
}

bool myfunc2(int c, int d)
{
    return (c>d);
}

using namespace std;

int main()
{

    int ar[5],i;
    vector <int> vec;
    vec.push_back(11);
    vec.push_back(14);
    printf("Print 1 element\n");
    cout<<vec[1]<<endl;

    vector <int> :: iterator it;
    it = vec.begin();

//    for(i=0; i<5; i++)
//    {
//        vec.push_back(i);
//    }
//    puts("\nPrinting only first 5 items of vector with loop\n");
//    for(i=0; i<5; i++)
//    {
//        cout<<vec[i]<<"\t";
//    }
//    printf("\nprinting all elements of vector with loop\n");
//
//    for(it=vec.begin(); it!=vec.end(); it++)
//    {
//        cout<<*it<<"\t";
//    }

//    printf("\nprinting all elements of vector reversely\n");
//    reverse(vec.begin(),vec.end());
//    for(it=vec.begin(); it!=vec.end(); it++)
//    {
//        cout<<*it<<"\t";
//    }
//
//    printf("\nprinting (1-5) elements of vector reversely\n");
//    reverse(vec.begin()+1,vec.begin()+5);
//    for(it=vec.begin(); it!=vec.end(); it++)
//    {
//        cout<<*it<<"\t";
//    }

    printf("\nprinting all elements of vector in descending order\n");
    sort(vec.begin(),vec.end(),myfunc);

    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }

    printf("\nprinting all elements of vector in ascending order\n");
    sort(vec.begin(),vec.end());

    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }

    printf("\nClearing all elements of vector \n");
    sort(vec.begin(),vec.end());
    vec.clear();

    cout<<"Size of vector : "<<vec.size()<<endl;
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
//printing strings by vector
    string s;
    vector <string> v;
    int m,n;

    printf("\nTaking input of the strings in vector\nHow much strings?\n");
    cin>>n;
    for(m=0; m<n; m++)
    {
        cin>>s;
        v.push_back(s);
    }

    printf("\nPrinting the strings\n");
    for(m=0; m<n; m++)
    {
        cout<<v[m]<<endl;
    }

    puts("\n\n");

/** Vector for swap */
    vector <int> v1,v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    printf("\nBefore swap\n");
    cout<<"Vector 1 : ";

    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2 : ";
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

    v1.swap(v2);

    printf("\nAfter swap\n");
    cout<<"Vector 1 : ";

    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2 : ";
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }


    int arr1[5]= {33,11,54,22,66};
    puts("\nArray --> arr[] elements\n");
    for(i=0; i<5; i++)
    {
        cout<<arr1[i]<<"\t";
    }

    printf("\nprinting all elements of array reversely\n");
    reverse(arr1,arr1+5);
    for(i=0; i<5; i++)
    {
        cout<<arr1[i]<<"\t";
    }

    printf("\nprinting (2-5) elements of array reversely\n");

    reverse(arr1+1,arr1+4);
    for(i=0; i<5; i++)
    {
        cout<<arr1[i]<<"\t";
    }

    sort(arr1,arr1 +5,myfunc2);
    printf("\nAfter sorting in descending order\n");
    for(i=0; i<5; i++)
    {
        cout<<arr1[i]<<"\t";
    }

    sort(arr1,arr1 +5);
    printf("\nAfter sorting in ascending order\n");
    for(i=0; i<5; i++)
    {
        cout<<arr1[i]<<"\t";
    }

}

