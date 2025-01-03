// we have to merge two string s1 and s2 so that the resultant string should be in lexograpgically largest

//Input: word1 = "cabaa", word2 = "bcaaa"
//Output: "cbcabaaaaa"

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestMerge(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int i = 0;
        int j = 0;
        string ans = "";

        while (i < n && j < m) {
          
            if (word1[i] > word2[j]) {
                ans.push_back(word1[i]);
                i++;
            } else if (word1[i] < word2[j]) {
                ans.push_back(word2[j]);
                j++;
            } else {
                // When characters are equal,
                // compare the substrings starting from i and j
                if (word1.substr(i) > word2.substr(j)) {
                    ans.push_back(word1[i]);
                    i++;
                } else {
                    ans.push_back(word2[j]);
                    j++;
                }
            }
        }

        // Append remaining characters from word1 or word2
        if (i < n) {  // when word2 is fully traversed and wrod1 has some char left then 
            ans += word1.substr(i);
        } else {
            ans += word2.substr(j);
        }

        return ans;
    }
};
