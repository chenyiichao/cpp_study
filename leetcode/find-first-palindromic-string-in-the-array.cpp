#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for (int i = 0; i < words.size(); i++)
        {
            if(isHuiwen(words[i])) return words[i];
        }
        return "";
    }

    bool isHuiwen(string word) {
        for (int i = 0; i < word.size() / 2; i++)
        {
            if(word[i] != word[word.size() - i - 1]) return false;
        }
        return true;
        
    }
};

/**
 * ["abc","car","ada","racecar","cool"]
 */
int main() {
    Solution s;
    vector<string> words = {"abc","car","ada","racecar","cool"};
    // vector<string> words =  {"po","zsz"};
    string result = s.firstPalindrome(words);
    cout << result << "  " << endl;
}