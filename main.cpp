/*
 * Copyright 2024 Zhang Ruishen, China
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include "lib/json.hpp"  // 包含 JSON 解析库
#include "tools/about_pi.h"

using namespace std;
using json = nlohmann::json;

// 函数声明
string getLocalizedString(const string& key);

int main() 
{
    int index;    // set user input 
    cout << getLocalizedString("welcome_message") << endl;    // welcome sentence
    cout << getLocalizedString("make_with") << endl;    // welcome sentence
    /*======================================================================*/
    for (;;)    // main loop
    {
        cout << getLocalizedString("input_choice") << "\b";     // input choice
        cin >> index;    // get user input
        switch (index)
        {
        case 0:
        {
            exit(0);  // 修复 exit 的调用
            return 0;
        }
        case 1:
        {
            cout << getLocalizedString("choose_radius_diameter") << "\b";
            cin >> index;
            switch (index)
            {
            case 1:
            {
                long double radius;
                cout << getLocalizedString("input_radius");
                cin >> radius;
                about_pi::Pi pi_instance;  // 创建 Pi 类的实例
                cout << getLocalizedString("area_result") << pi_instance.r(radius) << endl;  // 通过实例调用 r 方法
                continue;
            }
            case 2:
            {
                long double diameter;
                cout << getLocalizedString("input_diameter");
                cin >> diameter;
                about_pi::Pi pi_instance;  // 创建 Pi 类的实例
                cout << getLocalizedString("area_result") << pi_instance.d(diameter) << endl;  // 通过实例调用 d 方法
                continue;
            }
            default:
            {
                cout << "\a" << getLocalizedString("error_message") << endl;
                continue;
            }
            }
        }
        case 2:
        {
            long double user;
            cout << getLocalizedString("input_number");
            cin >> user;
            about_pi::Pi pi_instance;  // 创建 Pi 类的实例
            cout << getLocalizedString("pi_result") << pi_instance.piserch(user) << endl;
            continue;
        }
        default:
        {
            cout << "\a" << getLocalizedString("error_message") << endl;
        }
        }
    }
}

// 函数定义
string getLocalizedString(const string& key) {
    static json localizationData;
    if (localizationData.empty()) {
        ifstream file("language\\english.json");
        if (file.is_open()) {
            file >> localizationData;
        } else {
            cerr << "Failed to open localization file." << endl;
            return key;  // 返回键本身作为默认值
        }
    }
    return localizationData.value(key, key);  // 返回键对应的值，如果不存在则返回键本身
}