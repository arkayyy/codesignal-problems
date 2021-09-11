// Several people are standing in a row and need to be divided into two teams. The first person goes into team 1,
// the second goes into team 2, the third goes into team 1 again, the fourth into team 2, and so on.

// You are given an array of positive integers - the weights of the people.
// Return an array of two integers, where the first element is the total weight of team 1,
// and the second element is the total weight of team 2 after the division is complete.

// Example

// For a = [50, 60, 60, 45, 70], the output should be
// alternatingSums(a) = [180, 105].

#include <bits/stdc++.h>
using namespace std;

vector<int> alternatingSums(vector<int> a)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < a.size(); i += 2)
    {
        sum1 += a[i];
        sum2 += (i + 1 < a.size() ? a[i + 1] : 0);
    }

    return {sum1, sum2};
}