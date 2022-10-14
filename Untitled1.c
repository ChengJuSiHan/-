#include <stdio.h>
int main()
  {
      int i,j,N,m,n;
      scanf("%d %d %d",&N,&i,&j);    //输入N,i,j;
      for(m=1;m<=N;m++)              //准备输出同一行上格子的位置
        printf("(%d,%d) ",i,m);
      printf("\n");
      for(m=1;m<=N;m++)              //准备输出同一列上格子的位置
        printf("(%d,%d) ",m,j);
      printf("\n");
      if(i<j){                        //准备输出左上到右下对角线上的格子的位置
        for(m=1,n=1+j-i;n<=N;n++,m++)
            printf("(%d,%d) ",m,n);
        printf("\n");
      }
      else{
        for(n=1,m=1+i-j;m<=N;n++,m++)
            printf("(%d,%d) ",m,n);
        printf("\n");
      }
       if(i+j<N+1){                     //准备输出左下到右上对角线上的格子的位置
        for(n=1,m=i+j-1;m>0;n++,m--)
        printf("(%d,%d) ",m,n);
       }
       else{
        for(n=i+j-N,m=N;n<=N;n++,m--)
       printf("(%d,%d) ",m,n);
       }
  }
