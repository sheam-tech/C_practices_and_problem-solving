#include <stdio.h>
long binary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum != 0)
    {
        rem = decimalnum % 2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem * temp;
        temp = temp * 10;
    }
    return binarynum;
}
int main()
{
    char name[] = "Bipul";
    int v, z;
    for (int i = 0; i < 5; i++)
    {
        v = name[i];
        z = binary(v);
        printf("%c=%d\tBinary=%d\n", name[i], name[i], z);
    }
    return 0;
}
