#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int k;
    int h;
    int f;
    cout << "enter an integer (n)";
    cin >> n;
    f = n;
  //  for (i = 1; i <= n; i++)
  //  { 
   //     cout << endl;
   //     for (j = 1; j <= i; j++)
   // {
   //     cout<<"*";
    //     }
//    }
    for (h = 1; h <= n; h=h+1)
   {
        cout<<endl;
       for (k = n-1; k>h; k=k-1)
    {
        cout<<"*";
 //       k--;
         }
        
 //   }
        return 0;
}
