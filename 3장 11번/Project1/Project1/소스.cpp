#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_3_11(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  변수 선언 지역
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
    printf("스키 선수가%6.2lf m/s^2의 가속도로%6.2lf˚의 경사를 따라 가속되고 있다.\n",a, degree);
    printf("단,스키 선수는 정지상태에서 추락하고 가속도는 일정하다.\n\n");

    printf("(a) 가속도의 수직성분은 얼마인가?\n\n");

    printf("(b) 고도 변화가 %6.2lf m라면, 이 선수가 언덕 아래에 도달하는데 걸리는 시간은 얼마인가? \n\n", delta_height);

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 가속도의 수직성분은 얼마인가?\n\n");
        // your code here
        printf("관련 공식은 ay = a * sinθ\n");
        printf("ay : 수직성분, a : 가속도, x0 : 처음위치\n\n");

        ay = a * (sin(degree * PI / 180));

        printf("ay = %6.2lf m/s^2 * sin%6.2lf˚\n", a, degree);
        printf("   = %6.2lf m/s^2\n\n", ay);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("ay = %6.2lf m/s^2\n\n", ay);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 고도 변화가 %6.2lf m라면, 이 선수가 언덕 아래에 도달하는데 걸리는 시간은 얼마인가? \n\n", delta_height);
        // your code here   
        printf("관련 공식은 x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("Δt = Δv / a, v : 나중속도, v0 : 처음속도, a : 가속도\n");
        printf("Δx = x - x0, x : 나중위치, x0 : 처음위치\n");
        printf("x4 : 4초 동안 이동한 거리, x5 : 5초 동안 이동한 거리\n\n");

        printf(" x =(%6.2lf m) + ((%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s) + (1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2) \n", distance_x0, velocity_m_s, km, hour, time_1, a, time_1);
        printf("   =%6.2lf m\n\n");


        printf("x4 =(%6.2lf m) + ((%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s) + (1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2)\n", distance_x0, velocity_m_s, km, hour, time_4, a, time_4);

        printf("   =%6.2lf m\n\n");


        printf("   =%6.2lf m\n\n");

        printf("Δx = x5 - x4\n");

        printf("   =%6.2lf m\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx =%6.2lf m\n\n");

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