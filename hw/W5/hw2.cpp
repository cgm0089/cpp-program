#include <iostream> 
using namespace std; 
int main() 
{ 
       int a;  
       int n; 
       int c=0; 
       cout << "plese enter an integer (n) : ";
    cin>>n; 
for(a=1;a<=n;a++){  
    c=c+a; 
} 
    cout<<"sum(1+2..+n) = "<<c; 
    return 0;  
} 