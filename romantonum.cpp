#include <string>
#include <iostream>
using namespace std;

int main()
{
    int value = 0;
    string s = "MCMXCIV";
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'I')
        {
            value++;
            if (s[i] + 1 == 'V')
            {
                value = value + 3;
                i++;
            }
            if (s[i] + 1 == 'X')
            {
                value = value + 8;
                i++;
            }
        }
        else if (s[i] == 'X')
        {
            value = value + 10;
            if (s[i] + 1 == 'L')
            {
                value = value + 30;
                i++;
            }
            if (s[i] + 1 == 'C')
            {
                value = value + 80;
                i++;
            }
        }
        else if (s[i] == 'V')
        {
            value = value + 5;
        }
        else if (s[i] == 'L')
        {
            value = value + 50;
        }
        else if (s[i] == 'C')
        {
            value = value + 100;
            if (s[i] + 1 == 'D')
            {
                value = value + 300;
                i++;
            }
            if (s[i] + 1 == 'M')
            {
                value = value + 800;
                i++;
            }
        }
        else if (s[i] == 'D')
        {
            value = value + 500;
        }
        else if (s[i] == 'M')
        {
            value = value + 500;
        }
    }
    cout << value;
}
