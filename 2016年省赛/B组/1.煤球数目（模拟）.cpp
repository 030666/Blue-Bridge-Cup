// ʱ�䣺2022.1.12 20��57��
#include<iostream>
using namespace std;

int main()
{

    int n=1,m=2,res=0;//n����ǰ���ú������res�����ܵ�ú����
    for(int i=1;i<=100;i++)//100��
    {
        res+=n;
        n+=m;
        m++;//m����ÿ��ú����Ŀ֮��Ĳ� 
    }
    cout<<res<<endl;
    return 0;
    
}
