/*
Given a palindromic string of lowercase English letters palindrome, replace exactly one character with any lowercase 
English letter so that the resulting string is not a palindrome and that it is the lexicographically smallest one possible.

Return the resulting string. If there is no way to replace a character to make it not a palindrome, return an empty string.

A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, 
a has a character strictly smaller than the corresponding character in b. For example, 
"abcc" is lexicographically smaller than "abcd" because the first position they differ is at the fourth character, and 'c' is smaller than 'd'.

 

Example 1:

Input: palindrome = "abccba"
Output: "aaccba"
Explanation: There are many ways to make "abccba" not a palindrome, such as "zbccba", "aaccba", and "abacba".
Of all the ways, "aaccba" is the lexicographically smallest.
*/


class Solution {
public:
    
    bool check_palindrome(string s)
    {
        string temp = s;
        reverse(temp.begin(),temp.end());
        if (s == temp)
            return true;
        
        return false;
    }
    string breakPalindrome(string palindrome) {
        string temp = palindrome;
        int l = palindrome.length();
        
        //Checking for base condition
        if(l==1)
        {
            return "";
        }

        // Replacing the first non 'a' character with 'a'
        for(int i=0 ; i<l ; i++)
        {
            if(temp[i] != 'a')
            {
                temp[i] = 'a';
                break;
            }
        }
        
        
        //If the string only contains 'a' then repalcing last character with 'b'
        if(check_palindrome(temp))
        {
            palindrome[l-1] = 'b';
            return palindrome;
        }
        return temp;
    }
};
