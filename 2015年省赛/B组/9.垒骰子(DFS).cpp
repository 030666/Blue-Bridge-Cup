// ʱ�䣺2022.1.11 22��35��
// ע�����ַ���ֻ�ܵõ�30%�ķ��������������Ƚϴ��ʱ�򣬽��ᳬʱ 

#include<iostream>
#include<algorithm>

using namespace std;
#define MOD 1000000007
int op[7];//������������洢���ӵ����Ӧ��ϵ
bool conflict[7][7];
int n,m;

void init(){
    op[1]=4;
    op[4]=1;
    op[2]=5;
    op[5]=2;
    op[3]=6;
    op[6]=3;
}
//ans���������һ�㶨���˳��ϵ�����Ϊup������£��ݺ�cnt�����ӵķ�����
long long int dfs(int up,int cnt){
    long long ans=0;
    if(cnt==0)//�����Ѿ��ݹ鴦�����
        return 4;
    for(int upp=1;upp<=6;upp++){
        if(conflict[op[up]][upp]) continue;//�����һ�����ӵ�����ʹ�ʱ��ͻ��������´�ѭ��
        ans=(ans+dfs(upp,cnt-1))%MOD;
    }
    return ans;
}

int main()
{
    init();
    cin>>n>>m;
    
    for(int i=0;i<m;i++){//��¼��ͻ
        int x,y;
        cin>>x>>y;
        conflict[x][y]=true;
        conflict[y][x]=true;
    }
    long long ans=0;
    for(int up=1;up<=6;up++){//up�����һ��ݹ�ʱ���������ĵ�������1��6
        ans=(ans+4*dfs(up,n-1))%MOD;
//�����4��ԭ���ǵ���һ�����������ĵ���ȷ����֮�󣬲��������ת�Ĵ����Գ�4
    }
   printf("%lli",ans);
    return 0;
}
