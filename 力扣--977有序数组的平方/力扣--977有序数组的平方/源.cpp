/*给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，
要求也按非递减顺序排序。

示例 1：

输入：[-4,-1,0,3,10]
输出：[0,1,9,16,100]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/squares-of-a-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& A)
{
    for (int i = 0; i < A.size(); ++i)
    {
        A[i] = A[i] * A[i];
    }
    sort(A.begin(), A.end());
    return A;
}
int main()
{

	return 0;
}