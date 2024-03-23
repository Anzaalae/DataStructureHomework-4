#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int); // sum1, sum2, sum3함수는 모두 배열의 주소를 입력으로 받는 같은 함수임
float sum2(float *, int);      // 배열은 포인터의 의미로 쓰이기 때문에  'list[], *'은 같은 의미임
float sum3(int, float *);      // 세 함수 모두 1부터 100까지 더한 값을 반환해주는 함수

float input[MAX_SIZE], answer;
int i;
int main()
{   /*이름과 학번을 출력*/
    printf("[----- [Kim yejun]  [2020025051] -----]\n\n");


    for(i= 0; i< MAX_SIZE; i++) input[i]= i;

    /* for checking call by reference*/
    printf("--------------------------------------\n");
    printf("sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer= sum1(input, MAX_SIZE);                      // 함수는 다 다른 내용으로 작성되었지만 같은 기능을 하는 함수임
    printf("The sum is: %f\n\n", answer);               // sum1, sum2, sum3 함수는 모두 같은 내용을 출력

    printf("--------------------------------------\n");
    printf("sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer= sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf("sum3(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer= sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);

    return 0;
}

float sum1(float list[], int n)
{
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum= 0;
    for(i= 0; i< n; i++) tempsum+= list[i];

    return tempsum;
}

float sum2(float *list, int n)
{
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum= 0;
    for(i= 0; i< n; i++) tempsum+= *(list+ i); // 역참조 연산을 확용하여 배열 list의 주소를 float(4바이트) 만큼 계산해줌

    return tempsum;
}

/*stack variable reusr test*/
float sum3(int n, float *list)
{
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum= 0;
    for(i= 0; i< n; i++) tempsum += *(list + i);

    return tempsum;
}