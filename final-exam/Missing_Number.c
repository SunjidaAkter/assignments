#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int sum,a,b,c,ans;
        scanf("%d %d %d %d",&sum,&a,&b,&c);
        ans=sum-a-b-c;
        printf("%d\n",ans);
    }
    return 0;
}