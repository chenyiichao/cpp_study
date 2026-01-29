#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;


class Solution {
public:
    
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        int n = nums.size();
        vector<pair<int,int>> val;

        for (int i = 0; i < n; i++)
        {
            val.emplace_back(i, nums[i]);
        }

        sort(val.begin(), val.end(),[&](auto x1, auto x2){
            return x1.second > x2.second;
        });

        sort(val.begin() , val.begin() + k);
        
        vector<int> result(k);

        for (int i = 0; i < k; i++)
        {
            result[i] = val[i].second;
            // cout << val[i].second << "  ";
        }
        
        
        return result;
    }

     
};
/**
输入：nums = [2,1,3,3], k = 2
输出：[3,3]

输入：nums = [-1,-2,3,4], k = 3
输出：[-1,3,4]
 */
int main() {
    Solution s;
    // vector<int> input = {2,1,3,3};
    // int k = 2;
    vector<int> input = {-1,-2,3,4};
    int k = 3;
    // vector<int> input = {50,-75};
    // int k = 2;

    s.maxSubsequence(input, k);

}

