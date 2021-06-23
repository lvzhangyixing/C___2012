//
// Created by Apple on 2021/6/23.
//
// 输入并统计字符数量

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const int MAX(80);
    char buffer[MAX]; //输入字符
    int count(0);  //统计字符数量

    cout << "Enter a string less than "
          << MAX << " characters:\n";
    cin.getline(buffer, MAX, '\n');

    while (buffer[count] != '\0')
        count++;

    cout << endl
        << "The string \" " << buffer
        << " \" has " << count << " characters.";
    cout << endl;

    return 0;

}
