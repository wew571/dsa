#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;      
    Node* next;    
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void push_front(Node* &head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void push_back(Node* &head, int x) {
    Node* newNode = new Node(x);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

void remove(Node* &head, int x) {
    if (head == nullptr) return;

    
    if (head->data == x) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }

    
    Node* temp = head;
    while (temp->next && temp->next->data != x)
        temp = temp->next;
        
    if (temp->next) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
}

void printList(Node* head) {
    if (head == nullptr) return;
    cout << head->data << " ";
    printList(head->next);
}

void print(Node* head){
    if (head == nullptr) return;
    printList(head->next);
    cout << head->data << " ";
}

int pow( int n){
    if ( n == 0) return 1;
    return 2 * pow(n-1);
}

int sum(int a){
    if ( a == 1 ) return 1;
    return a + sum(a-1);
}

int fib(int a){
    if (a == 0 ) return 0;
    if ( a == 1 ) return 1;
    return fib(a-1) + fib(a-2);
}

int dt( int a){
    if ( a == 0 || a == 1 ) return 1;
    return a * dt(a-1);
}

bool search(vector<int> &b , int n, int x ,int ind = 0){
    if ( n == ind) return 0;
    if (b[ind] == x) return 1;
    return search( b , n , x , ind +1);
}

stack<int> flip(vector<int> &b , int n, int idx = 0){
    static stack<int> st;
    if (n == idx) return st;
    st.push(b[idx]);
    return flip( b , n , idx + 1);
}

long long d = 0;
void toh(int n , char c1 , char c2 , char c3){
    if(n == 1) {
        d++;
        cout << d << " " << c1 << "->" << c2<< endl;
        
    }
}


int main(){
    int a ; cin >> a;
    vector<int> b(a);
    Node *head = nullptr;
    push_front(head , 5);
    push_front(head , 7);
    push_front(head , 9);
    
    
    for(int s = 0 ; s < b.size() ; s++) b[s] = s;
    int n = b.size();
    if (search(b, n,4))
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    stack<int> st = flip(b , n);
    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    cout << endl;
    printList(head);
    return 0;
}
