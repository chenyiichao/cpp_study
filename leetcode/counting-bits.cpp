#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

/**
 * 示例 1：

输入：n = 2
输出：[0,1,1]
解释：
0 --> 0
1 --> 1
2 --> 10
示例 2：

输入：n = 5
输出：[0,1,1,2,1,2]
解释：
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 */
class Solution {
public:
    Solution(){}
    int countOnes(int x) {
        int ones = 0;
        while (x > 0) {
            x &= (x - 1);
            ones++;
        }
        return ones;
    }

    vector<int> countBits(int n) {
        vector<int> bits(n + 1);
        for (int i = 0; i <= n; i++) {
            bits[i] = countOnes(i);
        }
        return bits;
    }
};
 

int main() {
    Solution s;
    vector<int> result = s.countBits(5);
    for (int i = 0; i < result.size(); i++)
    {
        cout << " " << result[i];
    }
    cout << (7 & 6) << endl;
    
}

