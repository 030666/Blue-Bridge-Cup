//  ʱ�䣺2021.11.23  21��05��
//  ˼·������ʼ���ڱ�Ϊ8λ���֣�Ȼ�����μ�һ������������ڵ��������һ
// ֱ�����������Ĵ���������Ŀ��������n 
#include<iostream>
using namespace std;

int year,month,day,n;
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//����ǲ������꺯��
bool check(int year) {
     if(year%400 == 0) return true;
     if(year%4==0 && year%100!=0) return true;
     return false;
} 
//�ж����ĺϷ���
bool test(int t)
{//��һ�����Ƚ�����ת��Ϊ�·���ʽ 
	int x=t%100;//�� 
    int y=t/100%100;//��
	int z=t/10000;//�� 
	
	if(y==0||y>12)  return false;
	if(x==0||(y!=2&&x>days[y]))  return false;
	
	if(y==2&&x>28+check(z))  return false;
	
	return true;
} 
int main ()
{
	
	while(cin>>year>>month>>day>>n){
		int s=year*10000+month*100+day;//�Ƚ��ʼ������ת����һ��8λ��
		int res=0,t=0;
		for(int i=s;i<=20200101;i++){//Ȼ�����θ��������һ�������Ϸ��� 
			if(test(i)){
				res++;	//ֻ�е���ʱ��i�ǺϷ������ڵ�ʱ��ż��� 
				t=i;
			}
			if(res>n) break;//��Ϊi�Ǵ�s��ʼ�ģ�������Ҫ��res>n��ʱ���˳�ѭ�� 
		}
		int x=t%100;//�� 
		int y=t/100%100;//��
		int z=t/10000;//�� 
		
		printf("%d-%02d-%02d\n",z,y,x); 
	}
    return 0;
 } 
