/* NO.1789 수들의합 */
#include<iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unsigned long s,sum; //자연수 s의 범위가 (1 ≤ S ≤ 4,294,967,295)이므로 usigned long 자료형 선언
    int cnt;
    int num=1;
    cnt=sum=0;
    cin>>s;
    while(1)
    {
        sum+=num;
        cnt++;
        if(sum>s)
        {
            cnt--;
            break;
        }
        num++;
    }
    cout<<cnt;
    return 0;
}
    
