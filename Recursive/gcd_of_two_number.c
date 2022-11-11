#include<stdio.h>
// ver.1 2022/11/11
// A function to calculate the GCD of two integers
// in a recursive method
int getGcdRecur(int num1,int num2){
    if(num1%num2==0){
        return num2;
    }else{
        return getGcdRecur(num2,num1%num2);
    }
}
// ver.1 2022/11/11
// A function to calculate the GCD of two integers
// in a Loop method
int getGcdLoop(int num1,int num2){
    while (num1%num2 != 0)
    {
        num1 = num1 % num2;// calculate remainder

        // change two integers without declaring additional integer
        // by XOR Arithmetic
        num2 = num2 ^ num1;
        num1 = num1 ^ num2;
        num2 = num2 ^ num1;
    }
    return num2;
}
int main(int argc, char const *argv[])
{
    printf("Hellp");
    // printf("%d",getGcdRecur(10,50));
    return 0;
}
