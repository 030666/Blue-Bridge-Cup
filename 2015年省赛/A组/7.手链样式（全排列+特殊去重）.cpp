// ʱ�䣺2022.1.12 17��03�� 
#include<iostream>
#include<string>
#include<algorithm>
#include<vector> 
using namespace std;

int main()
{
	string s="aaabbbbccccc";
	vector<string>v1;
	int ans=0;
	do
	{
		//�ų��ظ�������v1�е�ÿ��Ԫ�ؽ��м�飬���
		//����s����ת���߷�ת��������
		int i=0; 
		for(;i<v1.size();i++){
			if(v1[i].find(s)!=string::npos ) break;
		} 
		//s�����õ���� 
		if(i!=v1.size()) continue;
		string s2=s+s; 
		v1.push_back(s2); //s+s��Ϊ�˽���ַ�����ת����
		//�ַ���s`�Ƿ���s����ת�ȼ���s`�Ƿ���s+s���ִ� 
		reverse(s2.begin(),s2.end());
		v1.push_back(s2);//��s�ķ�ת����vector�� 
		
		ans++;
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans<<endl;
	return 0;
}
