// ʱ�䣺2022.1.12 21��09�� 
#include<iostream>
using namespace std;
int main ()
{
	
	for(int i=1;i<=236;i++){//i��ʾ�Ӷ����꿪ʼ������ 
		int res=0;
		for(int j=i;j<236;j++){//���ѭ�������ҵ���i�꿪ʼ�������Ƿ��ܹ�236
		 	res+=j;
		 	if(res==236){
		 		cout<<i<<endl;
		 		return 0;
			 }
			
		} 
	}

	return 0; 
}
