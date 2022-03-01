#include <iostream>
using namespace std;

void swapNums(int *a , int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a , b;
    cin >> a >> b;
    cout << "Initially" << endl;
    cout << "a : " << a << " , b : " << b << endl;
    swapNums(&a , &b);
    cout << "After Swap" << endl;
    cout << "a : " << a << " , b : " << b << endl;
    return 0;
}