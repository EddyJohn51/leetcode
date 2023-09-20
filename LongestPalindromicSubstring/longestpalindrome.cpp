#include <iostream>
using namespace std;

//helper function to reverse string

string reverse(string s)
{
    string rv = "";

    for(int i = s.length() - 1; i >= 0; --i)
    {
        rv += s[i];
    }

    return rv;
}

class Solution {
public:
    string longestPalindrome(string s) {

        //attempt 1 (INEFFICIENT):
        // starting with substrings of size s.length(), check each substring of each length
        // if palindrome, return, else keep looking.

        int currentSize = s.length();

        //while we are still looking at valid substrings (length > 1)
        while(currentSize > 1)
        {
            //using substr function, we can give a starting index, and a size to generate substrings
            for(int i = 0; i < s.length(); ++i)
            {
                //if call to substr would put us out of bounds, break out of loop (no further substrings)
                if(i + currentSize > s.length())
                {
                    break;
                }

                // grab the substring and the reversed substring
                string sub = s.substr(i, currentSize);
                string sub_reverse = reverse(sub);

                // if the substring is a palindrome, return it.
                if(sub == sub_reverse)
                {
                    return sub;
                }
            }

            // decrement current size after all substrings are exhausted
            currentSize -= 1;
        }

        // if the length of the substring is one, just return the first character (as a string)
        return s.substr(0,1);


    }
};