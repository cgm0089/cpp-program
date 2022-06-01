#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    cout<<"plese enter an integer (n) : ";
    cin >> n;
    for (a = 1; a <= n; a++)
    {
        if (a % 3 == 0)
        {
            cout << " " << a;
        }
    }
    return 0;
}