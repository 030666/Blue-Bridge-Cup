// ʱ�䣺2022.1.13 19��31�� 
#include <stdio.h>
#define N 6
#define M 5
#define BUF 1024

void f(int a[], int k, int m, char b[])
{
    int i,j;

    if(k==N){
        b[M] = 0;//�ַ�����β�ı�־ 
        if(m==0) printf("%s\n",b);
        return;
    }
	//k��a������±�  m������������ʼΪ5 
    for(i=0; i<=a[k]; i++){//ö�ٵ�k������ȥ������ 
        for(j=0; j<i; j++) b[M-m+j] = k+'A';//����ַ�������i�˾���i�����ҷ��ţ�k+'A�� 
        f(a,k+1,m-i,b);  //mӦ����ȥi, ��Ϊ��k������ȥ��i���� 
    }
}
int main()
{
    int  a[N] = {4,2,2,1,1,3};
    char b[BUF];
    f(a,0,M,b);
    return 0;
}
