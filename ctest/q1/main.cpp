#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int f;
    cin >> n;
    cin >> f;

    for (int i = 1; i <= n; i++)
    {
        if (i % f == 0)
            cout << setw(4) << i;
    }
    cout << endl;
    return 0;
}