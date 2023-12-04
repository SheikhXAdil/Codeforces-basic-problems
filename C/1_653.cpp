#include <iostream>
#include <iomanip>
using namespace std;

void correctBrackets(string s)
{
    int n = s.length();
    int i, j, c = 0, c_b = c;
    string temp = "";

    for (i = 0; i < n; i++)
    {
        j = i + 1;

        temp += s[i];

        while (s[i] == s[j])
        {
            temp += s[j];
            c++;
            j++;
        }

        if (c == c_b)
        {
            cout << temp << "\n";
            temp = "";
        }

        i += c;
        c_b = c;
        c = 0;
    }
}

int main()
{
    int n, len;
    string s;
    int i;
    int count = 0;

    //

    // correctBrackets("((()))");
    // correctBrackets("()(())");
    correctBrackets(")))()()(((()((()))()()(())()");

    return 0;
}