// ʱ�䣺2022.1.11 23��36�� 
#include<iostream> 
using namespace std;

int main()
{
//ͨ�������֪������������һ�������ֵ���ᳬ��32 
//��Ϊ��ĿҪ�������С����������j��k����Сֵ���Բ���
//��1��ʼ������Ҳ���������ݵ��ظ���� 
	for(int i=1;i<=32;i++)
		for(int j=i;j<=32;j++){
			if(i*i+j*j>1000) continue; 
			for(int k=j;k<=32;k++)
				if(i*i+j*j+k*k==1000)
					cout<<"i= "<<i<<" j= "<<j<<" k= "<<k<<endl;
	}
	return 0;
}
