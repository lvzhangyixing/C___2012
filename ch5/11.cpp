//
// Created by Apple on 2021/6/26.
//

//接收数量不定的实参

#include <bits/stdc++.h>

using namespace std;

int sum(int count , ...){
    va_list arg_ptr; //声明参数列表指针
    va_start(arg_ptr, count); //将arg_ptr设置成第一个参数

    int sum(0);
    for (int i = 0 ; i < count; i ++)
        sum += va_arg(arg_ptr, int); //从arg_ptr取出一个int值,然后递增

    va_end(arg_ptr); //将指针重制为null
    return sum;
}

int main(int argc, char* argv[]) {

    cout << sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    cout << sum(5, 2, 4, 6, 8, 10) << endl;


    return 0;

}