#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>


#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_26(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
    //  변수 선언 지역
    double height = 15.0;
    double height0 = 0;
    double velocity_m_s = 22.0;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("돌을 %6.2lfm/s의 속력으로 수직하게 던져 올렸다. \n", velocity_m_s);

    printf("(a) 돌은 %6.2lfm에서 얼마나 빨리 운동하겠는가? \n\n", height);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가? ");


    if (solution == SHOW)

    {
        printf("\n\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy\n");
        printf("Δy : y - y0, y : %6.2lfm, y0 : %6.2lfm\n", height, height0);
        printf("a : %6.2lfm/s^2, v : 나중속도, v0 : %6.2lfm/s\n\n", g, velocity_m_s);
        printf("중력 가속도는 아래 방향이므로 -%6.2lfm/s^2입니다.\n\n", g);
        printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm\n", velocity_m_s, g, height);


        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %5.2lfm/s\n\n", velocity_f);

    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("v = %5.2lfm/s\n\n", velocity_f);

    }

    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here

        printf("관련 공식은 v = v0 + a * t\n");
        printf("Δv : v - v0, v :%6.2lfm/s, v0 :%6.2lfm/s\n", velocity_f);
        printf("a:%6.2lfm/s^2, Δt : Δv / a\n\n", velocity_m_s, g);

        printf(" v - v0= a * t1\n");
        printf("-v - v0= a * t2\n\n");

        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf(" %6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t1\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t2\n\n", velocity_f, velocity_m_s, g);

        printf("t1 =%6.2lfm/s  / (-%6.2lfm/s^2) =%6.2lfs\n", delta_velocity1, g, time_1);
        printf("   = %5.2lfm/s\n", time_1);

        printf("t2 = %6.2lfm/s / (-%6.2lfm/s^2) =%6.2lfs\n", delta_velocity2, g, time_2);
        printf("   = %5.2lfm/s\n\n", time_2);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("t1 =%6.2lfs\n", time_1);
        printf("t2 =%6.2lfs\n\n", time_2);


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
