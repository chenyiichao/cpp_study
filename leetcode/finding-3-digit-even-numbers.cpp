#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> result;
        int arr[10]{};
        for(int a: digits){
            arr[a] ++;
        }

        for (int i = 100; i < 1000; i+=2)
        {
            bool flag = true;
            int c[10]{};
            int num = i;
            while(num > 0) {
                int a = num % 10;
                num = num / 10;
                c[a] ++; 
                if(c[a] > arr[a]) {
                    flag = false;
                    break;
                } 
            }
            if(flag) 
            {
                result.push_back(i);
            }
            
        }
        

        return result;
    }
};

/**
输入：digits = [2,1,3,0]
输出：[102,120,130,132,210,230,302,310,312,320]

输入：digits = [2,2,8,8,2]
输出：[222,228,282,288,822,828,882]
 */
int main() {
    Solution s;
    // // vector<int> input = {2 ,1 ,3 ,0};
    vector<int> input = {2,2,8,8,2};
    vector<int> result = s.findEvenNumbers(input);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "  ";
    }
    
}