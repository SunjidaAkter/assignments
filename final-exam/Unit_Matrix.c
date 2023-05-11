#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
/*
primary Unit diagonal
1   0   0
0   1   0
0   0   1
*/
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    // if(row!=col){
    //     flag=0;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){
                    flag=0;
                }
                continue;
            }
            if(a[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}