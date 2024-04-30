/*
            binomial exponentiation

    - check if b is 0 
    - if the last bit of b is set then result = result * a;
    - shift the b bits to right by 1;  --> this can be done in 2 ways :   b>>1  or   b/=2;
    - return result
    - the whole code is in the time complexity of : O(log(b))
*/

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int mod = 1e9 + 7;

int powr(int a,int b) {
    int res = 1;
    while(b){
        if(b&1) res *=a,res %=mod;
        a*=a;a%=mod;
        b/=2;
    }
    return res;
}


void solve(){
    int a,b;
    cin>>a>>b;

    int val = powr(a,b);
    cout<<val<<endl;
}


int32_t main(){
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}



/*
            fast multiplication :

            - this is similar to the binomial exponentiation
            - check if b is 0 
            - if the last bit of b is set then result = result + a;
            - shift the b bits to right by 1;  --> this can be done in 2 ways :   b>>1  or   b/=2;
            - return result
            - the whole code is in the time complexity of : O(log(b))

*/

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int mod = 1e9 + 7;

int multiply(int a,int b) {
    int res = 0;
    while(b){
        if(b&1) res +=a;
        a*=2;
        b/=2;
    }
    return res;
}

void solve(){
    int a,b;
    cin>>a>>b;

    int val = powr(a,b);
    cout<<val<<endl;
}

int32_t main(){
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}
