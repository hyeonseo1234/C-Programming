#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>


#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_26(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������

{
    //  ���� ���� ����
    double height = 15.0;
    double velocity_m_s = 22.0;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("���� %6.2lfm/s�� �ӷ����� �����ϰ� ���� �÷ȴ�. \n", velocity_m_s);

    printf("(a) ���� %6.2lfm���� �󸶳� ���� ��ϰڴ°�? \n", height);

    printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?  \n\n");


    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��y �Դϴ�.\n");
        printf("���� ���ϱ� ���ؼ� ������ �����ϸ�  v^2 = v0^2 + 2 * a * ��y �Դϴ�.\n");
        printf("��y : �Ÿ���ȭ, v : ���� �ӵ�, v0 : ó�� �ӵ�, a : �߷� ���ӵ�\n");
        printf("��y = y - y0, v = ���� �ӵ�, v0 = %6.2lfm/s , a = %6.2lfm/s^2\n", velocity_m_s, g);
        printf("�ʱ� ��ġ y0 = 0m�̰�, ���� ��ġ y�� %6.2lfm�Դϴ�.\n", height);
        printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm �Դϴ�.\n", velocity_m_s, g, height);
        printf("�̶� a �� (-)�� ���� ������ ���� �������� ������ �Ʒ��̱� ������ (-)�� ������� �մϴ�.\n");
        printf("���� ���߼ӵ� v = sqrt((%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm) �̹Ƿ�\n", velocity_m_s, g, height);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n");

        printf("���� �ӵ� v = %5.2lfm/s �Դϴ�.\n", velocity_f);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?  \n\n");

        printf("���� ������ v = v0 + a * t �Դϴ�.\n");
        printf("���� ���ϱ� ���� ������ �����ϸ� v - v0 = a * ��t �Դϴ�.\n");
        printf("v : ���� �ӵ�, v0 : ó�� �ӵ�, a : �߷� ���ӵ�, ��t : �ð���ȭ��\n");
        printf("v = %6.2lfm/s, v0 = %6.2lfm/s, a = %6.2lfm/s^2, ��t = ��v / a\n", velocity_f, velocity_m_s, g);
        printf("���� ���� ���� %6.2lfm�� ���� �ְ������� �����ϰ� �Ʒ��� �������鼭 �ٽ� %5.2lfm�� ������ ������ �� ���� ���� ���ɴϴ�.\n", height, height);
        printf("ù ��° ����  v - v0= a * t1 �Դϴ�.\n");
        printf("�� ��° ���� -v - v0= a * t2 �Դϴ�.\n");
        printf("t1 = ���� �ö󰡴� �ð�, t2 = ���� �ְ����� ������ �������� �ð��Դϴ�.\n");;
        printf(" %6.2lfm/s - %6.2lfm/s = -%6.2lfm/s^2 * t1 �Դϴ�.\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lfm/s - %6.2lfm/s = -%6.2lfm/s^2 * t2 �Դϴ�.\n", velocity_f, velocity_m_s, g);

        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf("���� t1 = %6.2lfm/s / -%6.2lfm/s^2 �Դϴ�.\n", delta_velocity1, g);
        printf("���� t2 = %6.2lfm/s / -%6.2lfm/s^2 �Դϴ�.\n", delta_velocity2, g);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n");

        printf("���� �ö� �� %6.2lfm ������ ������ �ð� t1 = %6.2lfs �Դϴ�.\n", height, time_1);
        printf("���� ������ �� %6.2lfm ������ ������ �ð� t2 = %6.2lfs �Դϴ�.\n", height, time_2);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");


    Excersize_2_26(Show_Solution, Answer);
}
