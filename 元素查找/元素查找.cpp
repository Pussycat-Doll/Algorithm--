/*
��һ���Ź�������飬����n����������������������������һ�����ȵ���λ�����磬ԭ����Ϊ[1,2,3,4,5,6]��������λ5��λ�ü������[6,1,2,3,4,5],���ڶ�����λ������飬��Ҫ����ĳ��Ԫ�ص�λ�á������һ�����Ӷ�Ϊlog������㷨����������
����һ��int����A��Ϊ��λ������飬ͬʱ���������Сn����Ҫ���ҵ�Ԫ�ص�ֵx���뷵��x��λ��(λ�ô��㿪ʼ)����֤������Ԫ�ػ��졣
����������
[6,1,2,3,4,5],6,6
���أ�0
*/


class Finder {
public:
    int findElement(vector<int> A, int n, int x) {
        // write code here
        int left = 0;
        int right = n - 1;
        int mid = (left + right)/2;
        while(left <= right)
        {
             mid = (left + right)/2;
            if( A[mid] == x)
                return mid;
            else
            {
                if(A[left] < A[mid])//���Ϊ��������
                {
                    if(A[left] <= x && x < A[mid])
                        right = mid-1;
                    else
                        left = mid + 1;
                }
                else
                {
                    if(A[right] >= x && x > A[mid])
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
            }
        }
        return -1;
    }
};
