// ʱ�䣺2022.1.12 16��10��
//�������֪�������ƽ�������������ָ���Ϊ10
//��������ȷ��ö�ٵķ�Χ�Ǵ�47��99

#include<iostream>
#include<cstring>
using namespace std;

bool flag;
int arr[11];
void cal(int x){
    while(x){
        arr[x%10]++;
        x=x/10;
    }
}
int main()
{
    for(int j=47;j<=99;j++){
        
       //����������һ���������ˣ�ÿ��ѭ��ǰ�ָ�
        memset(arr,0,sizeof arr);
        flag=false;
        
        int n=j*j;
        int m=j*j*j;
        cal(n);
        cal(m);
        
    for(int i=0;i<=9;i++)
        if(arr[i]!=1) flag=true;
      
    if(flag==false) {
        cout<<j<<endl;
        return 0;
       }
      
    }
    return 0;
}
