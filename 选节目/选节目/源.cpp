/*��������
����С��Ҫ��֯һ̨��ᣬ�ܹ�׼���� n ����Ŀ��Ȼ������ʱ�����ޣ���ֻ������ѡ�����е� m ����Ŀ��
������ n ����Ŀ�ǰ���С�������˳������ģ�˳���ܸı䡣
����С�����֣����ڶ������ϵ�ϲ���̶���ǰ������Ŀ�ĺÿ��̶��зǳ���Ĺ�ϵ����ϣ��ѡ���ĵ�һ����Ŀ�����ܺÿ���
    �ڴ�ǰ����ϣ���ڶ�����Ŀ�����ܺÿ����������ơ�
����С����ÿ����Ŀ������һ���ÿ�ֵ���������С��ѡ��� m ����Ŀ����������Ҫ��
�����ʽ
��������ĵ�һ�а����������� n, m ����ʾ��Ŀ��������Ҫѡ���������
�����ڶ��а��� n ������������Ϊÿ����Ŀ�ĺÿ�ֵ��
�����ʽ
�������һ�а��� m ��������Ϊѡ���Ľ�Ŀ�ĺÿ�ֵ��
��������
5 3
3 1 2 5 4
�������
3 5 4
����˵��
ѡ���˵�1, 4, 5����Ŀ��*/
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

