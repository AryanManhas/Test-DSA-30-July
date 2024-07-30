/*Problem statement
You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.

For example:

 If the given string is: STR = "abcde". You have to print the string "edcba".
follow up:
Try to solve the problem in O(1) space complexity. */

#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}
