// Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

// Example

// For inputArray = [2, 4, 1, 0], the output should be
// arrayMaximalAdjacentDifference(inputArray) = 3.

#include <bits/stdc++.h>
using namespace std;

int arrayMaximalAdjacentDifference(vector<int> inputArray)
{
    int maxi = INT_MIN;
    for (int i = 0; i < inputArray.size() - 1; i++)
    {
        maxi = max(maxi, abs(inputArray[i] - inputArray[i + 1]));
    }
    return maxi;
}
