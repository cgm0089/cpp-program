#include <iostream>
#include <iomanip>

using namespace std;

void dump(int dat[],int len)
{
    int i = 0;
    while (i < len)
    {
        cout << setw(5) << dat[i];
        i++;
    }
    cout << endl;
}

// 參考 main() 函數補上所需的程式

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================


int main()
{
    int arr[100];
    int i = 0;

    while(cin>>arr[i++]);
    i--;
    
    dump(arr,i);

    return 0;
}