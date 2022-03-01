#include <iostream>
using namespace std;

void alter(int *a, int *b)
{
    int tmp = *b;
    *b = *a + *b;
    *a = tmp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "a : " << a << " , b : " << b << endl;
    alter(&a, &b);
    cout << "a : " << a << " , b : " << b << endl;
    return 0;
}