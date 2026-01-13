#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const auto& L, const auto& R){return L[1] > R[1];});
        int sum = 0;
        
        int idx = 0;
        while(truckSize > 0 && idx < boxTypes.size()) {
            
            if(truckSize > boxTypes[idx][0]) {
                sum += boxTypes[idx][0] * boxTypes[idx][1];
                truckSize -= boxTypes[idx][0];
            } else {
                sum += truckSize * boxTypes[idx][1];
                truckSize = 0;
            }
            idx++;
        }

        return sum;
    }
};

int main(){
    Solution s;
    // vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};
    vector<vector<int>> boxTypes = {{1,3},{5,5},{2,5},{4,2},{4,1},{3,1},{2,2},{1,3},{2,5},{3,2}};
    
    int output = s.maximumUnits(boxTypes , 4);
    cout << output << endl;
}