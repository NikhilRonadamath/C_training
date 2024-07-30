#include<stdio.h>
void main(){
    int num,rem,digit,temp,arm=0;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        arm=arm+rem*rem*rem;
        num=num/10;
    }
    if(arm==temp){
        printf("it is an armstrong number");
    }
    else 
        printf("not an armstrong number");
}