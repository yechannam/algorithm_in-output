#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int i = 0, j = 0;

    while (str[i])
    {
        cout << str[i++];
        if (j++ == 9)
        {
            j = 0;
            cout << endl;
        }
    }
    return (0);
}