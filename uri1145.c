#include <stdio.h>

int main() {
    int x, y,i,j;
    scanf("%d %d", &x,&y);
    for(i=1;i<=y;i++){
        if(i%x!=0){
            printf("%d ",i);
        }
        if(i%x==0){
            printf("%d\n", i);
        }
    }
    return 0;
}