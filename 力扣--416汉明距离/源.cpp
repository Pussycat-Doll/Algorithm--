
/*两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。

给出两个整数 x 和 y，计算它们之间的汉明距离。

注意：
0 ≤ x, y < 2^31.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/hamming-distance
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/

int hammingDistance(int x, int y)
{
    /*int sum = 0;
    int n = 32;
    while(n--)
    {
        int a = (x>>n)&1;
        int b = (y>>n)&1;
        if(a^b == 1)
            sum++;
    }
    return sum;*/
    int a = x ^ y;
    int sum = 0;
    for (int i = 0; i < 32; ++i)
    {
        if (a & 1 == 1)
            ++sum;
        a >>= 1;
    }
    return sum;
}