/* NO.1158 요세푸스 문제 */
#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k;
    queue<int> q;
    cin>>n>>k;
    for(int i=1; i<=n; i++) q.push(i);

    cout<<'<';
    for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<k; j++)
        {
            q.push(q.front()); //원형으로 만들기 위함
            q.pop();
        }
        cout<<q.front()<<", "; //k번째 출력하고 제거
        q.pop();
    }
    cout<<q.front()<<'>';
    return 0;
}
