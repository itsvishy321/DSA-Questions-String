// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
  
// Example 1:

// Input: columnNumber = 1
// Output: "A"

  
// Example 2:

// Input: columnNumber = 28
// Output: "AB"


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        char temp;
        while(columnNumber)
        {
            columnNumber--;
            temp = ('A' + columnNumber%26);
            s = s + temp;
            columnNumber = columnNumber/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
