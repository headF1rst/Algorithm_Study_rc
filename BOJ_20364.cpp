/* NO.20364 부동산 다툼 */
#include<iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,q,x,exist;
    int check;
    int *area; 
    cin>>n>>q;
    area=new int[n];

    for(int i=0; i<q; i++)
    {
        check=0;
        cin>>x;

        for(int j=x; j!=1; j/=2) //부모노드가 비어서 원하는 땅에 갈수있는지 확인하기 위한 반복문
        {
            if(area[j-1]) //오는길에 이미 점유한 땅이 있을경우
            {
                check=1;
                exist=area[j-1]; 
                continue;
            }
        }

        if(!check) //원하는 땅에 갈수있는 경우
        {
            cout<<0<<'\n';
            area[x-1]=x;
        }
        else cout<<exist<<'\n';
    }
    return 0;
}
