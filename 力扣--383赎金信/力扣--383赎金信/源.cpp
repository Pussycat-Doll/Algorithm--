#include<iostream>
#include<map>
#include<set>
using namespace std;
/*给定一个赎金信 (ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串ransom能不能由第二个字符串magazines里面的字符构成。如果可以构成，返回 true ；否则返回 false。

(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。)

注意：

你可以假设两个字符串均只含有小写字母。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/ransom-note
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/

bool canConstruct(string ransomNote, string magazine)
{
	if (ransomNote.size() > magazine.size())
		return false;
	map<char, int> times;
	for (size_t i = 0; i < magazine.size(); ++i)
	{
		times[magazine[i]]++;
	}
	for (size_t i = 0; i < ransomNote.size(); ++i)
	{
		times[ransomNote[i]]--;
		if (times[ransomNote[i]] < 0)
			return false;
	}
	return true;
}
int main()
{

	return 0;
}
