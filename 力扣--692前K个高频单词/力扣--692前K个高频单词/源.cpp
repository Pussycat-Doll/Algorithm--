/*给一非空的单词列表，返回前 k 个出现次数最多的单词。
返回的答案应该按单词出现频率由高到低排序。如果不同的单词有相同出现频率，按字母顺序排序。

示例 1：

输入: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
输出: ["i", "love"]
解析: "i" 和 "love" 为出现次数最多的两个单词，均为2次。
    注意，按字母顺序 "i" 在 "love" 之前。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/top-k-frequent-words
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
//方法一：multimap(允许重复的map,不支持[])
//vector<string> topKFrequent(vector<string>& words, int k) 
//{
//    map<string, int> mp;
//    for (auto &e : words)//最好加上引用，这样就可以不用再浪费空间再去拷贝一份了
//    {
//        mp[e]++;
//    }
//    multimap<int, string, greater<int>> st;
//    vector<string> ve;
//    for (auto i = mp.begin(); i != mp.end(); ++i)
//    {
//        st.insert(make_pair(i->second, i->first));
//    }
//    int i = 0;
//    for (auto it = st.begin(); it != st.end() && i < k; ++it)
//    {
//        ve.push_back(it->second);
//        ++i;
//    }
//    return ve;
//}
//方法二：sort()算法
struct compare
{
    bool operator()(const pair<string, int>& l, const pair<string, int>& t)
    {
        return l.second > t.second;
    }
};
/*
vector<string> topKFrequent(vector<string>& words, int k)
{
    map<string, int> mp;
    for (auto& e : words)//最好加上引用，这样就可以不用再浪费空间再去拷贝一份了
    {
        mp[e]++;
    }
    vector<pair<string, int>> st;
    for (const auto& e : mp)
    {
        st.push_back(e);
    }
    sort(st.begin(), st.end(), compare());
    vector<string> ve;
    for (int i = 0; i < k; ++i)
    {
        ve.push_back(st[i].first);
        cout << st[i].first << ":" << st[i].second << endl;
    }
    return ve;
}*/
//方法三：优先级队列-利用堆--小堆降序--大堆升序
/*priority_queue:
template <class T, class Container = vector<T>,
  class Compare = less<typename Container::value_type> > class priority_queue;*/
vector<string> topKFrequent(vector<string>& words, int k)
{
    map<string, int> mp;
    for (auto& e : words)//最好加上引用，这样就可以不用再浪费空间再去拷贝一份了
    {
        mp[e]++;
    }
    priority_queue<pair<string, int>,vector<pair<string,int>>,compare> pq;
    size_t i = 0;
    for (auto& e : mp)
    {
        if (i < k)
        {
            pq.push(e);
            ++i;
        }
        else
        {
            if (e.second > pq.top().second)
            {
                pq.pop();
                pq.push(e);
            }
        }
    }
}
int main()
{
    vector<string> word = { "i", "love", "leetcode", "i", "love", "coding" };
    vector<string> ret = topKFrequent(word,2);
    return 0;
}