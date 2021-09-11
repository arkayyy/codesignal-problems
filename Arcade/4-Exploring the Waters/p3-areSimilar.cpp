/* Two arrays are called similar if one can be obtained from another by swapping at most one pair of elements in one of the arrays.

Given two arrays a and b, check whether they are similar.

Example

    For a = [1, 2, 3] and b = [1, 2, 3], the output should be
    areSimilar(a, b) = true.

    The arrays are equal, no need to swap any elements. */

#include <bits/stdc++.h>
using namespace std;

bool areSimilar(vector<int> a, vector<int> b)
{

    int diffA = -1, diffB = -1;

    if (a.size() != b.size())
        return false;

    int cntDifferent = 0; //couting number of different elements occuring at same index nos., only 1 pair of such different elements at the same index no. can be swapped

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            if (cntDifferent >= 2) //if number of different elements is greater than 2 (a pair), it is impossible to swap and get the other array
                return false;
            if (a[i] == diffA && b[i] == diffB) //if the different elements previously marked are found in the respective arrays, we know that we can swap this pair and get the other array
            {
                diffA = -2;
                diffB = -2;
            }
            else
            {
                diffA = b[i];
                diffB = a[i];
            }               //marking the different elements found
            cntDifferent++; //couting the number of different elements found at the same index number
        }
    }
    if ((diffA == -2 && diffB == -2) || (diffA == -1 && diffB == -1))
        return true;

    return false;
}
