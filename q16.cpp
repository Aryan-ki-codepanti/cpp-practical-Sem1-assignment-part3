#include <iostream>
#include <cstring>
using namespace std;

void showAddress(string s)
{
    void *p;
    for (int i = 0; i < s.size(); i++)
    {
        p = &s[i];
        cout << s[i] << " : " << p << endl;
    }
}

string concatStr(string s1, string s2)
{
    return s1 + s2;
}

int lengthOfStr(string s)
{
    int length = 0;
    char *p = &s[0];
    while (*p != '\0')
    {
        length++;
        p++;
    }
    return length;
}

void toUpperCase(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
}

void toLowerCase(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

void countVowels(string s)
{
    int count[] = {0, 0, 0, 0, 0};

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'a':
            count[0]++;
            break;
        case 'A':
            count[0]++;
            break;
        case 'e':
            count[1]++;
            break;
        case 'E':
            count[1]++;
            break;
        case 'i':
            count[2]++;
            break;
        case 'I':
            count[2]++;
            break;
        case 'o':
            count[3]++;
            break;
        case 'O':
            count[3]++;
            break;
        case 'u':
            count[4]++;
            break;
        case 'U':
            count[4]++;
            break;
        default:
            break;
        }
    }

    cout << "Vowel occurences in " << s << endl;
    cout << "a : " << count[0] << endl;
    cout << "e : " << count[1] << endl;
    cout << "i : " << count[2] << endl;
    cout << "o : " << count[3] << endl;
    cout << "u : " << count[4] << endl;
}

void reverseString(string &s)
{
    int n = s.size();
    char tmp;
    for (int i = 0; i < n / 2; i++)
    {
        tmp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = tmp;
    }
}

int main()
{
    // string s1 = "Hello";
    // string s2 = " World";
    // char s3[s1.size()+1];
    // for (int i = 0; i < s1.size(); i++)
    //     s3[i] = s1[i];
    // s3[s1.size()] = '\0';
    // char s3[200] = "Aryan";
    // char s4[200] = "Aryan";
    // cout << concatStr2(s3 , s4);
    // cout << strcmp(s3 , s4);
    // cout << lengthOfStr(s1) << endl;
    // cout << lengthOfStr(s3) << endl;
    // toUpperCase(s1);
    // reverseString(s1);
    // cout << s1;
    // countVowels(s3);

    int choice;
    string s1, s2;
    char s3[200], s4[200];
    int cmp;
    while (true)
    {
        cout << "-----------MENU-----------" << endl;
        cout << "1.Show address of each character in string" << endl;
        cout << "2.Concatenate two strings (w/o strcat)" << endl;
        cout << "3.Concatenate two strings (w/ strcat)" << endl;
        cout << "4.Compare two strings" << endl;
        cout << "5.Length of string" << endl;
        cout << "6.Convert all lowercase characters to uppercase" << endl;
        cout << "7.Convert all uppercase characters to lowercase" << endl;
        cout << "8.Number of vowels" << endl;
        cout << "9.Reverse a string" << endl;
        cout << "10.EXIT" << endl;

        cin >> choice;

        if (choice == 10)
        {
            cout << "Exiting program" << endl;
            break;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter a string: ";
            cin >> s1;
            cout << "Your string: " << s1 << endl;
            showAddress(s1);
            break;
        case 2:
            cout << "Enter two strings: ";
            cin >> s1 >> s2;
            cout << "String 1 : " << s1 << endl;
            cout << "String 2 : " << s2 << endl;
            cout << "Concatenated String : " << concatStr(s1, s2) << endl;
            break;
        case 3:
            cout << "Enter two strings: ";
            cin >> s3 >> s4;
            cout << "String 1 : " << s3 << endl;
            cout << "String 2 : " << s4 << endl;
            cout << "Concatenated String : " << strcat(s3, s4) << endl;
            break;
        case 4:
            cout << "Enter two strings: ";
            cin >> s3 >> s4;
            cout << "String 1 : " << s3 << endl;
            cout << "String 2 : " << s4 << endl;
            cmp = strcmp(s3, s4);
            if (!cmp)
                cout << "The two strings are equal" << endl;
            else if (cmp > 0)
                cout << s3 << " is lexographically greater than " << s4 << endl;
            else
                cout << s4 << " is lexographically greater than " << s3 << endl;
            break;
        case 5:
            cout << "Enter a string: ";
            cin >> s1;
            cout << "Length of " << s1 << " : " << lengthOfStr(s1) << endl;
            break;
        case 6:
            cout << "Enter a string: ";
            cin >> s1;
            cout << "Orignal string: " << s1 << endl;
            toUpperCase(s1);
            cout << "Uppercase string: " << s1 << endl;
            break;
        case 7:
            cout << "Enter a string: ";
            cin >> s1;
            cout << "Orignal string: " << s1 << endl;
            toLowerCase(s1);
            cout << "Lowercase string: " << s1 << endl;
            break;
        case 8:
            cout << "Enter a string: ";
            cin >> s1;
            countVowels(s1);
            break;
        case 9:
            cout << "Enter a string: ";
            cin >> s1;
            cout << "Orignal string: " << s1 << endl;
            reverseString(s1);
            cout << "Reversed string: " << s1 << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}