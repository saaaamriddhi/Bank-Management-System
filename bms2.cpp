#include <conio.h>
#include "iostream"
#include <bits/stdc++.h>

using namespace std;

string replace(string s, char c1, char c2)
{
    int l = s.length();
 
    // loop to traverse in the string
    for (int i = 0; i < l; i++)
    {
        // check for c1 and replace
        if (s[i] == c1)
            s[i] = c2;
 
        // check for c2 and replace
        else if (s[i] == c2)
            s[i] = c1;
    }
    return s;
}

int main()
{
    //char s[10] = { 0 };
    //for (int i=0;i<10;i++) { s[i] = _getch(); _putch('*');
    //    if (s[i] == 13) break;
    //};
    
    //getchar();
    char c; cout<<"enter ";cin>>c;replace(c, "1234", "****");
    return 0;
}
