/*
pattern 2

111
222
333
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i=1; 

    while (i<=n){ //1,2,3
        int j=1;
        while(j<=n){
            cout << i;
            j=j+1;
        }
        cout <<endl;
        i=i+1;
    }
}