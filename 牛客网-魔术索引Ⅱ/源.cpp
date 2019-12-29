#include<iostream>
#include<vector>
using namespace std;

bool findMagicIndex(vector<int> A, int n) {
    // write code here
    if (n <= 0)
        return false;
    //else if (n >= 1 && A[n - 1] == n - 1)
    //    return true;
    //else
    //    findMagicIndex(A, n - 1);
    else
    {
        int i = 0;
        while (i < n)
        {
            if (A[i] == i)
                return true;
            else if (A[i] > i)
                i = A[i];
            else
                i++;
        }
        return false;
    }
}
int main()
{
    vector<int> A = { 1,1,3,4,5,5 };
    cout << findMagicIndex(A, A.size()) << endl;;
	return 0;
}