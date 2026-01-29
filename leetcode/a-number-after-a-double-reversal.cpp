#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) return true;
        if(num % 10 == 0) return false;
        return true;
    }
};

int main() {
    Solution s;
    bool flag = s.isSameAfterReversals(10);
    bool flag2 = s.isSameAfterReversals(526);
    cout << flag << "  " << flag2 << endl;
}