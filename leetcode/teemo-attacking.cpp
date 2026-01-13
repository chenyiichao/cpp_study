#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

/**
 *  [1,4], duation = 2
 */


class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = duration;

        for (int i = 1; i < timeSeries.size(); i++)
        {
            sum += duration;
            int prev = timeSeries[i-1];
            int cur = timeSeries[i];
            if(cur - prev < duration){
                sum -= duration - (cur - prev);
            }
        }
        cout << sum << endl;
        return sum;
    }
};

int main() {
    Solution s;
    vector<int> vec = {1, 4};
    s.findPoisonedDuration(vec, 2);
}






