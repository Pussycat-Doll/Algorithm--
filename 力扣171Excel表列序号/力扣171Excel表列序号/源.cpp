#include<iostream>
#include<string>
using namespace std;
int titleToNumber(string s)
{
    int sum = 0;
    int temp = 1;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        sum += (s[i] - 'A' + 1) * temp;
        temp *= 26;
    }
    return sum;//为什么会栈溢出
}

//int titleToNumber(string s) {
//    int res = 0;
//    for (int i = 0; i < s.size(); ++i)
//        res = 26 * res + (s[i] - 'A' + 1);
//    return res;
//}

int main()
{

    return 0;
}
//https://leetcode-cn.com/problems/excel-sheet-column-number/solution/