//
// Created by Apple on 2021/6/24.
//

//搜索子串在主串中出现次数

#include <bits/stdc++.h>

using namespace std;

int main() {

    char* str("Smith , where Jones had had had \" had had \" the examiners' approval. ");
    char* word("had");
    cout << "The string to be searched is: "
        << endl << str << endl;

    int count(0); //统计出现次数
    char* pstr(str); //从某位置开始检查
    char* found(nullptr);

    while (true){
        found = strstr(pstr, word);  //返回子串第一次出现位置
        if (!found)
            break; //从未找到就退出循环
        ++count;
        pstr = found + strlen(word);
    }

    cout << "\"" << word << " \" was found "
        << count << " times in the string." << endl;

    return 0;

}

