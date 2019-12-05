#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>//动态规划
/*题目描述
在数组A[0..n-1]中，有所谓的魔术索引，满足条件A[i]=i。给定一个升序数组，元素值各不相同，编写一个方法，判断在数组A中是否存在魔术索引。请思考一种复杂度优于o(n)的方法。

给定一个int数组A和int n代表数组大小，请返回一个bool，代表是否存在魔术索引。

测试样例：
[1,2,3,4,5]
返回：false*/
class MagicIndex {
public:
	bool findMagicIndex(vector<int> A, int n) {
		if (n <= 0)
			return false;
		else if (n >= 1 && A[n - 1] == n - 1)
			return true;
		else
			return findMagicIndex(A, n - 1);
	}
};