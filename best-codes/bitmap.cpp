/*
    a<<b = a*(b^2)    (left shift = multiples with pwr of 2)
    a>>b = a/(b^2)    (left shift = divides with pwr of 2)

*/
/*
        #day1 of redemption arc:

        - bitwise - O(n)
        - +*-/    - O(n^2)
        - %       - O(n^3) 

        - left shift = x*(2^pos)  --- 2^x == 1<<x
        - right shift = x/(2^pos) 

        - setting bit :  num = num | (1 << position)
        -unsetting bit : num = num & ~(1 << position)
        - flip bit :  num = num ^ (1 << position)

        -XOR cancels all the same numbers.
        -XOR table gives back 0 if both are same and 1 if its different.

        - z = x ^ y  ====> z | x = y

        when n is odd:

        n | (n - 1) = n  ,   n ^ (n - 1) = 1
        (n | (n - 1)) * (n ^ (n - 1)) = 1 * n = n
            

*/

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<(((3&5)|4)^7);
// }

// C Program to demonstrate use
// of left shift operator
// #include <stdio.h>

// // Driver code
// // C++ Program to demonstrate use
// // of left shift operator
// #include <iostream>
// using namespace std;

// // Driver code
// int main()
// {
// 	// a = 5(00000101), b = 9(00001001)
// 	unsigned char a = 5, b = 9;

// 	// The result is 00001010
// 	cout << "a<<1 = " << (a << 1) << endl;

// 	// The result is 00010010
// 	cout << "b<<1 = " << (b << 1) << endl;
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	 int set_bit,unset_bit,flip_bit;
// 	 set_bit = n |(1<<0);
// 	 unset_bit = set_bit & ~(1<<1);
// 	 flip_bit = unset_bit ^ (1<<2);
	 
// 	 cout<<flip_bit;

// }


//--------------------------------------------------------------//

//PRINTING THE LSB AND THE MSB

// #include<iostream>
// using namespace std;

// int position_of_msb(int num) {
//    int cnt=0;
//    while(num!=0) {
//     num/=2;
//     cnt++;
//    }
//    return cnt-1;
// }

// int main() {
//     int n;
//     cin>>n;
//     int lsb,msb_pos = -1;

//     lsb = (n&1);
//     msb_pos = position_of_msb(n);
//     cout<<msb_pos+1;
// }

//--------------------------------------------------------------//

//---this is to flip the msb and lsb//
// #include<bits/stdc++.h>
// using namespace std;

// int pos_of_msb(int num) {
//     int cnt= 0;
//     while(num!=0){
//         num/=2;
//         cnt++;
//     }
//     return cnt-1;
// }

// int main() {
//     int num;
//     cin>>num;

//     int msb_pos,msb;

//     msb_pos  = pos_of_msb(num);
//     num = num ^(1<<0);
//     num = num ^(1<<msb_pos);

//     cout<<num;
   
// }


//--------------------------------------------------------------//

//input decimal and print binary:

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int num;
//     cin>>num;
//     int x = num;
//     int cnt = 0;
//     while(x!=0) {
//         x /=2;
//         cnt++;
//     }

//     int ans[cnt-1];
//     for(int i = cnt-1;i>=0;i--) {
//         if(num>0){
//             ans[i] = num%2;
//             num /=2;        
//         }
//     }
//     for(int i =0;i<cnt;i++) {
//         cout<<ans[i];
//     }
// }

/*
    10 
    5 - 1 0
    2 - 2 1
    1 - 3 0
    0 - 4 1

*/

//--------------------------------------------------------------//

//answer without bitmanipulation:   (FAILED)

// #include<iostream>
// using namespace std;

// int solution(int a[],int n) {
//     int d;
//      for(int i = 0;i<n;i++) {
//             for(int j = 0;j<n;j++) {
//                 if(a[i]==a[j]) {
//                   d = i+j;
//                   a[i] =0;
//                   a[i+j] =0;  
//                 }
//             }
            
//         }
//     for(int i = 0;i<n;i++) {
//         if(a[i]!=0) return a[i];
//     }
// }
   
// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int n;
//         cin>>n;

//         int a[n];
//         for(int i = 0;i<n;i++) cin>>a[i];

//         int val = solution(a,n);
//         cout<<val;
       
//     }
// }



//--------------------------------------------------------------//

//FINDING THE UNIQUE PAIR

// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int n,ans=0;
//         cin>>n;
        
//         for(int i = 0;i<n;i++) {
//             int x =0;
//             cin>>x;
//             ans = ans^x;
//         }
//         cout<<ans<<endl;
//     }
// }


//--------------------------------------------------------------//

//checking odd or even

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//    int t;
//    cin>>t;

//    while(t--) {
//     int num;
//     cin>>num;
//     int lsb = num&1;

//     if(lsb==0)cout<<"even";
//     else cout<<"odd";
//    }
//   return 0;
// }

//--------------------------------------------------------------//

//minimum number of bits to make x == y
// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int x,y;
//         cin>>x>>y;
//         int val = x^y;

//         int cnt = 0;

        // while(val>0) {
        //     cnt +=(val&1);
        //     val = val>>1;
        // }
//         cout<<cnt<<endl;
//     }
// }

//--------------------------------------------------------------//


//removing the last setbit

// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int x;
//         cin>>x;

//         int val = (x)&(x-1);
//         cout<<val;
//     }
// }

//--------------------------------------------------------------//

//swapping


// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int x,y;
//         cin>>x>>y;

//         x = x^y;
//         y = y^x;
//         x = x^y;

//         cout<<x<<" "<<y<<endl;
//     }
// }

//--------------------------------------------------------------//

//extracting ith bit

// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int x,i;
//         cin>>x>>i;

//         int val = x>>i;
//         int x1 = val&1;

//         cout<<x1<<endl;
//     }
// }

//--------------------------------------------------------------//

// printing max XOR between 2 nos. HACKER RANK

// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int x,y,val=0;
//         cin>>x>>y;
//         int biggest=0;
//         for(int i =x;i<=y;i++) {
//                 for(int j = x;j<=y;j++) {
//                         val = (i ^ j);
//                         if(val>biggest){
//                                 biggest = val;
//                         }
//                 }
//         }
//         cout<<biggest<<endl;
//     }
// }


//--------------------------------------------------------------//