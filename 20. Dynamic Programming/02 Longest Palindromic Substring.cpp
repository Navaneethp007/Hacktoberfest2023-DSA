/*
Given a string s, return the longest palindromic substring in s.

Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb"
*/
class Solution {
public:
    string longestPalindrome(string s) {
        string a="";
        int c=0,l=0,r=0;
        for(int i=0;i<s.length();i++)
        {
          l=i;
          r=i;
          while(l>=0 && r<s.length() && s[l]==s[r])
          {
            if(r-l+1 > c)
            {
              c=r-l+1;
              a=s.substr(l,c);
            }
            l--;
            r++;
          }
          l=i;
          r=i+1;
          while(l>=0 && r<s.length() && s[l]==s[r])
          {
            if(r-l+1 > c)
            {
              c=r-l+1;
              a=s.substr(l,c);
            }
            l--;
            r++;
          }
        }
        return a;
    }
};
