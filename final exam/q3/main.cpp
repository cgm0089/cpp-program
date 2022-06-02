#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    int m;
    int sum = 0;
    cin >> m;    //cin >> n;//i <= n
    //int i = 1;
    while (cin >> n)
    {
        if (n % m == 0)
            sum = sum + n;
        //i++;
    }
    cout << sum;
    cout << endl;
    return 0;
}