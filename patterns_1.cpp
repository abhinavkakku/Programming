#include<iostream>

using namespace std;

int main()
{
    int N=6,i=1;
    while(i<=N)
    {
        if(i%2==0)
        {
            printf("1");
            for(int j=2;j<i-2;j++)
            {
                printf("0");
            }
            printf("1");
        }
        else
        {
            for(int k=1;k<=i;k++)
            {
                printf("1");
            }
        }
        printf("\n");
        i++;
    }
}