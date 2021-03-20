// https://www.bilibili.com/video/BV1ei4y1V758?p=2
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    printf("begin\n");

    if(fork()!=0)
    {
        printf("我是父进程：pid=%d,ppid=%d\n",getpid(),getpid());

        int ii;
        for(ii=0;ii<10;ii++)
        {
            printf("ii=%d\n",ii);
            sleep(1);
        }

        exit(0);

    }
    else
    {
        printf("我是子进程：pid=%d,ppid=%d\n",getpid(),getpid());

        int jj;
        for(jj=0;jj<10;jj++)
        {
            printf("jj=%d\n",jj);
            sleep(1);
        }

        exit(0);
    }
}