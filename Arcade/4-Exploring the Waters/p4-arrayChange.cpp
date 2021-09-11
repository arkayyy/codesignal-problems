// You are given an array of integers. On each move you are allowed to increase exactly one of its element by one. 
// Find the minimal number of moves required to obtain a strictly increasing sequence from the input.

// Example

// For inputArray = [1, 1, 1], the output should be
// arrayChange(inputArray) = 3.

#include<bits/stdc++.h>
using namespace std;

int arrayChange(vector<int> inputArray) {
int cnt = 0;
for(int i=1;i<inputArray.size();i++)
{
    if(inputArray[i]>inputArray[i-1])
        continue;
    
    cnt+=(inputArray[i-1] - inputArray[i]+1);
    inputArray[i] = inputArray[i-1]+1;
    
}

return cnt;

}