// ʱ�䣺2022.1.10 18��13�� 
#include<iostream>
#include<algorithm>

using namespace std;

int w,n,m;
int main ()
{
	cin>>w>>m>>n;
	
	int rm,rn;//m��n���к�
	int cm,cn;//m��n���к�
    //�����������к�
    if(m%w==0) rm=m/w;
    else rm=m/w+1;
   
    if(n%w==0) rn=n/w;
    else rn=n/w+1;
    
    int res=0;//��¼��
    //�����������к�
    
    //��m���к�
    if(rm%2==0)//ż���У����ֵ�ڵ�һ��
        cm=(rm *w)-m+1;//+1��Ϊ����������1��ʼ
    else //�����У����ֵ�����һ��
        cm=m-((w*rm)-w+1)+1;
  
  
    //��n���к�
    if(rn % 2==0)//ż���У����ֵ�ڵ�һ��
        cn=rn*w-n+1;//+1��Ϊ����������1��ʼ
    else //�����У����ֵ�����һ��
        cn=n-((w*rn)-w+1)+1;
    
    res+=abs(rm-rn);
   
    res+=abs(cm-cn);
    
    cout<<res<<endl;
	return 0;
} 
