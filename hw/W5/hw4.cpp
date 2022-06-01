#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    cout << "enter an integer : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
    }
    return 0;
}