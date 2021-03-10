#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n*2;i+=2){
        for(int k=n;k>n-i/2;k--)
            cout << ' ';
        for(int j=n*2-1;j>=i;j--)
            cout<<"*";
        cout << endl;
    }
}
