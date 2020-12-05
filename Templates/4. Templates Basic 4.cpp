/* 
An Example Program for function template specialization
For example, consider the following simple code where we have 
general template fun() for all data types except int. For int, there is a specialized version of fun().
 */
#include <iostream> 
using namespace std; 

template <class T> 
void fun(T a) 
{ 
    cout << "The main template fun(): " << a << endl; 
} 
  
template<> 
void fun(int a) 
{ 
    cout << "Specialized Template for int type: "<< a << endl; 
} 
  
int main() 
{ 
    fun<char>('a'); 
    fun<int>(10); 
    fun<float>(10.14); 
} 
/* 
Output:
The main template fun(): a
Specialized Template for int type: 10
The main template fun(): 10.14 
*/