#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, p;
    float s, area;

    printf("Enter three sides of the triangle:\n");
    scanf("%d%d%d", &a, &b, &c);

    p = a + b + c;
    s = p / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Perimeter = %d\nArea = %f\n", p, area);
    return 0;
}
