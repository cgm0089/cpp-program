#include <iostream>
using namespace std;
int main()
{   int odd;
    int d;
    int n;
    int i;
    cout << "Enter an integer (n) : ";
    cin >> n;
    int a;
    cout << "ALL   :   ";
    for (a = 1; a <= n; a++)
    {
        cout << " " << a;
    }
    cout << endl;
    cout << "EVEN   :   ";
    for (i = 2; i <= n; i += 2)
    {
        cout << " " << i;
    }
    cout << endl;
    cout << "ODD   :   ";
    for (odd = 1; odd <= n; odd++)
    {
        if (odd % 2 != 0)
        {
            cout << " " << odd;
        }
    }
    cout << endl;
    cout<<"DIV.4   :   ";
    for(d=1;d<=n;d++){
        if(d%4==0)
        cout<<" "<<d;
    }
    return 0;
}