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


void Excersize_2_26(int solution, int answer)

{
    double height = 15.0;
    double velocity = 22.0;
    double g = 9.80;
    double t1;
    double t2;
    double v;
    double a;
    double b;

    printf("\n\n");
    printf("2-26 \n");
    printf("���� %6.2lf m/s�� �ӷ����� �����ϰ� ���� �÷ȴ�. \n", velocity);

    printf("(a) ���� %6.2lf m���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

    printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?  \n\n");


    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��y �Դϴ�.\n\n");
        printf("���� ���ϱ� ���ؼ� ������ �����ϸ�  v^2 = v0^2 + 2 * a * ��y �Դϴ�.\n\n");
        printf("���⼭ ( ��y = (���� ��ȭ) = y - y0 ), ( v = ���� �ӵ� ), ( v0 = (ó�� �ӵ�) = 22.0 m/s ), ( a(�߷� ���ӵ�) = 9.80 m/s^2 ) �Դϴ�.\n\n");
        printf("y�� ���� ��ġ�̰�, y0�� �ʱ� ��ġ�Դϴ�.\n\n");
        printf("y0�� 0�̱� ������ ��y�� %6.2lf m�Դϴ�.\n\n", height);
        printf("�Ŀ� �����ϸ�  v^2 = (%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m �Դϴ�.\n\n", velocity, g, height);
        printf("�̶� a �� (-)�� ���� ������ ���� �������� ������ �Ʒ��̱� ������ (-)�� ������� �մϴ�.\n\n");
        printf("v^2�� v�� �ٲ��ָ� ���� v = sqrt((%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m) �Դϴ�.\n\n", velocity, g, height);

        v = sqrt(velocity * velocity + 2 * (-g) * height);

        printf("v = %6.2lf m/s �Դϴ�.\n\n", v);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("���� %6.2lf m���� %6.2lf m/s�� ��մϴ�.\n\n", height, v);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?  \n\n");

        printf("���� ������ v = v0 + a * t �Դϴ�.\n\n");
        printf("���⼭ ( v = ���� �ӵ� ), ( v0 = (ó�� �ӵ�) = 22.0 m/s ), ( a(�߷� ���ӵ�) = 9.80 m/s^2 ), ( t = �ð� )�Դϴ�.\n\n");
        printf("���� ���ϱ� ���� ������ �����ϸ� v - v0 = a * t �Դϴ�.\n\n");
        printf("���� ���� ����%6.2lf m�� ���� �ְ������� �����ϰ� �Ʒ��� �������鼭 �ٽ�%6.2lf m�� ������ ������ �� ���� ���� ���ɴϴ�.\n\n", height, height);
        printf("ù ��° ���� v - v0= a * t1 �Դϴ�.\n\n");
        printf("�� ��° ���� -v - v0= a * t2 �Դϴ�.\n\n");
        printf("t1 = ���� �ö󰡴� �ð��̰�, t2 = ���� �ְ����� ������ �������� �ð��Դϴ�.\n\n");
        printf("���Ŀ� �����ϸ� ù ��° ���� %6.2lf m/s - %6.2lf m/s = -%6.2lf m/s^2 * t1 �Դϴ�.\n\n", v, velocity, g);
        printf("���Ŀ� �����ϸ� �� ��° ���� -%6.2lf m/s - %6.2lf m/s = -%6.2lf m/s^2 * t2 �Դϴ�.\n\n", v, velocity, g);

        t1 = (v - velocity) / -g;
        t2 = (-v - velocity) / -g;
        a = v - velocity;
        b = -v - velocity;

        printf("ù ��° ���� Ǯ�� t1 = (%6.2lf m/s -%6.2lf m/s) / -%6.2lf m/s^2 �� �˴ϴ�.\n\n", v, velocity, g);
        printf("t1 = %6.2lf m/s / -%6.2lf m/s^2 �� �˴ϴ�.\n\n", a, g);
        printf("�� ��° ���� Ǯ�� t2 = (-%6.2lf m/s -%6.2lf m/s) / -%6.2lf m/s^2 �� �˴ϴ�.\n\n", v, velocity, g);
        printf("t2 = %6.2lf m/s / -%6.2lf m/s^2 �� �˴ϴ�.\n\n", b, g);
        printf("�� ���� Ǯ�� t1 = %6.2lf s�� t2 = %6.2lf s �� ���� ���� ���ɴϴ�.\n\n", t1, t2);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("���� �ö� �� %6.2lf m ������ ������ �ð� t1 = %6.2lf s �̰�\n", height, t1);
        printf("���� ������ �� %6.2lf m ������ ������ �ð� t2 = %6.2lf s �Դϴ�.\n\n", height, t2);

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