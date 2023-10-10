#include<stdio.h>
void auto_f();
void static_f();
main()
{
    for(register int i=1;i<=5;i++)
        auto_f();
    for(register int i=1;i<=5;i++)
        static_f();
    return 0;
}
void static_f()
{
    static int j=1;
    printf("\nStatic j=%d",j);
    j++;
}
void auto_f()
{
    auto int k=1;
    printf("\nAuto k=%d",k);
    k++;

}
