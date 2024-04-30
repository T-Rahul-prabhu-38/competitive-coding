/*
                BIT MANIPULATION


    - a << b  == a * 2^b ;
    -a >> b  == a/ 2^b ;
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int a[n];
    int xor_val = 0;
    int and_val = 1;

    for(int i = 0;i<n;i++) {
        cin>>a[i];
       // xor_val ^= a[i];
        and_val |= a[i];
    }
    cout<<and_val ;


}
