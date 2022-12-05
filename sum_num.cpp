#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    char c;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        sum += c - 48;
    }
    cout << sum << endl;
    return (0);
}