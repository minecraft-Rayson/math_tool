#ifndef ABOUT_PI_H
#define ABOUT_PI_H

namespace about_pi {

class Pi {
public:
    Pi();  // ���캯������
    double r(double user_input);  // ����뾶
    double d(double user_input);  // ����ֱ��
    double piserch(double user_input);  // ������ֵ������Ϊ�����ܳ���

private:
    double pi;  // ��ֵ
};

}  // namespace about_pi

#endif  // ABOUT_PI_H
