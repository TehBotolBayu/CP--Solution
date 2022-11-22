#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int patok[n], bebek[k];

    for(int i=0; i<n; i++){
        cin >> patok[i];
    }
    for(int i=0; i<k; i++){
        cin >> bebek[i];
    }
    for(int i=0; i<k; i++){
        int sum = 0;
        //sum
        for(int j=0; j<n; j++){
            sum += patok[j];
            if(sum > bebek[i]){
                cout << j << endl;
                break;
            }
            if(j == n-1){
                cout << j+1 << endl;
            }
        }
    }

    return 0;
}
