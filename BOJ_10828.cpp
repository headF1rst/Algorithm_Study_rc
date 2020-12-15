/* No. 10828 스택 */
#include<iostream>
#include<string>
using namespace std;

class Stack
{
private:
    int *stack;
    int top;
    int capacity;
public:
    Stack() 
    {
        top=-1; 
        capacity = 1001;
        stack = new int[capacity];
    }
    void Push(int &x);
    int Pop();
    int isEmpty();
    int showTop();
    int showSize();
};

void Stack::Push(int &x)
{
    /*if(top==capacity-1) //스택이 가득 차있을 경우
    {
        capacity*=2;
        int *temp = new int[capacity]; //두배 더 큰 배열 temp
        for(int i=0; i<=top; i++) temp[i]=stack[i]; 
        stack=temp; //stack이 이제 더 큰 배열 temp를 가리킴
        delete [] temp; //temp가 더이상 temp를 가리키지 않음
    }*/
    stack[++top]=x; //top을 한칸 올린후에 그 위치에 x를 삽입
}

int Stack::Pop()
{
    int x;
    if(top==-1) return -1; //스택이 비어서 삭제할 값이 없는경우 널값을 반환

    x=stack[top--]; //x에 스택의 top이 가리키는 값을 삽입한후 top을 한칸 내림
    return x;
}

int Stack::isEmpty()
{
    if(top==-1) return 1; //스택이 비었으면 1반환
    else return 0; //아니면 0반환 
}

int Stack::showTop()
{
    if(top==-1) return -1;
    return stack[top];
}

int Stack::showSize()
{
    return top+1;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Stack s;
    string inst; //명령어 
    int num_inst; //명령어의 개수 
    int num;
    
    cin>>num_inst;
    while(num_inst--)
    {
        cin>>inst;
        if(inst=="push")
        {
            cin>>num;
            s.Push(num);
        }
        else if(inst=="pop")
        {
            cout<<s.Pop()<<'\n';
        }
        else if(inst=="top")
        {
            cout<<s.showTop()<<'\n';
        }
        else if(inst=="size")
        {
            cout<<s.showSize()<<'\n';
        }
        else if(inst=="empty")
        {
            cout<<s.isEmpty()<<'\n';
        }
    }
    return 0;
}
