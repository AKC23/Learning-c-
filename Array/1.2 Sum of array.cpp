//#include <bits/stdc++.h>
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//int main()
//{
//    int i,j,ar[100][100],n,x=3,scores[20],c=0,sum=0;
//
//    cin>>n;
//
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            cin>>ar[i][j];
//        }
//    }
//
//    for(i=0;i<n;i++)
//    {
//        sum = 0;
//        for(j=0;j<5;j++)
//        {
//            sum = sum + ar[i][j];
//        }
//
//        scores[i] = sum;
//
//        if(scores[0]<scores[i])
//        {
//            c++;
//        }
//
//        cout<<"scores["<<i<<"] = "<<scores[i]<<endl;
//    }
//    cout<<c;
//    return 0;
//
//}
//
#include<bits/stdc++.h>
#include "student.h"

using namespace std;
student::student()
{
//    cout<<"Inside the constructor \n";
}

int student::input()
{
    int i,j,ar[100][100],n,x=3,scores[20],c=0,sum=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=0;j<5;j++)
        {
            sum = sum + ar[i][j];
        }

        scores[i] = sum;

        if(scores[0]<scores[i])
        {
            c++;
        }

//        cout<<"scores["<<i<<"] = "<<scores[i]<<endl;
    }
    return c;
}

int student::calculateTotalScore(int c)
{
    int c1 = c;
    cout<<c1;
}





