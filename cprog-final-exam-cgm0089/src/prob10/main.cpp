#include <iostream>
#include <iomanip>

using namespace std;

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的函數設計。
int index(int arr[], int len, int val)
{
    int i = 0;
    while (i < len)
    {
        if(arr[i] == val) return i;
        i++;
    }
    return -1;
}
// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int arr[100];
    int len = 0;
    while (cin >> arr[len])
    {
        len++;
    }

    for (int i = 0; i < 10; i++)
        cout << index(arr, len, i) << " ";
    cout << endl;

    return 0;
}
