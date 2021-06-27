//
// Created by Apple on 2021/6/26.
//

//给函数传递引用

#include <bits/stdc++.h>

using namespace std;

int incr10(int& num);

int main() {

    int num(3);

    int result = incr10(num);
    cout << endl << " incr10(num) " << result
        << endl << " num = " << num;  //应用值已经改变原来的数据


    return 0;

}

//增10
int incr10(int& num)
{
    cout << endl << "Value received = " << num;
    num += 10;

    return num;
}

