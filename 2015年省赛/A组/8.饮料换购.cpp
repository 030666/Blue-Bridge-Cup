// ʱ�䣺2022.1.12 20��16�� 
#include<iostream>
using namespace std;

int n,res;//n��ʾ��ǰ����������res����ȵ������� 
int main ()
{
	cin>>n;
	while(n>=3){
		n=n-3+1;
		res+=3;
	}
	//�����Ҫ������3ƿ�����Ϻȵ�
	res+=n; 
	cout<<res<<endl;
 } 
