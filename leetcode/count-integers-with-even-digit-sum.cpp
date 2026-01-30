#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

/**
 * 
 * 给你一个正整数 num ，请你统计并返回 小于或等于 num 且各位数字之和为 偶数 的正整数的数目。
 * 正整数的 各位数字之和 是其所有位上的对应数字相加的结果。
 * 
 * 输入：num = 4
输出：2
解释：
只有 2 和 4 满足小于等于 4 且各位数字之和为偶数。

输入：num = 30
输出：14
解释：
只有 14 个整数满足小于等于 30 且各位数字之和为偶数，分别是： 
2、4、6、8、11、13、15、17、19、20、22、24、26 和 28 。
 * 
 */

class Solution {
public:
    int countEven(int num) {

        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            int sum = 0;
            int r = i;
            while(r) {
                sum += r % 10;
                r /= 10;
            }
            if(sum % 2 == 0) {
                count ++;
            }
        }
        return count;
    }
};

int main() {

    Solution s ;
    int output1 = s.countEven(4);
    int output2 = s.countEven(30);
    cout << output1 << ", " << output2 << endl;
}