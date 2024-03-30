#include <stdio.h>

int main()
{
    printf("[----- [�迹��] [2020025051] -----]");
    printf("\n\n");
    
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x));     // x�� �����ϴ� �޸� ũ�⸦ ����Ʈ ������ ���
    printf("sizeof(*x) = %lu\n", sizeof(*x));   // *x�� �����ϴ� �޸� ũ�⸦ ����Ʈ ������ ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x�� �����ϴ� �޸� ũ�⸦ ����Ʈ ������ ���
}
/*
    %lu�� unsighned long int�� ���� �������� ����� �� ���
    x ������ *x�� �ּҸ� ����Ŵ, address
    *x�� x�� ����Ű�� �ּ��� ���� �ǹ���(**x�� �ּҸ� ����Ŵ), address
    **x�� *x�� ����Ű�� �ּ��� ���� �ǹ���, intager
    ���� 64bit �ü���� ��� �������� 32bit �ü�� ���� �����Ϸ��� �۵��ؼ� �ּҰ� 4 byte�� ��µ�
*/