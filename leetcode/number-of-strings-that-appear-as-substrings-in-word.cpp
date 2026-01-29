#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int result = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if(word.find(patterns[i]) != -1) result ++;
        }
        return result;        
    }
};


int main() {
    Solution s;
    vector<string> vs = {"a","abc","bc","d"};
    string word = "abc";
    int output = s.numOfStrings(vs, word);
    cout << output << endl;
}