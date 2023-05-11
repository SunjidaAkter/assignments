#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n;
        int x1,x2,tiger=0,pathan=0,draw=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x1,&x2);
        if(x1>x2){
            tiger++;
        }else if(x2>x1){
            pathan++;
        }
    }
    if(tiger>pathan){
        printf("Tiger");
    }else if(tiger<pathan){
        printf("Pathan");
    }else{
        printf("Draw");
    }
    return 0;
}