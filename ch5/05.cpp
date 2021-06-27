//
// Created by Apple on 2021/6/26.
//
//使用指针符号传递数组

#include <bits/stdc++.h>

using namespace std;

double average(double* array, int count); //函数原型

int main() {

    double values[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    cout << endl << "Average = "
        << average(values, ( (sizeof values)/(sizeof values[0]) )) << endl;

    return 0;

}

//计算平均值

double average(double* array, int count)
{
    double sum(0.0);
    for (int i = 0; i < count ; i++)
        sum += *array++;  //计算总和

    return sum/count; //返回平均值

}
