/*/
How floor func works in C++?
The floor() function takes a single argument and returns a value of type double, float or long double type. This function is defined in <cmath> header file.

floor() Parameters
The floor() function takes a single argument whose floor value is computed.

floor() Return value
The floor() function returns the largest possible integer value which is less than or equal to the given argument.
/*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 10.25, result;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;
    x = -34.251;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;

    x = 0.71;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;

    x = 15;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;

    return 0;
}
