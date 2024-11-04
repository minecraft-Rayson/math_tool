#include <iostream>
#include <cmath>
#include "tools/about_pi.h"   //include circumference
using namespace std;
int main() 
{
	int index;    //set user input 
	cout << "Hello, Welcome to use math tool" << endl;    //welcome sentence
	cout << "Make with zk stdio!" << endl;    //welcome sentence
	/*=======================================================================*/
	for (;;)    //main loop
	{
		cout << "Please input your choice(1.circumference 2. pi 0.exit):";     //input choice
		cin >> index;    //get user input
		if (index == 0) //exit if
		{
			break;
			return 0;
		}
		else if (index == 1) //circumference if
		{
			cout << "Choose 1.radius(r) 2.diameter(d):";
			cin >> index;
			if (index == 1)
			{
				long double radius;
				cout << "Please input the radius:";
				cin >> radius;
				cout << "The circumference is:" << r(radius) << endl;
			}
			else if (index == 2)
			{
				long double diameter;
				cout << "Please input the diameter:";
				cin >> diameter;
				cout << "The circumference is:" << d(diameter) << endl;
			}
		}
		else if (index == 2)     // pi serch if
		{
			long double user;
			cout << "Please input the number:";
			cin >> user;
			cout << "The pi is:" << piserch(user) << endl;
		}
		else {         //error if
			cout << "Error!" << endl;
		}
	}
}