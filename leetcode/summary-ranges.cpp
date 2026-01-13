#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
示例 1：

输入：nums = [0,1,2,4,5,7]
输出：["0->2","4->5","7"]
解释：区间范围是：
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
示例 2：

输入：nums = [0,2,3,4,6,8,9]
输出：["0","2->4","6","8->9"]
解释：区间范围是：
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"
 */

class Solution {
public:
    Solution(){}
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vs;
        int start;
        int end;
        if(nums.size() == 1) {
            vs.push_back(std::to_string(nums.at(0)));
            return vs;
        }
        for(int i = 0;i < nums.size() ; i++ ) {
            if(i == 0) 
            {
                start = nums.at(i);
                end = nums.at(i);
            } 
            else 
            {
                if(nums.at(i - 1) + 1 != nums.at(i) )
                {
                    if(start == end)
                    {
                        vs.push_back(std::to_string(start));
                    }
                    else 
                    {
                        vs.push_back(std::to_string(start) + "->" + std::to_string(end));
                    }
                    start = nums.at(i);
                    if(i == nums.size() - 1)
                    {
                        vs.push_back(std::to_string(nums.at(i)));
                    }
                } else {
                    if(i == nums.size() - 1) 
                    {
                        vs.push_back(std::to_string(start) + "->" + std::to_string(nums[i]));
                    }
                }
                end = nums.at(i);
            }
            
        }
        return vs;
    }
};

int main() 
{
    Solution s;
    // vector<int> nums = {0,1,2,4,5,7};
    // vector<int> nums = {0,2,3,4,6,8,9};
    vector nums = {-1};
    
    vector<string> vs = s.summaryRanges(nums);
    
    for(int i = 0; i < vs.size(); i++ ){
        cout << i << ":" << vs[i] << "  ";
    }
    
    return 0;
}