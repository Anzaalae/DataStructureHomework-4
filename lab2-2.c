#include <stdio.h>

int main()
{
    /*-----이름과 학번을 출력-----*/
    printf("[----- [김예준]  [2020025051] -----]\n\n");

    

    int i;
    int *ptr;
    int **dptr;

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                    // 변수 i에 저장된 값
    printf("address of i == %d\n", &i);                 // 변수 i의 주소 6422300
    printf("value of ptr == %p\n", ptr);                // 포인터 ptr에 저장된 주소값 0038E000
    printf("address of ptr == %p\n", &ptr);             // 포인터 ptr의 주소 0061FF18

    ptr = &i; /* ptr is now holding the adress of i */ // 포인터 변수 ptr에 i의 주솟값을 저장

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                    // 변수 i에 저장된 값
    printf("address of i == %p\n", &i);                 // 변수 i의 주소 0061FF1C
    printf("value of ptr == %p\n", ptr);                // 포인터 ptr에 저장된 값 0061FF1C
    printf("address od ptr == %p\n", &ptr);             // 포인터 ptr의 주소 0061FF18
    printf("value of *ptr == %d\n", *ptr);              // ptr이 가리키는 주소에 저장된 값 == i == 1234

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                    // 변수 i에 저장된 값
    printf("address of i == %p\n", &i);                 // 변수 i의 주소 0061FF1C
    printf("value of ptr == %p\n", ptr);                // 포인터 변수 ptr에 저장된 값 0061FF1C
    printf("address of ptr == %p\n", &ptr);             // 포인터 변수 ptr의 주소 0061FF18
    printf("value of *ptr == %d\n", *ptr);              // ptr에 저장된 주소에 저장된 값 1234
    printf("value of dptr == %p\n", dptr);              // 이중 포인터 변수 dptr에 저장된 값 0061FF18
    printf("address of dptr == %p\n", &dptr);           // 이중 포인터 변수 dptr의 주소 0061FF14
    printf("value of *dptr == %p\n", *dptr);            // dptr이 가리키는 주소에 저장된 값 == ptr == 0061FF1C
    printf("value of **dptr == %d\n", **dptr);          // dptr이 가리키는 주소에 저장된 값이 가리키는 주소에 저장된 값 == i == 1234

    *ptr = 7777; /* changing the value of *ptr */       // ptr에 저장된 주소에 저장된 값을 7777로 변경 *ptr == i == 7777

    printf("\n[after *ptr = 7777] \n");                 
    printf("value of i == %d\n", i);                    // 변수 i에 저장된 값 7777
    printf("value of *ptr == %d\n", *ptr);              // 포인터 ptr에 저장된 주소에 저장된 값을 출력 7777
    printf("value of **dptr == %d\n", **dptr);          // 이중 포인터가 최종적으로 가리키는 주소에 저장된 값 7777

    **dptr = 8888; /* changing the value of **dptr */   // 이중 포인터 dptr이 최종적으로 카리키는 주소에 저장된 값을 8888로 변경 **dptr == *ptr == i

    printf("\n[after **dptr = 8888] \n");     
    printf("value of i == %d\n", i);                    // 변수 i에 저장된 값 8888
    printf("value of *ptr == %d\n", *ptr);              // 포인터 ptr에 저장된 주소에 저장된 값을 출력 8888
    printf("value of **dptr == %d\n", **dptr);          // 이중 포인터가 최종적으로 가리키는 주소에 저장된 값 8888

    return 0;
}