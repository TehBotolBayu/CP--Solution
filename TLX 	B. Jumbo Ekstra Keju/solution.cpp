#include <iostream>

using namespace std;

int main()
{
    {
    int n, c = 0;  cin >> n;
    for(int i = 19; i <= n && i <= 99; i+=10){
        c++;
    }
    cout << c;
    }
    return 0;
}
