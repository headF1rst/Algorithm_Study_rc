/* NO. 2504 괄호의 값 */
#include<iostream>
using namespace std;

class Stack
{
private:
    char *stack;
    int top;
    int capacity;
public:
    Stack() {top=-1; capacity=30; stack=new char[capacity];}
    void Push(char x);
    int Pop();
    char Showtop() {return stack[top];}
    int isEmpty();
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
        return 0;
    }
}

int Stack::isEmpty() //스택이 비었으면 1, 아니면 0반환
{
    if(top==-1) return 1;
    else return 0;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Stack s;
    int temp=1;
    int result=0;
    int check=1; //정상적인 종료인지 확인해 주는 변수. 정상종료 = 1, 도중에 종료 = 0
    string str;
    cin>>str;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='(')
        {
            s.Push('(');
            temp*=2;
        }
        if(str[i]=='[')
        {
            s.Push('[');
            temp*=3;
        }
        if(str[i]==')' && (s.isEmpty() || s.Showtop()!='('))
        {
            check=0;
            break;
        }
         if(str[i]==']' && (s.isEmpty() || s.Showtop()!='['))
        {
            check=0;
            break;
        }
        if(str[i]==')')
        {
            if(str[i-1]=='(') result+=temp;//()인경우 +
            s.Pop();
            temp/=2; 
        }
        if(str[i]==']')
        {
            if(str[i-1]=='[') result+=temp; //[]인경우 +
            s.Pop();
            temp/=3;
        }
    }
    if(check==0 || !s.isEmpty()) cout<<0; //위의 break문에 의해 반복문이 종료되었거나 스택이 안비었을경우 ex. ), ]이 몇개 존재할 경우
    else cout<<result;
    
    return 0;
}
