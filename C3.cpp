#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n*2;i+=2){
        for(int k=0;k<(n-i/2-1);k++)
            cout << ' ';
        for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
        cout << endl;
    }
}
