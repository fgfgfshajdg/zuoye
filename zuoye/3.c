#include<stdio.h>
int main()
{
  int a,b,c,t;
  printf("请输入三个数字");
  scanf("%d%d%d",&a,&b,&c);
  if(b>a)
  {
    t=a;
    a=b;
    b=t;
  }
  if(c<b)
    {
    printf("%d%d%d",a,b,c);
    }
  else if(a>c&&b<c)
    {
      printf("%d%d%d",a,c,b);
      }
  else
{
  printf("%d%d%d",c,a,b);
}





    return 0;
}