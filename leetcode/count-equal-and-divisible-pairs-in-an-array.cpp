#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;


class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j] && i * j % k == 0) {
                    result ++;
                }
            }
            
        }
        return result;
        
    }
};

/**
 * 给你一个下标从 0 开始长度为 n 的整数数组 nums 和一个整数 k ，
 * 请你返回满足 0 <= i < j < n ，nums[i] == nums[j] 且 (i * j) 能被 k 整除的数对 (i, j) 的 数目 。
 * 输入：nums = [3,1,2,2,2,1,3], k = 2
输出：4
解释：
总共有 4 对数符合所有要求：
- nums[0] == nums[6] 且 0 * 6 == 0 ，能被 2 整除。
- nums[2] == nums[3] 且 2 * 3 == 6 ，能被 2 整除。
- nums[2] == nums[4] 且 2 * 4 == 8 ，能被 2 整除。
- nums[3] == nums[4] 且 3 * 4 == 12 ，能被 2 整除。
 */


int main() {
    Solution s;
    vector<int> input = {1,2,3,4};
    int k = 2;
    int output = s.countPairs(input ,2);
    cout << output << endl;
}