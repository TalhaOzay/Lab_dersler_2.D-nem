#include <stdio.h>

// 1. Example
/*
int sum(int num){
    if (num==0){
        return 0;
    }else{
        return num + sum(num-1);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Sum of the numbers: %d",sum(num));
    return 0;
}
*/

//2. Example
/*
int size;
int biggest(int num[]){
    static int i,max=-99;
    if (i==size){
        return 0;
    }else{
        if (max<num[i]){
            max=num[i];
            i++;
            biggest(num);
        }
    }
    return max;
}

int main(){
    printf("Please enter how many numbers you will enter: ");
    scanf("%d",&size);
    int num[100],i;
    for (i=0;i<size;i++){
        printf("Enter %d. number: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Biggest number in this array is %d",biggest(num));
    return 0;
}
*/


// 3. Example
/*
int f(int num){
    if (num<1){
        return 0;
    }else{
        return (num%10)+f(num/10);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",f(num));
    return 0;
}
*/

//4. Example

int ebob(int num1,int num2){
    static int i=1,max=0;
    if (i<=num1 && i<=num2){
        if (num1%i==0 && num2%i==0){
            max=i;
            i++;
            ebob(num1,num2);
        }else{
            i++;
            ebob(num1,num2);
        }
    }else{
        return max;
    }
}

int main(){
    int num1,num2;
    printf("Please enter first and second number : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Greatest common divisor of %d and %d is %d",num1,num2,ebob(num1,num2));
    return 0;
}