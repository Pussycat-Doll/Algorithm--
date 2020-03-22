/*��������
���������� a[1], a[2], ..., a[n] �У���������±� i, j, k ���� 0<i<j<k<n+1 �� a[i]<a[j]<a[k]��
  ��� a[i], a[j], a[k] Ϊһ�������Ԫ�飬a[j]Ϊ������Ԫ������ġ�
��������һ�����У������������ж��ٸ�Ԫ�ؿ����ǵ�����Ԫ������ġ�
�����ʽ
��������ĵ�һ�а���һ������ n��
�����ڶ��а��� n ������ a[1], a[2], ..., a[n]�����ڵ��������ÿո�ָ�����ʾ���������С�
�����ʽ
�������һ�а���һ����������ʾ�𰸡�
��������
5
1 2 5 3 5
�������
2
����˵��
����a[2] �� a[4] ��������Ԫ������ġ�
����������ģ��Լ��
�������� 50% ������������2 <= n <= 100��0 <= �����е��� <= 1000��
����������������������2 <= n <= 1000��0 <= �����е��� <= 10000��
*/
#include<iostream>
#include<vector>
using namespace std;

int func(vector<int> ve)
{
    int num = 0;
    int times = 0;
    for (int i = 1; i < ve.size() - 1; ++i)
    {
        num = 0;
        for (int j = 0; j < i; ++j)
        {
            if (ve[j] < ve[i])
            {
                ++num;
                break;
            }
        }
        for (int k = i + 1; k < ve.size(); ++k)
        {
            if (ve[k] > ve[i])
            {
                ++num;
                break;
            }
        }
        if (num == 2)
            ++times;
    }
        return times;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ve;
    int x;
    while (n--)
    {
        cin >> x;
        ve.push_back(x);
    }

    cout << func(ve) << endl;
    return 0;
}