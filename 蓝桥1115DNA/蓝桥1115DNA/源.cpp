/*
��Ŀ����
Сǿ��С��ϲ��������ѧ�������Ǻ��滨�����޴��������ġ����ڣ� Сǿ����ѧ�ˣ��Ӵ�������ʥ������--DNA.
����һ��˫�����Ľṹ������һ�����Сǿץ��ͷƤ����Ҫ���ܻ������ͺ��ˡ� Сǿ���������ھ������������
����
�����������������ݡ���һ������N��N<=15��,N��ʾ������ÿ�����ݰ�����������a,b��a��ʾһ����λ��DNA����
������aΪ������ 3<=a<=39��b��ʾ�ظ���(1<=b<=20)��

���
���DNA����״��ÿ���������һ���С�

��������
2
3 1
5 4
�������
X X 
 X
X X

X   X    i==j || i+j==a-1
 X X
  X
 X X
X   X
 X X
  X
 X X
X   X
 X X
  X
 X X
X   X
 X X
  X
 X X
X   X*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int a, b;
        cin >> a >> b;
        //��ӡX������  i==j || i+j==a-1
        int l = 0;
        while (b--)
        {
            for (int i = l; i < a; ++i)
            {
                int j;
                for (j = 0; j < a; ++j)
                {
                    if (i == j || i + j == a - 1)
                        cout << "X";
                    else
                        cout << " ";
                }
                l = 1;
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, a, b;
//    cin >> n;
//    while (n--) {
//        cin >> a >> b;
//        int l = 0;
//        while (b--) {
//            for (int i = l; i < a; i++) {
//                for (int j = 0; j < a; j++) {
//                    if (i == j || i + j == a - 1)cout << "X";
//                    else cout << " ";
//                }
//                cout << endl;
//                l = 1;
//            }
//        }
//        cout << endl;
//    }
//}
