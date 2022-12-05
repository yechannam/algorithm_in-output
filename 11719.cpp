#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int i = 0;

    while (i++ < 100)
    {
        getline(cin, str);
        cout << str << endl;
    }
    return (0);
}