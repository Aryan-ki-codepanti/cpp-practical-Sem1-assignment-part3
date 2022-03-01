#include <iostream>
using namespace std;

int main(int argCount, char **args)
{
    if (argCount <= 1)
    {
        cout << "No command line arguments entered" << endl;
        exit(1);
    }
    string sentence = args[1];

    // A - Z : 65 to 90
    // a - z : 97 to 122
    int charCount[123];

    for (int i = 0; i < 123; i++)
        charCount[i] = 0;

    for (int i = 0; i < sentence.size(); i++)
        charCount[sentence[i]]++;

    // Printing table
    cout << "Alphabet : Count" << endl;

    for (int i = 0; i < 123; i++)
    {
        if (charCount[i])
        {
            char c = i;
            cout << c << " : " << charCount[i] << endl;
        }
    }

    return 0;
}