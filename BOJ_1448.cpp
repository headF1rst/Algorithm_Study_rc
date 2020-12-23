/* NO.1448  */
#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,sum;
    int *length;
    sum=-1;
    cin>>n;
    length=new int[n];

    for(int i=0; i<n; i++) cin>>length[i];
    
    sort(length, length+n); //입력받은 수들을 오름차순으로 정렬

    for(int i=n-1; i>=2; i--)
    {
        if(length[i]<length[i-1]+length[i-2])
        {
            sum+=length[i]+length[i-1]+length[i-2]+1;
            break;
        }
    }
    cout<<sum;
    return 0;
}
