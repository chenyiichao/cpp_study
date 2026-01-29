#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        
        int j = 0;
        
        for (int i = 0; i < title.size(); i++)
        {
            char ch = title[i];

            if(ch <= 'Z' && ch != ' ') {
                title[i] += 32;
            }
            if(ch == ' ' || i == title.size() - 1) {
                if(j > 2 || (i == title.size() - 1 && j >= 2)) {
                    if(title[i - j] >= 'a'){
                        title[i - j] -= 32;
                    }
                }
                j = 0;
            } else {
                j++;
            }
        }
        
        
        return title;
    }
};

/**
 * 输入：title = "capiTalIze tHe titLe"
 * 输出："Capitalize The Title"
 * 输入：title = "First leTTeR of EACH Word"
 * 输出："First Letter of Each Word"
 * 输入：title = "i lOve leetcode"
 * 输出："i Love Leetcode"
 */
int main() {
    Solution s;
    // string title = "capiTalIze tHe titLe";
    // string title = "First leTTeR of EACH Word";
    // string title = "i lOve leetcode";
    string title = "ZW Cl pyR uoC";
    // exception: "zw cl Pyr Uoc"
    
    
    title = s.capitalizeTitle(title);
    cout << title << endl;

    // int a = 'a' - 'A';

    // cout << a << endl;
    // cout << (int)'a' << ' ' << (int)'A' << endl;
    // cout << (int)'z' << ' ' << (int)'Z' << endl;
}