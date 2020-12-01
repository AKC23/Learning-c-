/*
Topic: Precision of floating point numbers in C++ (floor(), ceil(), trunc(), round() and setprecision())
Date: 01/12/2020
Link: https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/

floor() -> Floor rounds off the given value to the closest integer which is less than the given value.
ceil() -> Ceil rounds off the given value to the closest integer which is more than the given value. 
trunc() -> Trunc rounds removes digits after decimal point. 
round() -> Rounds given number to the closest integer.
setprecision() -> Setprecision when used along with ‘fixed’ provides precision to floating point numbers 
        correct to decimal numbers mentioned in the brackets of the setprecison.
        This manipulator is declared in header <iomanip>.
*/

#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include <math.h>
#include <cmath> 
#include <iomanip>                  //for setprecision()

using namespace std;

int main()
{
    double x =1.411, y =1.500, z =1.711; 
    cout<<"floor() -> Floor rounds off the given value to the closest integer which is less than the given value."<<endl;
    cout << floor(x) << endl; 
    cout << floor(y) << endl; 
    cout << floor(z) << endl; 
  
    double a =-1.411, b =-1.500, c =-1.611; 
    cout << floor(a) << endl; 
    cout << floor(b) << endl; 
    cout << floor(c) << endl; 

    cout<<"ceil() -> Ceil rounds off the given value to the closest integer which is more than the given value. "<<endl;
    
    x = 1.411, y = 1.500, z = 1.611; 
    cout << ceil(x) << endl; 
    cout << ceil(y) << endl; 
    cout << ceil(z) << endl; 
  
    a = -1.411, b = -1.500, c = -1.611; 
    cout << ceil(a) << endl; 
    cout << ceil(b) << endl; 
    cout << ceil(c) << endl; 

    cout<<"trunc() -> Trunc rounds removes digits after decimal point. "<<endl;

    x = 1.411, y = 1.500, z = 1.611; 
    cout << trunc(x) << endl; 
    cout << trunc(y) << endl; 
    cout << trunc(z) <<endl; 
  
    a = -1.411, b = -1.500, c = -1.611; 
    cout << trunc(a) <<endl; 
    cout << trunc(b) <<endl; 
    cout << trunc(c) <<endl; 

    cout<<"round() -> Rounds given number to the closest integer.  "<<endl;

    x = 1.411, y = 1.500, z = 1.611; 
    cout << round(x) << endl; 
    cout << round(y) << endl; 
    cout << round(z) << endl; 
  
    a = -1.411, b = -1.500, c = -1.611; 
    cout << round(a) << endl; 
    cout << round(b) << endl; 
    cout << round(c) << endl; 

    cout<<"setprecision() -> Setprecision when used along with ‘fixed’ provides precision to floating point numbers correct to decimal numbers mentioned in the brackets of the setprecison " <<endl;
    cout<<"This manipulator is declared in header <iomanip>."<<endl;

    cout<<"Use of fixed"<<endl;
    double f =3.14159;
    cout << std::setprecision(2) << f << '\n';
    cout << std::setprecision(9) << f << '\n';
    cout << std::fixed;
    cout << std::setprecision(2) << f << '\n';
    cout << std::setprecision(9) << f << '\n';

    double pi = 3.14159;
    double npi = -3.14159; 
    cout << fixed << setprecision(0) << pi <<" "<<npi<<endl; 
    cout << fixed << setprecision(1) << pi <<" "<<npi<<endl; 
    cout << fixed << setprecision(2) << pi <<" "<<npi<<endl; 
    cout << fixed << setprecision(3) << pi <<" "<<npi<<endl; 
    cout << fixed << setprecision(4) << pi <<" "<<npi<<endl; 
    cout << fixed << setprecision(5) << pi <<" "<<npi<<endl; 
    cout << fixed << setprecision(6) << pi <<" "<<npi<<endl; 

    return 0;
}
