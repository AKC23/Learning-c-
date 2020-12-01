/*/
https://www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-9.php
C++ Exercises: Display the operation of pre and post increment and decrement
/*/
#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Input the value of n : "<<endl;
    cin>>n;
    cout<<"The number is : "<<n<<endl;
    n++;
    cout<<"After post increment by 1 the number is : "<<n<<endl;
    cout<<"After pre increment by 1 the number is : "<<++n<<endl;
    n += 1;
    cout<<"After increasing by 1 the number is : "<<n<<endl;
    n--;
    cout<<"After post decrement by 1 the number is : "<<n<<endl;
    --n;
    cout<<"After pre decrement by 1 the number is : "<<n<<endl;
    n -= 1;
    cout<<"After decreasing by 1 the number is : "<<n<<endl;

}
