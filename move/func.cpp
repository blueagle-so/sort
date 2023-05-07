// CPP Program to demonstrate Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int z = 0, int w = 0) //assigning default values to z,w as 0
{
	return (z + w);
}

// Driver Code
int main()
{
	// Statement 1
	cout << sum() << endl;

	// Statement 2
	//cout << sum(10, 15, 25) << endl;

	// Statement 3
	//cout << sum(10, 15, 25, 30) << endl;
	return 0;
}

