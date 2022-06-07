#include <iostream>
#include <iomanip>

using namespace std;

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的程式碼。
int main()
{
    int n;
    int m;

    cin >> m;

    while(cin >> n)
    {
        switch(m)
        {
            case 0:
                cout << "   " << n;
                break;
            
            case 1:
                if(n % 2 != 0)
                    cout << "   " << n;
                break;
            
            case 2:
                if(n % 2 == 0)
                    cout << "   " << n;
                break;
            
            default:
                cout << "   " << n;
        }
    }
    cout << endl;

    return 0;
}
