#include <bits/stdc++.h>
using namespace std;
 
int cnt;
 
void dfs(int i, int j) { // ������ i���� ������ j�� 
     if(i > 13) return; 
     if(j > 13) return; // ��֦ ���������������13��ʱ���϶������ϡ� 
     if(j == 13) {
         cnt ++;
         return ;
     }
     dfs(i+1, j);
     dfs(i+1, j+1);
     dfs(i+1, j+2);
     dfs(i+1, j+3);
     dfs(i+1, j+4);
} 
 
 int main() {
     dfs(0, 0);
     printf("%d\n", cnt);
     return 0;
}

