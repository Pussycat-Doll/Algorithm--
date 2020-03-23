/*问题描述
　　小明要组织一台晚会，总共准备了 n 个节目。然后晚会的时间有限，他只能最终选择其中的 m 个节目。
　　这 n 个节目是按照小明设想的顺序给定的，顺序不能改变。
　　小明发现，观众对于晚上的喜欢程度与前几个节目的好看程度有非常大的关系，他希望选出的第一个节目尽可能好看，
    在此前提下希望第二个节目尽可能好看，依次类推。
　　小明给每个节目定义了一个好看值，请你帮助小明选择出 m 个节目，满足他的要求。
输入格式
　　输入的第一行包含两个整数 n, m ，表示节目的数量和要选择的数量。
　　第二行包含 n 个整数，依次为每个节目的好看值。
输出格式
　　输出一行包含 m 个整数，为选出的节目的好看值。
样例输入
5 3
3 1 2 5 4
样例输出
3 5 4
样例说明
选择了第1, 4, 5个节目。*/
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> topk(vector<int> ve, int k)
{
    multimap<int, int, greater<int>> st;
    vector<int> result;
    for (int i = 0; i < ve.size(); ++i)
    {
        st.insert(make_pair(ve[i], i));
    }
    int i = 0;
    for (auto it = st.begin(); it != st.end() && i < k; ++it)
    {
        result.push_back(it->second);
        ++i;
    }
    return result;
}
int main()
{
    int n,m;
    cin >> n>>m;
    vector<int> ve;
    int x;
    while (n--)
    {
        cin >> x;
        ve.push_back(x);
    }
    vector<int> result = topk(ve,m);
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); ++i)
    {
        cout << ve[result[i]] << " ";
    }
    cout << endl;
  
    return 0;
}

