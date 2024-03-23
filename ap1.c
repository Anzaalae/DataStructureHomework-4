#include <stdio.h>
#include <malloc.h>

int main()
{   /*이름과 학번을 출력*/
    printf("[----- [Kim yejun]  [2020025051] -----]\n\n");


    int list[5];                                        // 배열 변수 선언
    int *plist[5]= {NULL, };                            // 포인터 배열 변수 선언

    plist[0]= (int *)malloc(sizeof(int));               // 포인터 배열의 1번째 포인터에만 동적 할당을 해줌

    list[0]= 1;
    list[1]= 100;

    *plist[0]= 200;                                     // 포인터가 가르키는 주소에 200 데이터 값을 저장

    printf("list[0]             = %d\n", list[0]);      // list 배열의 첫번째 데이터를 출력
    printf("&list[0]            = %p\n", &list[0]);     // 배열의 주소를 출력
    printf("lost                = %p\n", list);         // 배열의 주소를 출력(배열은 초인터로 쓰이므로 위와 같은 값 출력)
    printf("&list               = %p\n", &list);        // 배열의 주소를 출력(배열의 시작 부분을 출력하므로 위와 같은 값 출력)


    printf("----------------------------------------\n\n");
    printf("list[1]             = %d\n", list[1]);      // list 배열의 2번째 데이터를 출력
    printf("&list[1]            = %d\n", &list[1]);     // list 배열 2번째 데이터가 저장된 주소를 출력
    printf("*(list+ 1)          = %d\n", list+ 1);      // 배열 변수명은 포인터와 비슷하게 사용되므로 list+ 1은 위와 같은 주소값 출력


    printf("----------------------------------------\n\n");
    printf("*plist[0]           = %d\n", *plist[0]);    // 포인터 배열의 첫 번째 데이터를 출력
    printf("&plist[0]           = %p\n", &plist[0]);    // 포인터 배열의 주소를 출력
    printf("&plist              = %p\n", &plist);       // 동일한 의미, 포인터 베열의시작 주소를 가리킴
    printf("plist               = %p\n", plist);        // 배열은 포인터로 쓰이기 때문에 같은 주소를 가리킴
    printf("plist[0]            = %p\n", plist[0]);     // 포인터 배열 의 첫 번째 데이터가 가르키는 주소를 출력
    printf("plist[1]            = %p\n", plist[1]);     // 포인터 배열의 첫 번째 공간에만 동적할당, 초기화 했으므로
    printf("plist[2]            = %p\n", plist[2]);     // 이후의 값은 NULL값 출력
    printf("plist[3]            = %p\n", plist[3]);
    printf("plist[4]            = %p\n", plist[4]);

    free(plist[0]);                                     // 동적 할당 했던 메모리 할당 해제, 반환(힙 메모리 영역 사용)

    return 0;
}