/* No. 1874 스택 수열 */
#include<iostream>
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
        capacity=100001;
        stack=new int[capacity];
    }
    int showStack() {return stack[top];}
    char Push(int &x);
    char Pop();
};

char Stack::Push(int &x)
{
    stack[++top] = x;
    return '+';
}

char Stack::Pop()
{
    top--;
    return '-';
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num,n=0;
    int j=0, k=1;
    cin>>num; //수열을 이루는 정수의 개수
    Stack s; //스택에는 1~num까지 순서대로 push하고 pop을 반복할것
    int *arr = new int[num]; //만들고 싶은 수열을 저장
    char *str = new char[num*2]; //+, - 저장한후 한번에 출력하기 위한 배열

    for(int i=0; i<num; i++) cin>>arr[i]; //수열을 입력

    while(j!=num)
    {
        if(arr[j]<s.showStack())
        {
            cout<<"NO";
            return 0;
        }

        if(arr[j]==s.showStack())
        {
            str[n]=s.Pop();
            j++;
        }
        else
        {
            str[n]=s.Push(k);
            k++;

        }
        n++;
    }
    for(int i=0; i<n; i++) cout<<str[i]<<'\n'; // +, - 결과 출력

    delete [] arr;
    delete [] str;
    return 0;
}
