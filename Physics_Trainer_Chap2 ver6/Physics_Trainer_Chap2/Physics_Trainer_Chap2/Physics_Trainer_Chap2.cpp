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
    printf("돌을 %6.2lf m/s의 속력으로 수직하게 던져 올렸다. \n", velocity);

    printf("(a) 돌은 %6.2lf m에서 얼마나 빨리 운동하겠는가? \n\n", height);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");


    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy 입니다.\n\n");
        printf("답을 구하기 위해서 공식을 수정하면  v^2 = v0^2 + 2 * a * Δy 입니다.\n\n");
        printf("여기서 ( Δy = (높이 변화) = y - y0 ), ( v = 나중 속도 ), ( v0 = (처음 속도) = 22.0 m/s ), ( a(중력 가속도) = 9.80 m/s^2 ) 입니다.\n\n");
        printf("y는 최종 위치이고, y0는 초기 위치입니다.\n\n");
        printf("y0는 0이기 때문에 Δy는 %6.2lf m입니다.\n\n", height);
        printf("식에 대입하면  v^2 = (%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m 입니다.\n\n", velocity, g, height);
        printf("이때 a 에 (-)가 붙은 이유는 돌이 떨어지는 방향이 아래이기 때문에 (-)를 곱해줘야 합니다.\n\n");
        printf("v^2을 v로 바꿔주면 식은 v = sqrt((%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m) 입니다.\n\n", velocity, g, height);

        v = sqrt(velocity * velocity + 2 * (-g) * height);

        printf("v = %6.2lf m/s 입니다.\n\n", v);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("돌은 %6.2lf m에서 %6.2lf m/s로 운동합니다.\n\n", height, v);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");

        printf("관련 공식은 v = v0 + a * t 입니다.\n\n");
        printf("여기서 ( v = 나중 속도 ), ( v0 = (처음 속도) = 22.0 m/s ), ( a(중력 가속도) = 9.80 m/s^2 ), ( t = 시간 )입니다.\n\n");
        printf("답을 구하기 위해 공식을 수정하면 v - v0 = a * t 입니다.\n\n");
        printf("위로 던진 돌이%6.2lf m를 지나 최고점에서 정지하고 아래로 떨어지면서 다시%6.2lf m를 지나기 때문에 두 개의 식이 나옵니다.\n\n", height, height);
        printf("첫 번째 식은 v - v0= a * t1 입니다.\n\n");
        printf("두 번째 식은 -v - v0= a * t2 입니다.\n\n");
        printf("t1 = 돌이 올라가는 시간이고, t2 = 돌이 최고점을 지나서 내려오는 시간입니다.\n\n");
        printf("공식에 대입하면 첫 번째 식은 %6.2lf m/s - %6.2lf m/s = -%6.2lf m/s^2 * t1 입니다.\n\n", v, velocity, g);
        printf("공식에 대입하면 두 번째 식은 -%6.2lf m/s - %6.2lf m/s = -%6.2lf m/s^2 * t2 입니다.\n\n", v, velocity, g);

        t1 = (v - velocity) / -g;
        t2 = (-v - velocity) / -g;
        a = v - velocity;
        b = -v - velocity;

        printf("첫 번째 식을 풀면 t1 = (%6.2lf m/s -%6.2lf m/s) / -%6.2lf m/s^2 이 됩니다.\n\n", v, velocity, g);
        printf("t1 = %6.2lf m/s / -%6.2lf m/s^2 이 됩니다.\n\n", a, g);
        printf("두 번째 식을 풀면 t2 = (-%6.2lf m/s -%6.2lf m/s) / -%6.2lf m/s^2 이 됩니다.\n\n", v, velocity, g);
        printf("t2 = %6.2lf m/s / -%6.2lf m/s^2 이 됩니다.\n\n", b, g);
        printf("이 식을 풀면 t1 = %6.2lf s와 t2 = %6.2lf s 두 개의 답이 나옵니다.\n\n", t1, t2);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("돌이 올라갈 때 %6.2lf m 지점을 지나는 시간 t1 = %6.2lf s 이고\n", height, t1);
        printf("돌이 내려갈 때 %6.2lf m 지점을 지나는 시간 t2 = %6.2lf s 입니다.\n\n", height, t2);

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