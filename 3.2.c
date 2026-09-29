int main()
{
    double have = 1000;
    double p1 = have * (1 + 0.03 * 5);
    double p2 = have * (1 + 0.021 * 2) * (1 + 0.0275 * 3);
    double p3 = have * (1 + 0.0275 * 3) * (1 + 0.021 * 2);
    double p4 = have;
    for (int i = 0; i < 5; i++)
    {
        p4 = p4 * (1 + 0.015);

    }
    double p5 = have;
    for (int i = 0; i < 4*5; i++)
    {
        p5 = p5 * (1 + 0.0035 / 4);
    }
    printf("p1=%.6lf\np2=%.6lf\np3=%.6lf\np4=%.6lf\np5=%.6lf\n", p1, p2, p3, p4, p5);
    return 0;
}