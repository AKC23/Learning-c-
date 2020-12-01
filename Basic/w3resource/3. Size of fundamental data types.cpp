/*/
https://www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-3.php
C++ Exercises: Find Size of fundamental data types
/*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"\n\n Find Size of fundamental data types :\n";
	cout<<"------------------------------------------\n";
    cout<<"\nThe sizeof(char) is :              "<<sizeof(char)<<" bytes";
    cout<<"\nThe sizeof(short) is :             "<<sizeof(short int)<<" bytes";
    cout<<"\nThe sizeof(int) is :               "<<sizeof(int)<<" bytes";
    cout<<"\nThe sizeof(long int) is :          "<<sizeof(long int)<<" bytes";
    cout<<"\nThe sizeof(long long int) is :     "<<sizeof(long long int)<<" bytes";
    cout<<"\nThe sizeof(long) is :              "<<sizeof(long) << " bytes" ;
    cout<<"\nThe sizeof(long long) is :         "<<sizeof(long long) << " bytes";
    cout<<"\nThe sizeof(float) is :             "<<sizeof(float)<<" bytes";
    cout<<"\nThe sizeof(double) is :            "<<sizeof(double)<<" bytes";
    cout<<"\nThe sizeof(long double) is :       "<<sizeof(long double)<<" bytes";           //it would be 16 but it is shown 12 here
    cout<<"\nThe sizeof(bool) is :              "<<sizeof(bool)<<" bytes";
}
