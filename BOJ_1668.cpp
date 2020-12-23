/* NO.1668 트로필 진열 */
#include<iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,cnt,max;
    max=cnt=0;
    int *height;
    cin>>n;
    height=new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>height[i];
        if(height[i]>max) 
        {
            cnt++;
            max=height[i];
        }
    }
    cout<<cnt<<'\n';
    
    max=cnt=0;

    for(int i=n-1; i>=0; i--)
    {
        if(height[i]>max) 
        {
            cnt++;
            max=height[i];
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
