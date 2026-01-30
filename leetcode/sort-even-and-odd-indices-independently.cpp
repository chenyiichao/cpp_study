#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i+=2)
        {
            for (int j = i; j < nums.size(); j+=2)
            {
                if(nums[i] > nums[j]) {
                    int tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                }
            }
            
        }
        for (int i = 1; i < nums.size(); i+=2)
        {
             for (int j = i; j < nums.size(); j+=2)
            {
                if(nums[i] < nums[j]) {
                    int tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                }
            }
        }
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     cout << nums[i] << " ";
        // }
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> output = {2,1};
    s.sortEvenOdd(output);
}