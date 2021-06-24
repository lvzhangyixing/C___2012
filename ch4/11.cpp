//
// Created by Apple on 2021/6/24.
//

// 使用空闲存储器存储素数
#include <bits/stdc++.h>

using namespace std;

int main() {

    long* pprime(nullptr); //素数数组指针
    long trial(5); //从5开始计算素数
    int count(3); //已知的2，3，5三个素数
    int found(0); //判断是否为素数
    int max(0); //由用户输入想要多少个素数

    cout << endl
        << "Enter the number of primes you want (>=4) ";
    cin >> max;

    if (max < 4)
        max = 4;

    pprime = new long[max]; //使用空闲存储器存储素数

    *pprime = 2;
    *(pprime + 1) = 3;
    *(pprime + 2) = 5; //输入前三个种子数


    //判断素数部分
    do {
        trial += 2; //下一个需要检查的值
        found = 0; //默认当前不是素数

        //for循环3次，判断当前数字能否被2，3，5整除
        for (int i = 0; i < count; i++){
            found = (trial % *(pprime + i)) ==0;
            if (found)  //如果能被2，3，5整除，说明不是素数
                break;
        }
        if (found == 0)
            *(pprime + count++) = trial; //不能被2，3，5整除说明是素数

    } while (count < max);

    //5个一行输出素数
    for (int i = 0; i < max; i++)
    {
        if (i % 5 == 0)
            cout << endl;
        cout << setw(10) << *(pprime + i);
    }

    delete [] pprime; //释放内存
    pprime = nullptr; //重制指针
    cout << endl;

    return 0;

}

