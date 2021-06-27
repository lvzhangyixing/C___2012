//
// Created by Apple on 2021/6/26.
//

//接收命令行参数

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {

    cout << endl << "argc = " << argc << endl;
    cout << " Command line argument received are: " << endl;
    for (int i = 0; i < argc; i++)
        cout << "argument" << (i+1) << " : " << argv[i] << endl;

    return 0;

}
