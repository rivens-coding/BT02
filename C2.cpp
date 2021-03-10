#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k<n-1;k++)
            cout << ' ';
        for(int j=n+1-i;j>0;j--)
            {
                cout<<"*";
            }
        cout << endl;
    }
}
