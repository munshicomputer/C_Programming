#include <stdio.h>

int main(){
    //printf("Hello world!\n");
    //Summation of Two Number using Function with return type int
    //printf("The Summation of Two number 5 & 8 is = %d\n", summation(5,8));

    //Multiplication using function
    printf("The Multiplication of two number 8.5 & 5.5 is = %f", multiplication(8.500000000, 5.0554545454));
    return 0;
}

//Adding two number and return the summation
int summation(int numberOne, int numberTwo){
    return numberOne + numberTwo;
}

int multiplication(double numberOne, double numberTwo){
    return numberOne * numberTwo;
}

