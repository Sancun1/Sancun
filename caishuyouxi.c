#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int a = 0;
    printf("wo yijing xianghaole yige 1 dao 100 zhijian de shu,");
    do{
       printf("caicai zhege 1 dao 100 zhijian de shu.");
       scanf("%d",&a);
       count ++;
       if(a > number ){
    printf("ni caide shu dale,");
}    
       else if (a < number )
{
       printf("ni caide shu xiaole,");
}
}
       while (a != number);
       printf("taihaole,ni yongle  %d  ci jiu caidao le daan. \n",count);
    printf("a=%d\n",a);
    
    printf("++a=%d\n",++a);
    printf("a=%d\n",a);
  
    return 0;
}

