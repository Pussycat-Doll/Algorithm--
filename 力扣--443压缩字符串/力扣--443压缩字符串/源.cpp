#include<iostream>
#include<vector>
using namespace std;
int compress(vector<char>& chars)
{
    if (chars.empty())
        return 0;
    int j = 0;
    int cnt = 0;
    for (int i = 1; i <= chars.size(); ++i)
    {
        ++cnt;
        if (i == chars.size() || chars[i] != chars[j])
        {
            ++j;
            if (cnt != 1)
            {
                string str = to_string(cnt);
                for (auto e : str)
                {
                    chars[j++] = e;
                }
            }
            if (i == chars.size())
                break;
            chars[j] = chars[i];
            cnt = 0;
        }
    }
    return j;
}
int main()
{
    vector<char> chars = { 'a','a','b','b','b','c','c','c'};
    cout << compress(chars) << endl;

	return 0;
}