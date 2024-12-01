#include "about_pi.h"
using namespace about_pi;

// 构造函数实现
Pi::Pi() : pi(3.14159265358979323846) {
}

// 计算直径
double Pi::d(double user_input) {
    double diameter = user_input * 2 * this->pi;
    return diameter;
}

// 搜索π值
double Pi::piserch(double user_input) {
    double circumference = user_input * this->pi;
    return circumference;
}

// 计算半径
double Pi::r(double user_input) {
    double radius = user_input * user_input * this->pi;
    return radius;
}
