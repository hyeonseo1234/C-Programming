// �а�: �̷������Ƽ���а�
// �й�: 202315011
// �̸�: ������
// ��¥: 2023. 05. 24


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int money = 0;

void bank()
{
    printf("�ܰ�� %d ���Դϴ�.\n", money);
}

void deposit()
{
    int amount;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        money += amount;
        printf("%d ���� �ԱݵǾ����ϴ�.\n", amount);
        printf("�ܰ�� %d �� �Դϴ�.", money);
    }
    else
    {
        printf("�߸��� �����Դϴ�.\n");
    }
}

void withdrawal()
{
    int amount;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= money)
    {
        money -= amount;
        printf("%d ���� ��ݵǾ����ϴ�.\n", amount);
        printf("�ܰ�� %d �� �Դϴ�.", money);
    }
    else
    {
        printf("�߸��� �����Դϴ�.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("Welcome to Express ATM\n");
        printf("<1> �ܾ�\n");
        printf("<2> �Ա�\n");
        printf("<3> ���\n");
        printf("<4> ����\n");
        printf("�޴��� �����Ͻÿ�: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bank();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            printf("�����մϴ�.\n");
            return 0;
        default:
            printf("�߸��� �����Դϴ�.\n");
        }
        printf("\n");
    }
}