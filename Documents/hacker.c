#include<stdio.h>
#include<string.h>

#include<stdlib.h>
int main() {
    int t,i,j,k,sum,l;
    scanf("%d",&t);
    char arr[10000];
    for(;t>0;t--) {
        scanf("%s",arr);
        sum=0;
        l=strlen(arr);
        for(i=0;i<=l/2 && i<=(l-1-i);i++) {
            
            sum=sum+abs(arr[i]-arr[l-1-i]);
            
        }
        
    printf("%d\n",sum);
    }
    return 0;
}
