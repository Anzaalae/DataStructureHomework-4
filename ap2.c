#include <stdio.h>
#include <malloc.h>

int main()
{   /*이름과 학번을 출력*/
    printf("[----- [Kim yejun]  [2020025051] -----]\n\n");


    int list[5];                            // 정수형 데이터 5개를 저장할 수 있는 배열 lsit 선언

    list[0]= 10;
    list[1]= 11;

    printf("list[0] \t= %d\n", list[0]);    // 배열의 첫 번째 공간에 저장된 데이터 출력
    printf("list \t\t= %p\n", list);        // 배열의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]);  // 배열의 주소는 배열의 시작 지점을 출력하므로 위와 같은 주소값 출력, 같은 의미
    printf("list+ 0 \t= %p\n", list+ 0);    // 배열의 1번째 데이터 주소값 출력
    printf("list+ 1 \t= %p\n", list+ 1);    // 배열은 변수는 주소를 가리키기 때문에 배열의 두 번째 데이터가 저장된 주소값을 출력함.
    printf("list+ 2 \t= %p\n", list+ 2);
    printf("list+ 3 \t= %p\n", list+ 3);
    printf("list+ 4 \t= %p\n", list+ 4);
    printf("&list[4] \t= %p\n", &list[4]);  // 배열의 5번째  데이터가 저장된 주소값 출력, 바로 위의 출력과 동일, 같은 의미

    return 0;
}