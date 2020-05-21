/*�����һ���û��ݷ��������пռ����ĺ������ú����Ĳ����������������ж���������
�纯���ȱ�Ҫ�ĺ����������˺������ڽ�Բ�������⡣
Բ����������������:���� n ����С���ȵ�Բ c1,c2,...,cnc1,c2,...,cn ����Ҫ���� n 
��Բ�Ž�һ�����ο��У���Ҫ���Բ����ο�ĵױ����С�Բ��������Ҫ��� n ��Բ����
���������ҳ�����С���ȵ�Բ���С�
���磬�� n=3���������� 3 ��Բ�İ뾶�ֱ�Ϊ 1��1��2 ʱ���� 3 ��Բ����С���ȵ�Բ��
����ͼ��ʾ������С����Ϊ 2+42�C��2+42 ��
*/
#include<iostream>
#include<algorithm>
using namespace std;
int MAX = 100000;
int n;
float Min, centerx;
float* x;
float* xr;

void swap(float* x, int m, int n) {
    float tmp = x[m];
    x[m] = x[n];
    x[n] = tmp;
}

void record() {
    float low = 0, high = 0;
    for (int i = 1; i <= n; i++) {
        if (xr[i] - x[i] < low) low = xr[i] - x[i];
        if (xr[i] + x[i] > high) high = xr[i] + x[i];
    }
    if (high - low < Min)
        Min = high - low;
}

bool constraint(int t) {
    return true;
}
float center(int t) {
    float temp = 0;
    for (int j = 1; j < t; j++) {
        float valuex = (float)(xr[j] + 2.0 * sqrt(x[t] * x[j]));
        if (valuex > temp) temp = valuex;
    }
    return temp;
}
bool bound(int t) {
    centerx = center(t);
    if (centerx + x[t] + x[1] < Min)
        return true;
    return false;
}

void change(int t) {
    xr[t] = centerx;
}


void backtrack(int t) {
    if (t > n) record();
    else
        for (int i = t; i <= n; i++) {
            swap(x, t, i);
            if (constraint(t) && bound(t)) {
                change(t);
                backtrack(t + 1);
            }
            swap(x, t, i);
        }
}

int main()
{
    Min = MAX;
    cin >> n;
    x = new float[n + 1];
    xr = new float[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    backtrack(1); 
    printf("%.5f",Min);
}



