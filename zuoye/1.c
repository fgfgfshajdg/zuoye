
#include<stdio.h>
int main()
{
    int a,b;
    printf("��������������");
    scanf("%d%d",&a,&b);
    int i=1,e;
    while (i<=b)
    {
        i=i+1;
        if(a%i==0&&b%i==0)
        {
        e=i;
        }
    }
    printf("���������%d",e);

    
    
    return  0;

}
        
    
    
