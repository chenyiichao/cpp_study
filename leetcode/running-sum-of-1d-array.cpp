#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec(nums.size());
        vec[0] = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            vec[i] = vec[i - 1] + nums[i];
        }
        return vec;
    }

     
};

int main() {
    Solution s;
    vector<int> input = {3,1,2,10,1};
    s.runningSum(input);
}