#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char x;
    int a, b;

    printf("**********");
    printf("\nA----Add");
    printf("\nS----Subtract");
    printf("\nM----Multiply");
    printf("\nD----Divide");
    printf("\nQ----Qutit");
    printf("\n**********");

    do
    {
        printf("\n������ �����Ͻÿ�: ");
        scanf("%c", &x);
        if (x == 'Q')
            break;

        printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
        scanf("%d %d", &a, &b);

        if (x == 'A')
        {
            printf("\n%d\n", a + b);
            break;
        }
        else if (x == 'S')
        {
            printf("\n%d\n", a - b);
            break;
        }
        else if (x == 'M')
        {
            printf("\n%d\n", a * b);
            break;
        }
        else if (x == 'D')
        {
            printf("\n%d\n", a / b);
            break;
        }
    }
    while (1);

    return 0;
}