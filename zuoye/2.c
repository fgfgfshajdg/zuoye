#include<stdio.h>
int main()
{
    int ch,i;
    
printf("请输入一个英语句子");
i=getchar();
if(i>='a'&&i<='z')
{
    printf("%c",i-32);
}
else
{
    printf("%c",i);
}
printf("%c",i);
while ((ch=getchar())!='\n')
{
    printf("%c",ch);
}




    return 0;
}