#include <iostream>
using namespace std;

int factorial(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
 

int main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}

