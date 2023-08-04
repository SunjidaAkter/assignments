/*
Question: Write a C++ program that takes N integer numbers and sorts them in non-increasing order using Merge Sort. 
You can’t use any built-in function for sorting.	
Marks: 20



Sample Input
Sample Output
7
1 2 9 4 0 2 5
9 5 4 2 2 1 0
6
5 3 -1 3 3 8
8 5 3 3 3 -1


*/
#include<bits/stdc++.h>
using namespace std;
void merge(int s,int e,int mid,int v[]){

    int s_size=mid-s+1;
    int S[s_size+1];

    int e_size=e-(mid+1)+1;
    int E[e_size+1];

    for(int i=s,j=0;i<=mid;i++,j++)S[j]=v[i];
    for(int i=mid+1,j=0;i<=e;i++,j++)E[j]=v[i];

    S[s_size]=INT_MIN;
    E[e_size]=INT_MIN;

    int sp=0,ep=0;
    for(int i=s;i<=e;i++){
        if(S[sp]>=E[ep]){
            v[i]=S[sp];
            sp++;
        }else{
            v[i]=E[ep];
            ep++;
        }
    }
}
void mergeSort(int s,int e,int v[]){
    if(s==e)return;
    int mid=(s+e)/2;
    mergeSort(s,mid,v);
    mergeSort(mid+1,e,v);
    merge(s,e,mid,v);
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    mergeSort(0,n-1,a);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}
/*
input
    7
    1 2 9 4 0 2 5
output
    9 5 4 2 2 1 0

input
    6
    5 3 -1 3 3 8
outpuy
    8 5 3 3 3 -1
*/