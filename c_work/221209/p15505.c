#include <stdio.h>

int main()
{
    int a,n,b,t;
    a=0;
    t =0;
    b=0;
    n=0;
    printf("정수는 몇개를 입력할까요?");
    scanf("%d",&n);

    while(a<5)
    {
        printf("정수선택:");
        scanf("%lf",&b);
        t++;
        a++;
    }
    printf("합은 %lf",t);

return 0;
}