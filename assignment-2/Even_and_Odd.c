#include<stdio.h>
int main(){
    int t,even=0,odd=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d ",&n);
        if(n%2==0){
            even+=n;
        }else{
            odd+=n;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}