#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        
        

        vector<int> rods(10);

        for (int i = 0; i < rings.size(); i+=2)
        {
            char color = rings[i];
            int where = rings[i+1] - '0';
            if(color == 'R') {
                rods[where] |= 1;
            } else if(color == 'B'){
                rods[where] |= 2;
            } else {
                rods[where] |= 4;
            }
        }
        int count = 0;
        
        for (int i = 0; i < rods.size(); i++)
        {
            if(rods[i] == 7) count ++;
        }
        
        cout << count << endl;
        return count;
        
    }
};

int main() {
    Solution s;
    s.countPoints("B0R0G0R9R0B0G0");
}