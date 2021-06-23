//
// Created by Apple on 2021/6/23.
//

// 获取100个素数
//主要在于理解通过指针访问数组  *(pointer + number)
#include <bits/stdc++.h>

using namespace std;

int main() {

    const int MAX(100); //希望获得的最大素数数量
    long primes[MAX] = {2, 3, 5}; //素数数组，包括前三个已知的三个素数因子
    long trial(5); //开始判断的第一元素
    int count(3); //发现的素数数量
    bool found(false); //显示一个数是否是素数

    do
    {
        trial += 2; //获取下一个需要判断的数

        // 循环3次，尝试当前数字能否被2，3，5整除
        for (int i = 0; i < count; i++) {
            found = (trial % *(primes + i) == 0); //如果能被2，3，5整除，将True赋值给found
                if (found)
                    break; //不是素数即跳出当前判断素数循环
        }
                if (!found)
                    *(primes + count++) = trial;
    }while (count < MAX); //循环MAX次，以获得100个素数

    // 5个一行，显示所有的100个素数
    for (int i = 0; i < MAX; i++){
        if (i % 5 == 0)
            cout << endl; // 5个一换行
        cout << setw(10) << *(primes + i)    ;
    }
    cout << endl;

    return 0;

}