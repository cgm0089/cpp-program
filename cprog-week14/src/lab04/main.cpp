#include <iostream>
#include <iomanip>

using namespace std;


// 參考 main() 函數補上所需的程式
void dump(int dat[], int n, int y = 5, int col = 10)
{
    int i;

    while(i < n)
    {
        cout << setw(y) << dat[i];
        if ((i + 1) % col == 0) cout << endl;
        i++;
    }

    if (i % col != 0) cout << endl;
}
// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int dat[100];
    int cnt = 0;
    
    while(cin>>dat[cnt++]);
    cnt--;

    dump(dat,cnt);
    cout<<endl;
    dump(dat,cnt,3);
    cout<<endl;
    dump(dat,cnt,10,3);

    return 0;
}
