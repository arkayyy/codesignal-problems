// Write a function that reverses characters in (possibly nested) parentheses in the input string.

// Input strings will always be well-formed with matching ()s.

// Example

//     For inputString = "(bar)", the output should be
//     reverseInParentheses(inputString) = "rab";
//     For inputString = "foo(bar)baz", the output should be
//     reverseInParentheses(inputString) = "foorabbaz";
//     For inputString = "foo(bar)baz(blim)", the output should be
//     reverseInParentheses(inputString) = "foorabbazmilb";
//     For inputString = "foo(bar(baz))blim", the output should be
//     reverseInParentheses(inputString) = "foobazrabblim".

#include<bits/stdc++.h>
using namespace std;

string reverseInParentheses(string inputString) {
    stack<int>s;
    string str = inputString;
    for(int i = 0;i<str.length();i++)
    {
        if(str[i]=='(')
            s.push(i);
        
        else if(str[i]==')')
        {
            reverse(str.begin()+s.top()+1,str.begin()+i);
            s.pop();
        }
    }
    string ans="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='(' && str[i]!=')')
            ans+=str[i];
    }
    
    return ans;
}
