/*给定两个二进制字符串，返回他们的和（用二进制表示）。
输入为非空字符串且只包含数字 1 和 0。

示例 1:

输入: a = "11", b = "1"
输出: "100"
示例 2:

输入: a = "1010", b = "1011"
输出: "10101"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-binary
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<string>
using namespace std;
string addBinary(string a, string b) 
{
    string st;
    while (a.size() > b.size())
        b = '0' + b;
    while (b.size() > a.size())
        a = '0' + a;
    for (int i = a.size() - 1; i > 0; --i)
    {
        a[i] = a[i] + b[i] - '0';
        if (a[i] > '1')
        {
            a[i] = a[i] - 2;
            a[i - 1]++;
        }
    }
    a[0] = a[0] + b[0] - '0';
    if (a[0] > '1')
    {
        a[0] = a[0] - 2;
        a = '1' + a;
    }
    return a;
}
int main()
{

    return 0;
 }