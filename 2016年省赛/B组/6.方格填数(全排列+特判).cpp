// ʱ�䣺2022.1.13 22��57�� 
// �𰸣�1580 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//����ά��������һά���� 
int arr[]={0,1,2,3,4,5,6,7,8,9};
//string arr="0123456789";  Ҳ����ʹ��string 
bool check(int x,int y)
{
	if(abs(arr[x]-arr[y])==1) return true;//�������������ڷ����� 
	return false;
 } 
int main()
{
	int res=0; 
	do
	{
		
		//�жϺ��������
		 if(check(0,1)) continue;
		 if(check(1,2)) continue;
		 if(check(3,4)) continue;
		 if(check(4,5)) continue;
		 if(check(5,6)) continue;
		 if(check(7,8)) continue;
		 if(check(8,9)) continue;
		//�ж����������
		if(check(3,7)) continue;
		if(check(0,4)) continue;
		if(check(4,8)) continue;
		if(check(1,5)) continue;
		if(check(5,9)) continue;
		if(check(2,6)) continue;
		//�ж����Խǵ�����
		if(check(0,3)) continue; 
		if(check(1,4)) continue;
		if(check(4,7)) continue;
		if(check(2,5)) continue;
		if(check(5,8)) continue;
		if(check(6,9)) continue;
		//�жϸ��Խ��ߵ�����
		if(check(3,8)) continue; 
		if(check(4,9)) continue;
		if(check(0,5)) continue;
		if(check(1,6)) continue;
		 res++;
	}while(next_permutation(arr,arr+10));
	
	cout<<res<<endl; 
	return 0;
}
