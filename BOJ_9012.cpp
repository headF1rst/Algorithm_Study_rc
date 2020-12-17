/* NO. 9012 괄호 */
#include<iostream>
using namespace std;

class Stack
{
private:
    char *stack;
    int top;
    int capacity;
public:
    Stack() {capacity=50; top=-1; stack=new char[50];}
    void Push(char x);
    int Pop();
    int isEmpty();
    void clearStack();
};

void Stack::Push(char x)
{
    stack[++top]=x;
}

int Stack::Pop()
{
    if(top==-1) return -1;
    else 
    {
        top--;
        return 1;
    }
}

int Stack::isEmpty()
{
    if(top==-1) return 1;
    else return 0;
}

void Stack::clearStack()
{
    top=-1;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Stack s;
    string str;
    int t;
    int check;
    cin>>t; // 입력할 데이터의 수

    while(t--)
    {
        s.clearStack(); //스택을 전부 초기화 시켜준다.
        check=0; //문자열을 전부 확인한 후인지 체크하기 위한 변수
        cin>>str; //괄호들 입력
    
        for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]=='(') s.Push('(');
            if(str[i]==')')
                if(s.Pop() == -1)
                {
                    cout<<"NO\n";
                    check=1;
                    break;
                }
        }
        if((check!=1) && (!s.isEmpty())) cout<<"NO\n";
        else if(check!=1) cout<<"YES\n";
    }
    return 0;
}
