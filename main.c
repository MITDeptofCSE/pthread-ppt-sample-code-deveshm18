#include<stdio.h>
#include<pthread.h>

int sum;
void *runner(void *param);

int main(int argc,char *argv[])
{
  pthread.t tid;
  pthread.attr.t attr;
  if(args !=2) {
    fprintf(stderr,"usage: a.out <integer value>\n");
    return -1;
  }
  if(atoi(argv[1]<0)) {
    fprintf(stderr,"%d must be >=0\n",atoi(argv[1]));
    return -1;
  }
  pthread.attr.init(&attr);
  pthread.create(&tid,&attr,&attr,runner,argv[1]);
  pthread.join(tid,NULL);
  printf("sum= %d\n",sum);
  //Add your code below
}
void *runner(void *param) {
  int i,upper=atoi(param);
  sum=0;
  for(i=1;i<=upper;++i)
    sum+=i;
  pthread.exit(0);
}
