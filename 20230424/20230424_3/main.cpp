// 14�� ����
// �й�: 202315011
// �а�: �̷������Ƽ���а�
// �̸�: ������
// ��¥: 20230424
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, z, a, b, c;
    
    printf("���° �ױ��� ���ұ��? ");
    scanf("%d ", &a);
    
    x = 0; y = 1;
    c = a - 2;

    printf("%d %d", x, y);
    
    for (b = 0; b <= c; b++)
    {
        z = x + y;
        x = y;
        y = z;

        printf("%d ", z);
    }
    return 0;
}