#include<stdio.h>
#include<stdbool.h>


void algorithm_1(bool c[], int n)
{
    int i,j;
    c[1]=false;
    i=2;
    while (i<=n)
    {
        if (c[i]==true)
        {
            j=2*i;
            while(j<=n)
            {
                c[j]=false;
                j=j+i;
            }
        }
        i++;
    }
}

void algorithm_2(bool c[],int n)
{
    int i,j;
    c[1]=false;
    i=2;
    while(i<=n)
    {
        j=2*i;
        while(j<=n)
        {
            c[j]=false;
            j=j+i;
        }
        i++;
    }
}

void algorithm_3(bool c[], int n)
{
    int i,j;
    c[1] = false;
    i=2;
    while(i<=n)
    {
        if(c[i]==true)
        {
            j=i+1;
            while(j<=n)
            {
                if(j%i==0)
                {
                    c[j]=false;
                }
                j++;
            }
        }
        i++;
    }
}

algorithm_4(bool c[],int n)
{
    c[1]=false;
    int i=2,j;
    while(i<=n)
    {
        j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                c[i]=false;
            }
            j++;
        }
        i++;
    }
}

algorithm_5(bool c[],int n)
{
    c[1]=false;
    int i=2,j;
    while(i<=n)
    {
        j=2;
        while(j<=sqrt(i))
        {
            if(i%j==0)
            {
                c[i]=false;
            }
            j++;
        }
        i++;
    }
}

int main(){
    int n=5000,i;
    bool c[5000];

    for (i=1;i<=n;i++)
    {
        c[i] = true;
    }

    //algorithm_1(c,n);
    //algorithm_2(c,n);
    //algorithm_3(c,n);
    //algorithm_4(c,n);
    algorithm_5(c,n);

    for (i=1;i<=n;i++)
    {
        if(c[i]==true)
        {
            printf("%d\n",i);
        }
    }
}
