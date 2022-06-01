#include <iostream>
using namespace std;

int main(){

    int n;
    int cnt = 0;
    while (cin >> n)
    {
        cnt++;

    cout << n <<"|";
    for(int i = 1; i <= n ; i = ++){
        cout << "*";
    }cout<<endl; 
    }
    cout << "\nData coutns : " << cnt << endl;
    return 0;
}