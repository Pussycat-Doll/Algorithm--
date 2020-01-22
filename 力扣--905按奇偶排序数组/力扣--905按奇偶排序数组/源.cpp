/*给定一个非负整数数组 A，返回一个数组，在该数组中， A 的所有偶数元素之后跟着所有奇数元素。

你可以返回满足此条件的任何数组作为答案。

示例：

输入：[3,1,2,4]
输出：[2,4,3,1]
输出 [4,2,3,1]，[2,4,1,3] 和 [4,2,1,3] 也会被接受。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-array-by-parity
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& A)
{
    vector<int> B;//放偶数
    vector<int> C;//放奇数
    for (size_t i = 0; i < A.size(); ++i)
    {
        if (A[i] % 2 == 0)
            B.push_back(A[i]);
        else
            C.push_back(A[i]);
    }
    vector<int> ::iterator it = C.begin();
    while (it != C.end())
    {
        B.push_back(*it);
        ++it;
    }
    A = B;
    return A;
}
int main()
{

	return 0;
}