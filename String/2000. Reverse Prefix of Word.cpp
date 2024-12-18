//---->> Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.

// For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends at 3 (inclusive). The resulting string will be "dcbaefd".
// Return the resulting string.

// Input: word = "abcdefd", ch = "d"
// Output: "dcbaefd"
// Explanation: The first occurrence of "d" is at index 3. 
// Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".



/// approach ye hai ki two pointer use kie hai aur check kie hai ki ch find hua hia ki nhi
// agr hua to idex 0 se leke use index tak jaha ch find hua hai waha tak reverse kr denge 
// break isliye use ki humko sirf first occurence check krna tha isliye agr bad me milta hai to loi fadak nhi padta 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
      
        for(int j=0;j<word.length();j++)
        {
            if(word[j]==ch)
            {
                reverse(word.begin(),word.begin()+j+1);
                break;// break isliye kie kyuki humko sirf first occurence of ch tak hi revesre krna hai rest nhi krna 
            }
        }
        return word;
    }
};