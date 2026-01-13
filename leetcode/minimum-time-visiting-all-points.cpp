#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result;
        for (int i = 1; i < points.size(); i++)
        {       
            int x = points[i][0] - points[i-1][0];
            int y = points[i][1] - points[i-1][1];
            x = x > 0 ? x : x * (-1);
            y = y > 0 ? y : y * (-1);
            result += x > y ? x : y;
        }
        // cout << result << endl;
        return result;
    }
};

int main() {
    Solution s;
    vector<vector<int>> vecVec = {{1,1},{3,4},{-1,0}};

    int result = s.minTimeToVisitAllPoints(vecVec);
    cout << result << endl;
}