//
// Created by Apple on 2021/6/26.
//
// 传递数组

#include <bits/stdc++.h>

using namespace std;

double average(double array[], int count);

int main() {

    double values[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    cout << endl << "Average = "
        << average(values, (sizeof values)/(sizeof values[0]) ) << endl;

    return 0;

}

//计算平均值函数
double average(double array[], int count)
{
    double sum(0.0);
    for (int i = 0; i < count ; i++)
        sum += array[i];

    return sum/count;
}
