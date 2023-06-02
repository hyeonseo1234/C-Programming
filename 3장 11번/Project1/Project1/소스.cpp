#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_3_11(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  ���� ���� ����
    double delta_height = 250;
    double a = 3.80; //+ rand() % (3 + 1);
    double degree = 30.0;
    double ay;
    double velocity_m_s = 40.0 + rand() % (10 + 1) - 3;
    double velocity_f = 0;
    double km = 1000;
    double hour = 3600;
    double time_1 = 1.0;
    double time_4 = 4.0;
    double distance_x0 = 0;


    printf("\n\n");
    printf("3-11 \n");
    printf("��Ű ������%6.2lf m/s^2�� ���ӵ���%6.2lf���� ��縦 ���� ���ӵǰ� �ִ�.\n",a, degree);
    printf("��,��Ű ������ �������¿��� �߶��ϰ� ���ӵ��� �����ϴ�.\n\n");

    printf("(a) ���ӵ��� ���������� ���ΰ�?\n\n");

    printf("(b) �� ��ȭ�� %6.2lf m���, �� ������ ��� �Ʒ��� �����ϴµ� �ɸ��� �ð��� ���ΰ�? \n\n", delta_height);

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���ӵ��� ���������� ���ΰ�?\n\n");
        // your code here
        printf("���� ������ ay = a * sin��\n");
        printf("ay : ��������, a : ���ӵ�, x0 : ó����ġ\n\n");

        ay = a * (sin(degree * PI / 180));

        printf("ay = %6.2lf m/s^2 * sin%6.2lf��\n", a, degree);
        printf("   = %6.2lf m/s^2\n\n", ay);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("ay = %6.2lf m/s^2\n\n", ay);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ��ȭ�� %6.2lf m���, �� ������ ��� �Ʒ��� �����ϴµ� �ɸ��� �ð��� ���ΰ�? \n\n", delta_height);
        // your code here   
        printf("���� ������ x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("��t = ��v / a, v : ���߼ӵ�, v0 : ó���ӵ�, a : ���ӵ�\n");
        printf("��x = x - x0, x : ������ġ, x0 : ó����ġ\n");
        printf("x4 : 4�� ���� �̵��� �Ÿ�, x5 : 5�� ���� �̵��� �Ÿ�\n\n");

        printf(" x =(%6.2lf m) + ((%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s) + (1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2) \n", distance_x0, velocity_m_s, km, hour, time_1, a, time_1);
        printf("   =%6.2lf m\n\n");


        printf("x4 =(%6.2lf m) + ((%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s) + (1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2)\n", distance_x0, velocity_m_s, km, hour, time_4, a, time_4);

        printf("   =%6.2lf m\n\n");


        printf("   =%6.2lf m\n\n");

        printf("��x = x5 - x4\n");

        printf("   =%6.2lf m\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x =%6.2lf m\n\n");

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


    Excersize_3_11(Show_Solution, Answer);
}