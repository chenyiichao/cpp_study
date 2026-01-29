#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        int a_idx = -1;
        int b_idx = -1;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if(ch == 'a') {
                a_idx = i;
            }
            if(ch == 'b') {
                b_idx = i;
            }
            if(a_idx != -1 && b_idx !=-1 && a_idx > b_idx) return false;
        }
        
        return a_idx == -1 ||b_idx == -1 || a_idx <= b_idx;
    }
};

int main() {
    Solution s;
    // string str = "aaabbb";
    // string str = "abab";
    string str = "bbb";

    bool a = s.checkString(str);
    cout << a << endl;
}