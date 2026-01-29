#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 1;

        for (int i = 0; i < sentences.size(); i++)
        {
            string sentence = sentences[i];
            int count = 1;
            for (int i = 0; i < sentence.size(); i++)
            {
                char ch = sentence[i];
                if(ch == ' '){
                    count ++;
                }
            }
            if(max < count ){
                max = count;
            }
        }
        return max;
    }
};

/**
 * sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
 */

int main() {
    Solution s;
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int max = s.mostWordsFound(sentences);
    cout << max << endl;

}