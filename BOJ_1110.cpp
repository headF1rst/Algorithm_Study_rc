/* 1110번 더하기 사이클 */
#include<iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    int quotient, remain, sum;
    int temp; 
    int cnt=0;

    cin>>N;
    temp=N;
    while(1)
    {
        quotient=N/10;
        remain=N%10;
        sum=quotient+remain;
        quotient=sum%10; //quotient 재활용
        N=remain*10 + quotient;
        cnt++;
        if(temp == N) break;
    }
    cout<<cnt;

    return 0;
}
