//  ʱ�䣺2021.11.24  15��41��
//  �㷨��dfs 
#include<iostream>
using namespace std;

int cnt,sum;//cut�������ĸ�����sum�������е�����
 
void dfs(int u){//�Ƶ�����
	if(sum>13||u>13)  return; 
	if(sum==13){//�ж����е����Ƿ��Ѿ����� 
		cnt++;
		return;
	} 
	for(int i=0;i<=4;i++){
		sum+=i;
		dfs(u+1);
		sum-=i;
	} 
	
}
int main ()
{
	dfs(0);//ע���ʱ��0 
	
	cout<<cnt<<endl;
	return 0; 
 } 
