#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result;
        for (int i = 0; i < s.size(); i+=k)
        {
            result.push_back(s.substr(i, k));
        }
        
        for (int i = result[result.size()-1].size(); i < k; i++)
        {
            result[result.size()-1] += fill;
        }
        
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " " ;
        }
        return result;
    }
};

/**
输入：s = "abcdefghij", k = 3, fill = 'x'
输出：["abc","def","ghi","jxx"]
解释：
与前一个例子类似，形成前三组 "abc"、"def" 和 "ghi" 。
对于最后一组，字符串中仅剩下字符 'j' 可以用。为了补全这一组，使用填充字符 'x' 两次。
因此，形成 4 组，分别是 "abc"、"def"、"ghi" 和 "jxx" 。
 */
int main() {
    Solution s;
    s.divideString("abcdefghij", 3, 'x');

}