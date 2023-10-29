#include<stdio.h>
void main(){
    int sum;
    for(int i=1;i<=101;i++){
        if(i%2==0){
            sum = sum+i;
        }
    }
    printf("%d", sum);
    
}
