#include <stdio.h>

struct student
{
    char lastName[13];  // 13 bytes ���ڿ�
    int studentId;      // 4 bytes intager
    short grade;        // 2 bytes short intager
};

int main()
{
    printf("[----- [�迹��] [2020025051] -----]");
    printf("\n\n");

    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); // padding byte ������ ���� 24����Ʈ ���
    printf("size of int     = %ld\n", sizeof(int));            // integer�� �ڷ����� 4����Ʈ
    printf("size of short   = %ld\n", sizeof(short));          // short�� �ڷ����� 2����Ʈ
}
/*
    ����ü�� �ü���� Ư�� �޸� ũ�� ������ data�� ����
    �׷��� ����ü�� ������ �� ���� �޸𸮸� ���� �����ϴ� ������ �����ŭ �޸� �Ҵ���
    student ����ü������ integer�� ������ 4����Ʈ�� 4����Ʈ�� ����� ����
    (lastName ������ 13����Ʈ���� char 1����Ʈ�� ������)
    �̶� �޸� ũ�⸸ ���߸� �Ǵ� ���� �ƴ϶� ������ ������ ������� �޸𸮰� �Ҵ�ǹǷ�...
    (��, ����ü ������ ���� ���� ������ ���� �Ҵ�Ǵ� �޸� ũ�Ⱑ �޶���)
    char lastName[13] <= 4 * 4 == 16
    int student <= 4
    short grade <= 4
    ��, 16 + 4 + 4 == 24����Ʈ ��ŭ �޸𸮸� �Ҵ���
    �޸��� �� ������ padding byte�� �����.
*/