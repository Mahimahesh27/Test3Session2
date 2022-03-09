#include<stdio.h>
typedef struct _fraction 
{
    int Num,Den;
}F;
F input_fraction()
{
    F f;
    printf("enter num,den: \n ");
    scanf("%d%d",&f.Num,&f.Den);
    return f;
}
F smallest_fraction(F f1,F f2,F f3)
{
    int cd=f1.Den*f2.Den*f3.Den;
    int f1num=(f1.Num*cd)/f1.Den;
    int f2num=(f2.Num*cd)/f2.Den;
    int f3num=(f3.Num*cd)/f3.Den;
    if(f1num<f2num && f1num<f3num)
    {
        return f1;
    }
    else if(f2Num<f3Num)
    {
        return f2;
    }
    else
    {
        return f3;
    }
}
void output(F f1,F f2,F f3,F smallest)
{
    if(f1.Num==smallest.Num && f1.Den==smallest.Den)
    {
        printf("the smallest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.Num,f1.Den,f2.Num,f2.Den,f3.Num,f3.Den,smallest.Num,smallest.Den);
    }
    else if(f2.Num==smallest.Num && f2.Den==smallest.Den)
    {
         printf("the smallest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.Num,f1.Den,f2.Num,f2.Den,f3.Num,f3.Den,smallest.Num,smallest.Den);
    }
    else
    {
         printf("the smallest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.Num,f1.Den,f2.Num,f2.Den,f3.Num,f3.Den,smallest.Num,smallest.Den);
    }
}
int main()
{
    F f1,f2,f3,smallest;
    f1=input_fraction();
    f2=input_fraction();
    f3=input_fraction();
    smallest=smallest_fraction(f1,f2,f3);
    output(f1,f2,f3,smallest);
    return 0;
}

