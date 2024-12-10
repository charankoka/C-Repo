#include<stdio.h>
int main(){
 int e,i;
    scanf("%d",&e);
    int a[e];
    for(i=0;i<e;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<e;i++){
        if(a[i]%2==0 && a[i+1]%2!=0 && a[i-1]%2!=0){
            c++;
        }
    }
    printf("%d",c);
}