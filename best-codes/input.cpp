///this has to be written everytime:
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;

    while(t--){

    }
}


//// this is how array functions are used:
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        //static array:
        int a[n];
        sort(a,a+n);

        //dynamic array:
        array<int,10> arr;
        sort(arr.begin(),arr.end());

        //fill function in array:
        arr.fill(5);

        //for each loop:
        for(auto i : arr){
            cout<<i<<" ";
        }

       

    }
}