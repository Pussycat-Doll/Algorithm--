#include<iostream>
#include<vector>
using namespace std;

/*给定一个非负整数 num。对于 0 ≤ i ≤ num 范围中的每个数字 i ，
计算其二进制数中的 1 的数目并将它们作为数组返回。

    动态规划方程：             
                    x =(1001011101)2 ​= (605)10;
                    x'=(100101110)2  = (302)10;

    即：            P(x)=P(x/2)+(xmod2)
*/

vector<int> countBits(int num)
{
    vector<int> ve;
    ve.resize(num + 1,0);
    for (int i = 1; i <= num; ++i)
    {
        ve[i] = ve[i>>1] + (i & 1);
    }
    return ve;
}
int main()
{
    int num = 3;
    vector<int> ve = countBits(num);
    for (auto e : ve)
    {
        cout << e << " ";
    }
    cout << endl;
	return 0;
}