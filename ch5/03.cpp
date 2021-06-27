//
// Created by Apple on 2021/6/25.
//
//给函数传递指针实参

#include <bits/stdc++.h>

using namespace std;

int incr10(int* num);

int main() {

    int num(3);

    int* pnum(&num);

    cout << endl << "Address passed = " << pnum;  //pnum是地址

    int result = incr10(pnum);
    cout << endl << "incr10(pnum) = " << result; //函数的返回值

    cout << endl << "num = " << num << endl;  //指针已经改变了原来的变量

    return 0;

}

//自增10
int incr10(int* num)
{
    cout << endl << "Address received = " << num;

    *num += 10;

    return *num;
}