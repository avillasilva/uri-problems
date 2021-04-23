#include <stdio.h>

int main()
{
    int t, pa, pb, y;
    float g1, g2;

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);

        y = 0;
        g1 /= 100.0;
        g2 /= 100.0;

        while (pb >= pa)
        {
            pa += (int)pa * g1;
            pb += (int)pb * g2;
            y++;
        }

        if (y <= 100)
        {
            printf("%d anos.\n", y);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }

        t--;
    }
}