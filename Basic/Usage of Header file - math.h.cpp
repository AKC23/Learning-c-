/**
Use of math.h header file in c/c++ programming language

Date : Saturday July 11,2020
*/
#include<bits/stdc++.h>
#include<math.h>

#define pie 3.14
#define degree 180/pie
#define radian pie/180
using namespace std;

/**
1 degree = 3.14/180 radian
90 degree = 90 * 3.14/180 = 90 * rad

1 radian = 180/3.14 degree

*/

int main()
{
    cout<<"Square root : "<<sqrt(24)<<endl;
    cout<<"Absolute value : "<<fabs(-5)<<endl;

    cout<<"Power function [pow(x,y)] : "<<pow(5,2)<<endl;
    cout<<"Exponential function [exp(x) / e^x] : "<<exp(5)<<endl;

    cout<<"Natural logarithm [log(x)/ln(x)] : "<<log(5)<<endl;
    cout<<"Logarithm(base 10) [log10(x)] : "<<log10(5)<<endl;

    cout<<"Floor function [floor(x)]  : "<<floor(5.4)<<endl;
    cout<<"Ceiling function [ceil(x)]  : "<<ceil(5.4)<<endl;

/** Have to put the value in radian unit in these trigonometric function */
    cout<<endl<<"Trigonometric function"<<endl;
    cout<<"Value of sin(x): "<<sin(90 * radian)<<endl;
    cout<<"Value of cos(x): "<<cos(45 * radian)<<endl;
    cout<<"Value of tan(x): "<<tan(120 * radian)<<endl;


    cout<<endl<<"Opposite trigonometric function"<<endl;
/** Have to multiply with radian cause return value must be in radian unit */
    cout<<"Value of tan^-1(x): "<<atan(1) * 180/pie<<endl;
    cout<<"Value of sin^-1(x): "<<asin(1) * 180/pie<<endl;
    cout<<"Value of cos^-1(x): "<<acos(-1) <<endl;

    return 0;
}
