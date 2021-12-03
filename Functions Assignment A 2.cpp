// Functions Assignment A 2.
//Admission: 147683

#include <iostream>
using namespace std; 

//Write a complete program that contains a function max() that receives 3 integers and returns the maximum of the three integers. The program should allow the user to enter the 3 integers, and output the greatest


int max(int x, int y, int z)
{
	if (x>y && y>z)
	{
		return x;
	}
	else if (y>x && y>z)
	{
		return y;
	}
	else
	{
		return z; 
	}
}

int main()
{
	int x, y, z;
	cout << "Please enter three numbers"<<endl; 
	cin >> x >> y >> z;

	cout << "The maximum value of the three numbers is " << max(x, y, z) << endl; 

	return 0; 

}



