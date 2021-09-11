// Given a rectangular matrix of characters, add a border of asterisks(*) to it.

// Example

// For

// picture = ["abc",
//            "ded"]

// the output should be

// addBorder(picture) = ["*****",
//                       "*abc*",
//                       "*ded*",
//                       "*****"]

#include <bits/stdc++.h>
using namespace std;

vector<string> addBorder(vector<string> picture)
{
    vector<string> ans;

    string str = "**";
    for (int i = 0; i < picture[0].length(); i++)
        str += "*";

    ans.push_back(str);
    for (int i = 0; i < picture.size(); i++)
    {
        ans.push_back("*" + picture[i] + "*");
    }

    ans.push_back(str);

    return ans;
}