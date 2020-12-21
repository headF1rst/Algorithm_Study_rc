/* NO.2493 탑 */
#include<iostream>
#include<stack>
#include<utility>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, height;
    stack <pair<int, int> > s;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>height;
        while(!s.empty()) 
        {
            if(s.top().second>height) 
            {
                cout<<s.top().first<<' ';
                s.push(make_pair(i,height));
                break;
            }
            s.pop();//스택의 top값이 입력값보다 작으면 pop
        }

        if(s.empty()) //스택이 비었으면 0출력후 push
        {
            cout<<0<<' ';
            s.push(make_pair(i,height));
        }
    }
    return 0;
}
