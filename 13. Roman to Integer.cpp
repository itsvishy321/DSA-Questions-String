// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.


class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for(int i=0 ; i<n;i++)
        {
            switch (s[i])
            {
                case('I'):
                    if(s[i+1] == 'V')
                    {
                        ans += 4;
                        i++;
                        break;
                    }
                    else if(s[i+1] == 'X')
                    {
                        ans += 9;
                        i++;
                        break;
                    }
                    else
                    {
                        ans += 1;
                        break;
                    }
                    
                case('V'):
                    ans += 5;
                    break;
                case('X'):
                    if(s[i+1] == 'L')
                    {
                        ans += 40;
                        i++;
                        break;
                    }
                    else if(s[i+1] == 'C')
                    {
                        ans += 90;
                        i++;
                        break;
                    }
                    else
                    {
                        ans += 10;
                        break;
                    }
                case('L'):
                    ans += 50;
                    break;
                case('C'):
                    if(s[i+1] == 'D')
                    {
                        ans += 400;
                        i++;
                        break;
                    }
                    else if(s[i+1] == 'M')
                    {
                        ans += 900;
                        i++;
                        break;                        
                    }
                    else
                    {
                        ans += 100;
                        break;
                    }
                case('D'):
                    ans += 500;
                    break;
                case('M'):
                    ans += 1000;    
                    break;
            }
        }
        return ans;
    }
};
