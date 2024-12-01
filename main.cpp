#include <iostream>
#include <cmath>
#include "tools/about_pi.h"   //include circumference
using namespace std;

int main() 
{
    int index;    //set user input 
    cout << "Hello, Welcome to use math tool" << endl;    //welcome sentence
    cout << "Make with zk stdio!" << endl;    //welcome sentence
    /*======================================================================*/
    for (;;)    //main loop
    {
        cout << "Please input your choice(1.circumference 2. pi 0.exit):_\b";     //input choice
        cin >> index;    //get user input
        switch (index)
        {
        case 0:
        {
            exit(0);  // 修复 exit 的调用
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
                about_pi::Pi pi_instance;  // 创建 Pi 类的实例
                cout << "The circumference is:" << pi_instance.r(radius) << endl;  // 通过实例调用 r 方法
                continue;
            }
            case 2:
            {
                long double diameter;
                cout << "Please input the diameter:";
                cin >> diameter;
                about_pi::Pi pi_instance;  // 创建 Pi 类的实例
                cout << "The circumference is:" << pi_instance.d(diameter) << endl;  // 通过实例调用 d 方法
                continue;
            }
            }
        }
        case 2:
        {
            long double user;
            cout << "Please input the number:";
            cin >> user;
			about_pi::Pi pi_instance;  // 创建 Pi 类的实例
            cout << "The pi is:" << pi_instance.piserch(user) << endl;
            continue;
        }
        default:
        {
            cout << "\aError!" << endl;
        }
        }
    }
}
