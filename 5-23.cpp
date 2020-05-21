/*试设计一个用回溯法搜索排列空间树的函数。该函数的参数包括结点可行性判定函数和上
界函数等必要的函数，并将此函数用于解圆排列问题。
圆排列问题描述如下:给定 n 个大小不等的圆 c1,c2,...,cnc1,c2,...,cn ，现要将这 n 
个圆排进一个矩形框中，且要求各圆与矩形框的底边相切。圆排列问题要求从 n 个圆的所
有排列中找出有最小长度的圆排列。
例如，当 n=3，且所给的 3 个圆的半径分别为 1，1，2 时，这 3 个圆的最小长度的圆排
列如图所示，其最小长度为 2+42–√2+42 。
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



