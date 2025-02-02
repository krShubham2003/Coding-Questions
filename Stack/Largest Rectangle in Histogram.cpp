// Given an array of integers heights representing the histogram's bar height 
// where the width of each bar is 1, 
// return the area of the largest rectangle in the histogram.

// Input: heights = [2,1,5,6,2,3]
// Output: 10

// Input: heights = [2,4]
// Output: 4

// ***** APPROACH (USING STACK)

// step 1.. hum PREVIOUS SMALLER ELEMENT wala concept use krenge bas difference ye hai ki 
//   uss me hum element consider krte the yaha element nhi uska index consider krenge rest all same.

// step 2.. fir hum stack ko pop krke empty kr denge.

// step 3.. the hum NEXT SMALLER ELEMENT wala concept use krenge bas difference ye hai ki 
//   uss me hum element consider krte the yaha element nhi uska index consider krenge rest all same.

// step 4.. fir area calculate krenge 

#include<bits/stdc++.h>
 using namespace std; 
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int left[n];
        int right[n];
        // step 1 previous smaller element (index)
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }

            if(st.empty())
            {
                left[i]=0;
            }
            else{
                left[i]=st.top()+1;
            }
            st.push(i);
        }
       // after finding the left index array stack needs to clear so that right will be calculated thats why we pop the satck element till empty 
        while(!st.empty())
        {
            st.pop();
        }

        // step 3.. next smaller element (index)
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }

            if(st.empty())
            {
                right[i]=n-1;
            }
            else{
                right[i]=st.top()-1;
            }
            st.push(i);
        }
        // step 4.. calculate area
        int maxA=0;
        for(int i=0;i<n;i++)
        {
            maxA=max(maxA,heights[i]*(right[i]-left[i]+1));
        }
        return maxA;
    }
};