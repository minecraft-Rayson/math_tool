#include "about_pi.h"
using namespace about_pi;

// ���캯��ʵ��
Pi::Pi() : pi(3.14159265358979323846) {
}

// ����ֱ��
double Pi::d(double user_input) {
    double diameter = user_input * 2 * this->pi;
    return diameter;
}

// ������ֵ
double Pi::piserch(double user_input) {
    double circumference = user_input * this->pi;
    return circumference;
}

// ����뾶
double Pi::r(double user_input) {
    double radius = user_input * user_input * this->pi;
    return radius;
}
