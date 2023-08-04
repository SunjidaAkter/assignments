/*
 You are given an array of N positive integers. The next line will contain an integer K. You need to tell whether there exists more than one occurrence of K in that array or not. If there exists more than one occurrence of K print YES, Otherwise print NO.
See the sample input-output for more clarification.
The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of K will exist.	 You must solve this in O(logn) complexity.
Marks: 20



Sample Input
Sample Output
7
1 3 4 6 6 9 17		
6
YES
10
0 1 2 3 4 5 6 7 8 9
3
NO


*/
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int l,int r,int a[],int x){
    if(l==r)return -1;
    int mid=(l+r)/2;   
    if(a[mid]==x)return mid;
    else if(a[mid]>x)binarySearch(l,mid,a,x);
    else if(a[mid]<x)binarySearch(mid+1,r,a,x);
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int x;cin>>x;
    int v=binarySearch(0,n-1,a,x);
    if(v==-1)cout<<"NO";
    else {
        if(a[v-1]==a[v] || a[v]==a[v+1])cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
/*
input
    7
    1 3 4 6 6 9 17		
    6
output
    YES

input
    10
    0 1 2 3 4 5 6 7 8 9
    3 
output
    NO       
*/
