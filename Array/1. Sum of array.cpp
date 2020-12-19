
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
// #include <boost/range/numeric.hpp>
#include <numeric>

using namespace std;
int main()
{
    int i,n[100],x,sum = 0;                 //x = size

    printf("Size of Array : ");
    scanf("%d",&x);
    printf("Inputs are\n");

    for(i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }

//    for(i=0;i<x;i++)
//    {
//        sum = sum + n[i];
//    }
//    printf("\nSum of the arrays using loop : %d",sum);


//    sum = std::accumulate(std::begin(n),std::end(n),0,std::p);

    sum = std::boost:accumulate(n,0));
    std::cout<<sum;
    printf("\nSum of the arrays using function : %d",sum);


    return 0;
}

