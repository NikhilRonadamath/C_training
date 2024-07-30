#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int num,rem,arm=0,temp;
    
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        arm=arm+rem*rem*rem;
        num/=10;
    }
    if(arm==temp)
        printf("yes");
    else
        printf("no");
    

}