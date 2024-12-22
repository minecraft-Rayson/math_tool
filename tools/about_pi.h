// about_pi.h
#pragma once
#ifndef ABOUT_PI_H
#define ABOUT_PI_H

namespace about_pi {

class Pi {
public:
    Pi();  // 构造函数声明
    double r(double user_input);  // 计算半径
    double d(double user_input);  // 计算直径
    double piserch(double user_input);  // 搜索π值

private:
    double pi;  // π值
};

}  // namespace about_pi

#endif  // ABOUT_PI_H