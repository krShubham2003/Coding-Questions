// Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
// basically ye question bol raha hai ki 

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"]
          //patterns= "abb"

//Output: ["mee","aqq"]

//matalab bol raha hai ki jo bhi words patterns follow kar rha usko ans string me return krna hai 
// indirectly isIsomorphic ka logic lga ke check krna ha har word ko aur check krna hai ki 
// ki wo pattern follow krta hai ki nhi jaise hum IsIsomorphice me check krte hai wo hi krna 



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

// main function hai ye 
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = words.size();
        vector<string> ans;
        
        // Iterate over each word in the list
        for (int i = 0; i < n; i++) {
            string word = words[i];
            // Check if the word matches the pattern
            if (isIsomorphic(word, pattern)) {
                ans.push_back(word);
            }
        }
        
        return ans;
    }

    // isomorphice check ke liye function hai ye jo ki main function me pass hoga 
    bool isIsomorphic(string words, string pattern) {
     int n=words.length();
     int m=pattern.length();
     unordered_map<char,char>mp;
     set<char>st;
     if(n!=m) return false;
     for(int i=0;i<n;i++)
     {
        char chs=words[i];
        char cht=pattern[i];

        if(mp.find(chs)==mp.end() && st.find(cht)==st.end())
        {
            st.insert(cht);
            mp[chs]=cht;
        }
      else if (mp[chs] != cht)
        {
            return false;
        }
     }
     return true;
    }
};