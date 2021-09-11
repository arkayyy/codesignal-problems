// Given an array a that contains only numbers in the range from 1 to a.length, find the first duplicate number
// for which the second occurrence has the minimal index. In other words, if there are more than 1 duplicated numbers,
//  return the number for which the second occurrence has a smaller index than the second occurrence of the other number does.
//  If there are no such elements, return -1.

// Example

//     For a = [2, 1, 3, 5, 3, 2], the output should be firstDuplicate(a) = 3.

//     There are 2 duplicates: numbers 2 and 3. The second occurrence of 3 has a smaller index than the second occurrence of 2 does, so the answer is 3.

#include <bits/stdc++.h>
using namespace std;

int firstDuplicate(vector<int> a)
{

    //BRUTE-FORCE:-
    // unordered_set<int> s;
    // for(auto i:a)
    // {
    //     if(s.find(i)!=s.end())
    //         return i;
    //      s.insert(i);
    // }

    // return -1;

    //OPTIMAL:-
    for (int i = 0; i < a.size(); i++)
    {
        int t = abs(a[i]);
        if (a[t - 1] < 0)
            return t;
        a[t - 1] = -a[t - 1];
    }

    return -1;
}