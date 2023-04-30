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

    printf("(a) 돌은 %6.2lfm에서 얼마나 빨리 운동하겠는가? \n", height);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");


    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy 입니다.\n");
        printf("답을 구하기 위해서 공식을 수정하면  v^2 = v0^2 + 2 * a * Δy 입니다.\n");
        printf("Δy : 거리변화, v : 나중 속도, v0 : 처음 속도, a : 중력 가속도\n");
        printf("Δy = y - y0, v = 나중 속도, v0 = %6.2lfm/s , a = %6.2lfm/s^2\n", velocity_m_s, g);
        printf("초기 위치 y0 = 0m이고, 나중 위치 y는 %6.2lfm입니다.\n", height);
        printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm 입니다.\n", velocity_m_s, g, height);
        printf("이때 a 에 (-)가 붙은 이유는 돌이 떨어지는 방향이 아래이기 때문에 (-)를 곱해줘야 합니다.\n");
        printf("따라서 나중속도 v = sqrt((%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm) 이므로\n", velocity_m_s, g, height);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n");

        printf("나중 속도 v = %5.2lfm/s 입니다.\n", velocity_f);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");

        printf("관련 공식은 v = v0 + a * t 입니다.\n");
        printf("답을 구하기 위해 공식을 수정하면 v - v0 = a * Δt 입니다.\n");
        printf("v : 나중 속도, v0 : 처음 속도, a : 중력 가속도, Δt : 시간변화량\n");
        printf("v = %6.2lfm/s, v0 = %6.2lfm/s, a = %6.2lfm/s^2, Δt = Δv / a\n", velocity_f, velocity_m_s, g);
        printf("위로 던진 돌이 %6.2lfm를 지나 최고점에서 정지하고 아래로 떨어지면서 다시 %5.2lfm를 지나기 때문에 두 개의 식이 나옵니다.\n", height, height);
        printf("첫 번째 식은  v - v0= a * t1 입니다.\n");
        printf("두 번째 식은 -v - v0= a * t2 입니다.\n");
        printf("t1 = 돌이 올라가는 시간, t2 = 돌이 최고점을 지나서 내려오는 시간입니다.\n");;
        printf(" %6.2lfm/s - %6.2lfm/s = -%6.2lfm/s^2 * t1 입니다.\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lfm/s - %6.2lfm/s = -%6.2lfm/s^2 * t2 입니다.\n", velocity_f, velocity_m_s, g);

        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf("따라서 t1 = %6.2lfm/s / -%6.2lfm/s^2 입니다.\n", delta_velocity1, g);
        printf("따라서 t2 = %6.2lfm/s / -%6.2lfm/s^2 입니다.\n", delta_velocity2, g);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n");

        printf("돌이 올라갈 때 %6.2lfm 지점을 지나는 시간 t1 = %6.2lfs 입니다.\n", height, time_1);
        printf("돌이 내려갈 때 %6.2lfm 지점을 지나는 시간 t2 = %6.2lfs 입니다.\n", height, time_2);

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
