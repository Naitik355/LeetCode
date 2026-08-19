class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            next=nullptr;
        }
    };
    Node* head;
    Node* tail;
    int size=0;
    MyLinkedList() {
        head=nullptr;
        tail=nullptr;
        size=0;
    }
    
    int get(int index) {
        int count=0;
        Node* temp=head;
        if(index>=size || index<0) return -1;
        while(count!=index){
            temp=temp->next;
            count++;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0||index>size) return;
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>=size) return;
        if(index==0){
            head=head->next;
            size--;
            if(size==0)tail=nullptr;
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }   
        Node* deleteNode=temp->next;
        temp->next=deleteNode->next;
        if(index==size-1)tail=temp;
        delete deleteNode;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
