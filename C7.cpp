#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pre;
    while(n>=0)
    {
        pre=n;
        cin >> n;
        if(n!=pre)
            cout << pre << ' ' ;
    }
}
