#include <iostream>
using namespace std;
 

int factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}
 

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}

//output
//Factorial of 5 is 120
