#include <iostream>
using namespace std;

int main()
{
    int n, k = 0;
    cout << "Enter a no.: ";
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        cout << "*";
        for (int j = 0; j < (2 * n) - 3 - (2 * i); j++)
            cout << " ";
        cout << "*";
        cout << endl;
    }
    printf("%*c", n, " ");
    cout << "*";
    cout << endl;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
            cout << " ";
        cout << "*";
        for (int j = 0; j < n - i + k; j++)
            cout << " ";
        k++;
        cout << "*";
        cout << endl;
    }
}