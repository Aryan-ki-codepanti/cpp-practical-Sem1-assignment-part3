#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int n = s.size();
    for (int i = 0; i < n/2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s))
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a palindrome" << endl;
    return 0;
}