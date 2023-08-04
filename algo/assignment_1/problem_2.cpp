/*
Question: Write a C++ program that takes N integer numbers that are sorted and distinct. The next line will contain an integer k. You need to tell whether K exists in that array or not. If it exists, print its index otherwise print “Not Found”. 	
You must solve this in O(logn) complexity.
Marks: 20



Sample Input
Sample Output
8
-4 0 2 6 9 10 29 54
29
6
10
0 1 2 3 4 5 6 7 8 9
-3
Not Found


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
    if(v==-1)cout<<"Not Found";
    else cout<<v;
    return 0;
}
/*
input
    8
    -4 0 2 6 9 10 29 54
    29
output
    6
    
input
    10
    0 1 2 3 4 5 6 7 8 9
    -3
output
    Not Found
*/