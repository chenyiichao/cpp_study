#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end());
        cout << 1 << endl;
        
        int max = 0;
        for (int i = 1; i < points.size(); i++)
        {
            int diff = points[i][0] - points[i-1][0];
            max = diff > max ?  diff : max;
        }
        
        return max;
    }

     
};

int main() {
    Solution s;
    vector<vector<int>> input = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    int output = s.maxWidthOfVerticalArea(input);
    cout << output << endl;
}