/* 10845번 큐 */
#include<iostream>
using namespace std;

class Queue
{
private:
    int *queue;
    int front;
    int rear;
    int capacity;
public:
    Queue();
    void Push(int &x);
    void Pop();
    void showSize();
    void isEmpty();
    void showFront();
    void showBack();
};

Queue::Queue()
{
    capacity=10001;
    queue=new int[capacity];
    front=rear=0;
    
}

void Queue::Push(int &x)
{
    queue[rear++] = x; //x삽입한 후에 rear를 한칸뒤로 이동
}

void Queue::Pop() //FIFO
{
    if(queue[front]==NULL) cout<<"-1\n";
    else
    {
        cout<<queue[front]<<'\n';
        front++;
    }
    
}

void Queue::showSize()
{
    cout<<rear-front<<'\n';
}

void Queue::isEmpty()
{
    if(front==rear) cout<<"1\n";
    else cout<<"0\n";
}

void Queue::showFront()
{
    if(front==rear) cout<<"-1\n";
    else cout<<queue[front]<<'\n';
}

void Queue::showBack()
{
    if(front==rear) cout<<"-1\n";
    else cout<<queue[rear-1]<<'\n';
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Queue q;
    int num_inst, n;
    string str;
    cin>>num_inst; //수행할 명령어 횟수 입력
    
    while(num_inst--)
    {
        cin>>str;

        if(str=="push")
        {
            cin>>n;
            q.Push(n);
        }
        else if(str=="pop") q.Pop();
        else if(str=="size") q.showSize();
        else if(str=="empty") q.isEmpty();
        else if(str=="front") q.showFront();
        else if(str=="back") q.showBack();
    }
    return 0;
}
