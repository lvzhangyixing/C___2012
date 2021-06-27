//
// Created by Apple on 2021/6/26.
//

//使用动态内存返回指针

// 绝对不要返回局部变量的地址

#include <bits/stdc++.h>

using namespace std;

double* treble(double);

int main() {

    double num(5.0);     //测试数值
    double* ptr(nullptr);//指针用来返回值

    ptr = treble(num);

    cout << endl << "Three times num = " << 3.0*num;

    cout << endl << "Result = " << *ptr;

    delete ptr; //释放内存

    ptr = nullptr;

    cout << endl;

    return 0;

}

//返回3倍函数值
double* treble(double data)
{
    double* result(new double(0.0));  //创建一个一直存在的变量
    *result = 3.0*data;
    return result;
}