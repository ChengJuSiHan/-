#include <stdio.h>
int main()
  {
      int i,j,N,m,n;
      scanf("%d %d %d",&N,&i,&j);    //����N,i,j;
      for(m=1;m<=N;m++)              //׼�����ͬһ���ϸ��ӵ�λ��
        printf("(%d,%d) ",i,m);
      printf("\n");
      for(m=1;m<=N;m++)              //׼�����ͬһ���ϸ��ӵ�λ��
        printf("(%d,%d) ",m,j);
      printf("\n");
      if(i<j){                        //׼��������ϵ����¶Խ����ϵĸ��ӵ�λ��
        for(m=1,n=1+j-i;n<=N;n++,m++)
            printf("(%d,%d) ",m,n);
        printf("\n");
      }
      else{
        for(n=1,m=1+i-j;m<=N;n++,m++)
            printf("(%d,%d) ",m,n);
        printf("\n");
      }
       if(i+j<N+1){                     //׼��������µ����϶Խ����ϵĸ��ӵ�λ��
        for(n=1,m=i+j-1;m>0;n++,m--)
        printf("(%d,%d) ",m,n);
       }
       else{
        for(n=i+j-N,m=N;n<=N;n++,m--)
       printf("(%d,%d) ",m,n);
       }
  }
