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
		cout << "Please input your choice(1.circumference 2. pi 0.exit):_\b";     //input choice
		cin >> index;    //get user input
		switch (index)
		{
		case 0:
		{
			exit;
			return 0;
		}
		case 1:
		{
			cout << "Choose 1.radius(r) 2.diameter(d):_\b";
			cin >> index;
			switch (index)
			{
			case 1:
			{
				long double radius;
				cout << "Please input the radius:";
				cin >> radius;
				cout << "The circumference is:" << pi::r(radius) << endl;
				continue;
			}
			case 2:
			{
				long double diameter;
				cout << "Please input the diameter:";
				cin >> diameter;
				cout << "The circumference is:" << pi::d(diameter) << endl;
				continue;
			}
			}
		}
		case 2:
		{
			long double user;
			cout << "Please input the number:";
			cin >> user;
			cout << "The pi is:" << pi::piserch(user) << endl;
			continue;
		}
		default:
		{
			cout << "\aError!" << endl;
		}
		}
	}
}
