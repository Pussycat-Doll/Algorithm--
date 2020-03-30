/*
题目描述
小强从小就喜欢生命科学，他总是好奇花草鸟兽从哪里来的。终于， 小强上中学了，接触到了神圣的名词--DNA.
它有一个双螺旋的结构。这让一根筋的小强抓破头皮，“要是能画出来就好了” 小强喊道。现在就请你帮助他吧
输入
输入包含多组测试数据。第一个整数N（N<=15）,N表示组数，每组数据包含两个整数a,b。a表示一个单位的DNA串的
行数，a为奇数且 3<=a<=39。b表示重复度(1<=b<=20)。

输出
输出DNA的形状，每组输出间有一空行。

样例输入
2
3 1
5 4
样例输出
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
        //打印X的条件  i==j || i+j==a-1
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
