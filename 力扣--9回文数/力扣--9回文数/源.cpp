#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

/*bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    vector<int> str;
    while (x)
    {
        int temp = x % 10;
        str.push_back(temp);
        x /= 10;
    }
    int begin = 0;
    int end = str.size() - 1;
    while (begin <= end)
    {
        if (str[begin] == str[end])
        {
            begin++;
            --end;
        }
        else
            return false;
    }
    return true;
}*/

/*bool isPalindrome(int x)//不考虑溢出
{
    if (x < 0)
        return false;
    int y = 0;
    int num = x;
    while (x)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    if (num == y)
        return true;
    else
        return false;
}*/
/*   // 当数字长度为奇数时，我们可以通过 revertedNumber/10 去除处于中位的数字。
        // 例如，当输入为 12321 时，在 while 循环的末尾我们可以得到 x = 12，revertedNumber = 123，
        // 由于处于中位的数字不影响回文（它总是与自己相等），所以我们可以简单地将其去除。
如何知道反转数字的位数已经达到原始数字位数的一半？
我们将原始数字除以 10，然后给反转后的数字乘上 10，所以，
当原始数字小于反转后的数字时，就意味着我们已经处理了一半位数的数字。

*/
bool isPalindrome(int x)//优化--为了避免整型溢出的情况，这次只翻转一半
{
    if (x < 0 || (x%10 == 0 && x != 0))
        return false;
    int y = 0;
  
    while (x > y)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    if (x == y || x == (y/10))
        return true;
    else
        return false;
}
int main()
{
    return 0;
}
