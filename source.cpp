#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("input.txt");
ofstream g("output.txt");
int i, x, p;
char v[1001];
int main()
{
    cout<<"Enter 1 for crypt and 2 for decrypt: ";
    cin >> p;
    if (p==1) {

        f.get(v,1001);
        cout<<endl<<"Enter a number (passkey) [1-20]: ";
        cin>>x;
        for (i=0; i<strlen(v); i++)
                v[i]=v[i]-x;
        g<<v;
        cout<<endl<<"You can find the result in 'output.txt' file";
    }
    else if (p==2) {

        f.get(v,1001);
        cout<<endl<<"Enter the passkey: ";
        cin>>x;
        for (i=0; i<strlen(v); i++)
                v[i]=v[i]+x;
        g<<v;
        cout<<endl<<"You can find the result in 'output.txt' file";
    }
    return 0;
}
