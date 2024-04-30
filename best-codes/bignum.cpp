/*
        range of variables : 

        -10^9 < int < 10^9
        -10^12 < long int < 10^12
        -10^18 < long long  int < 10^18



*/




                                         //<---code for addition of big numbers: --->//

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int chartodigit(char ch){
    return ch - '0';
}

int digitochar(char ch){
    return ch + '0';
}

string addstring(string s1,string s2){

    //finding the bigger number:
    if(s1.length()>s2.length()){
        swap(s1,s2);
    }

    //result:
    string result= "";

    //reversing the order:
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    //declaring carry to 0 and sum = 0:
    int carry = 0;

    //iteration of loop till the end of smaller string s1:
    for(int i = 0;i<s1.length();i++){
        int d1 = chartodigit(s1[i]);
        int d2 = chartodigit(s2[i]);

        int sum = d1 +d2 + carry;
        int output_dig = sum%10;
        carry=sum/10;

        result.push_back(digitochar(output_dig));
    }

    for(int i = s1.length();i<s2.length();i++){
        int d1 = chartodigit(s2[i]);   

        int sum = d1 + carry;
        int output_dig = sum%10;
        carry = sum/10;

        result.push_back(digitochar(output_dig));    
    }

    //if carry is being generated:
    if(carry){
        result.push_back('1');
    }

    reverse(result.begin(),result.end());
    return result;
}

void solve() {
    string n1,n2;
    cin>>n1>>n2;

    string result = addstring(n1,n2);
    cout<<"the result using string is : "<<result;
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}



//----------------------------------------------------------------------------------------------------------//

                // ----- factiorial of a number ------ //

#include<bits/stdc++.h>
using namespace std;

//multiplication values of the numbers:
void mulply(vector<int> &a,int no,int &size){
    int carry = 0;
    for(int i  = 0;i<size;i++){
        int prod = a[i] * no +carry;
        a[i] = prod/10;
        carry = prod%10;

    }   
    while(carry){
        a[size] = carry%10;
        carry /=10;
        size +=1;

    }
}


//factiorial function:
int factorial(int n){
    vector<int>a(1000,0);
    a[0] = 1;
    int size = 1;

    for(int i = 2;i<=n;i++) {
        mulply(a,i,size);
    }

    for(int i = size-1;i>=0;i++){
        cout<<a[i];
    }
    cout<<endl;


}

//solve fucntion :
void solve(){
    //initializing 2 variables :
    int n;
    cin>>n;

    factorial(n);
}

//main function :
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}


//----------------------------------------------------------------------------------------------------------//

                               //// x  = (n - k) /2 ;    y = x+ n;     

/*
    - write code to work for decimals
    -write comments;
*/
#include<bits/stdc++.h>
using namespace std;

//function to convert character to digit:
int chartodig(char ch){
    return ch - '0';
}

//function to convert digit to character :
int digtochar(char ch){
    return ch + '0';
}


//function to subtract 2 numbers :
string subtract_bn(string n,string k){

    //reversing the numbers:
    reverse(n.begin(),n.end());
    reverse(k.begin(),k.end());

    string result="";
    int carry = 0;

    for(int i = 0;i<k.length();i++){
        int val = 0;

        int d1 = chartodig(n[i]); 
        int d2 = chartodig(k[i]); 

        d1 = d1-carry;
        if(d1<d2) {
            val = (10+d1) - d2;
            carry = 1;
        }
        else if(d1>=d2){
            val = d1-d2;
        }
        result.push_back(digtochar(val));
    }
    for(int i = k.length();i<n.length();i++) {
        int d1 = chartodig(n[i]); 
        result.push_back(digtochar(d1));    
    }

    reverse(result.begin(),result.end());
    return result;

}


//function to divide the numbers by 2 : 
string divide_by_2(string val){
    string result ="";
    int left_over = 0;
    
    for(int i  = 0;i<val.length();i++) {
        int d1 = chartodig(val[i]);

        d1 = (left_over*10) + d1;

        int sum = d1/2;

        left_over = d1%2;
        result.push_back(digtochar(sum));
    }
    // string n2;
    // if(left_over != 0) {
    //     while(left_over){
    //         int sum = left_over/2;
    //         left_over%=2;
    //         n2.push_back(digtochar(sum));
    //     }
    // }
   // reverse(result.begin(),result.end());
    //string final_result = result+'.'+n2;

    return result;
}

string addstring(string s1,string s2){

    //finding the bigger number:
    if(s1.length()>s2.length()){
        swap(s1,s2);
    }

    //result:
    string result= "";

    //reversing the order:
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    //declaring carry to 0 and sum = 0:
    int carry = 0;

    //iteration of loop till the end of smaller string s1:
    for(int i = 0;i<s1.length();i++){
        int d1 = chartodig(s1[i]);
        int d2 = chartodig(s2[i]);

        int sum = d1 +d2 + carry;
        int output_dig = sum%10;
        carry=sum/10;

        result.push_back(digtochar(output_dig));
    }

    for(int i = s1.length();i<s2.length();i++){
        int d1 = chartodig(s2[i]);   

        int sum = d1 + carry;
        int output_dig = sum%10;
        carry = sum/10;

        result.push_back(digtochar(output_dig));    
    }

    //if carry is being generated:
    if(carry){
        result.push_back('1');
    }

    reverse(result.begin(),result.end());
    return result;
}


//solve function :
void solve(){
    string k,n;
    cin>>n>>k;
    string k2 = k;
    string sol = subtract_bn(n,k);
    string x = divide_by_2(sol);
    string y = addstring(x,k2);  

    cout<<"the value of x is : "<<x<<endl<<"the value of y is : "<<y<<endl;
} 


//main function :
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // initialization of number of loops:
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}


//----------------------------------------------------------------------------------------------------------//


