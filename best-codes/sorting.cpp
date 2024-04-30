/*this is the fastest way to write a sort function using a keyword called sort. 
maybe not the best time compleixty way*/

/*
Time Complexity: O(N log N)
Auxiliary Space: O(1)

The time complexity of std::sort() is:
Best Case – O(N log N)
Average Case – O(N log N)
Worst-Case – O(N log N)

Space Complexity: It may use O( log N) auxiliary space

*/
#include<iostream>
using namespace std;

int n, a[1000001];

int main()
{
    cin >> n;
    for(int i = 0; i <n; i++)
        cin >> a[i];

    sort(a,a+n);//sorts elements in ascending order

    for(int i = 0; i <n; i++)
        cout << a[i] << " ";

    cout<<endl;
    sort(a,a+n,greater<int>()); //prints in descending order
    
    for(int i = 0; i <n; i++)
        cout << a[i] << endl;

    cout<<endl;
    sort(a+2,a+n);  //this sorts for a given range from 2 to n-1.



    return 0;
}
