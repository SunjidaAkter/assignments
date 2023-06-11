#include<stdio.h>
#include<string.h>
int main(){
    int n,even=0,odd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}