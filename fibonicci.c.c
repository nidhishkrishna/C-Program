#include<stdio.h>
int main ()
{
  int a = 0, b = 1, c;
printf("%d\n",a);
printf ("%d\n", b);

for(int i=2;i<30;i++)
{
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
}


}
