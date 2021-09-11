// Given a string, find out if its characters can be rearranged to form a palindrome.

// Example

// For inputString = "aabb", the output should be
// palindromeRearranging(inputString) = true.

// We can rearrange "aabb" to make "abba", which is a palindrome.

#include <bits/stdc++.h>
using namespace std;

bool palindromeRearranging(string inputString)
{
    vector<int> alpha(26, 0);
    for (auto i : inputString)
        alpha[i - 'a']++; //counting frequencies of all alphabets in the string. For palindrome, all alphabets except anyone necessarily need to have even number frequency

    int cntOddLetterFreq = 0;
    for (auto i : alpha)
    {
        if ((i & 1) == 1) //if odd frequency is found
        {
            if (cntOddLetterFreq)
                return false; //if no. of odd frequencies found is more than one, it can't be rearranged to a palindrome ever

            cntOddLetterFreq++;
        }
    }
    return true;
}