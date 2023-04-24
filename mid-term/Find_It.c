#include<stdio.h>
#include<string.h>
int main(){
    int n,x,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}