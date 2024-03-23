#include <stdio.h>

void print_one(int *ptr, int rows); // 배열의 주소와 배열의 데이터 개수를 입력으로 받아
                                    // 배열의 각 데이터의 주소와 데이터를 출력해주는 함수임
int main()
{   /*이름과 학번을 출력*/
    printf("[----- [Kim yejun]  [2020025051] -----]\n\n");


    int one[]= {0, 1, 2, 3, 4};

    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");

    printf("------------------------------------\n");
    printf("print_one(&one[0], 5)\n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);                              // 배열의 첫 번째 데이터가 저장된 주소값을 입력값으로 줌

    printf("------------------------------------\n");
    printf("print_one(one, 5)\n");
    printf("------------------------------------\n");
    print_one(one, 5);                                  // 배열 변수명은 포인터와 비슷하게 배열이 시작하는 주소를 가리키므로
                                                        // 20줄의 '&one[0]'와 같은 의미이며, 같은 주소를 가리킴
    return 0;
}

void print_one(int *ptr, int rows)
{/*print out a one-dimensional array using a pointer */

    int i;
    printf("Address \t Contents\n");
    for(i= 0; i< rows; i++) printf("%p \t %5d\n", ptr+ i, *(ptr+ i));

    printf("\n");
}