/*

Question: You are given two sorted arrays arr1 and arr2 in descending order. Your task is to merge these two arrays into a new array result using the merge sort technique, but Instead of merging the arrays in ascending order, you need to merge them in descending order to create the result array.
	 
You cannot use stl sort function here
Marks: 20



Sample Input
Sample Output
4
8 6 4 2	
4
7 5 3 1
8 7 6 5 4 3 2 1


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;cin>>m;
    int a[m+1];for(int i=0;i<m;i++)cin>>a[i];
    int n;cin>>n;
    int b[n+1];for(int i=0;i<m;i++)cin>>b[i];
    a[m]=INT_MIN,b[n]=INT_MIN;
    int c[m+n],sp=0,ep=0;
    for(int i=0;i<=m+n;i++){
        if(a[sp]>=b[ep]){
            c[i]=a[sp];
            sp++;
        }else{
            c[i]=b[ep];
            ep++;
        }
    }
    for(int i=0;i<m+n;i++)cout<<c[i]<<" ";
    return 0;
}
