#include <stdio.h>

int main()
{
    /*-----이름과 학번을 출력-----*/
    printf("[----- [김예준]  [2020025051] -----]\n\n");

    

    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char: %ld byte\n",sizeof(charType));        // charType 변수가 차지하는 데이터 1바이트
    printf("Size of int: %ld bytes\n",sizeof(integerType));     // integerType 변수가 차지하는 데이터 4바이트
    printf("Size of float: %ld bytes\n",sizeof(floatType));     // floatType 변수가 차지하는 데이터 4바이트
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   // doubleType 변수가 차지하는 데이터 8바이트

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));            // char형 변수가 차지하는 데이터 1바이트
    printf("Size of int: %ld bytes\n",sizeof(int));             // integer형 변수가 차지하는 데이터 4바이트
    printf("Size of float: %ld bytes\n",sizeof(float));         // float형 변수가 차지하는 데이터 4바이트
    printf("Size of double: %ld bytes\n",sizeof(double));       // double형 변수가 차지하는 데이터 8바이트

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));          // char 포인터가 차지하는 데이터 4바이트
    printf("Size of int*: %ld bytes\n",sizeof(int*));           // int 포인터가 차지하는 데이터 4바이트
    printf("Size of float*: %ld bytes\n",sizeof(float*));       // float 포인터가 차지하는 데이터 4바이트
    printf("Size of double*: %ld bytes\n",sizeof(double*));     // double 포인터가 차지하는 데이터 4바이트

    return 0;
}