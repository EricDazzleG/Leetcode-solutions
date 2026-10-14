class LRUCache {
    struct Node{
        int key,value;
        Node *prev,*next;
        Node(int k,int v): key(k),value(v),prev(nullptr),next(nullptr){}
    };
    int cap;
    unordered_map<int,Node*> m;
    Node *head = new Node(-1,-1), *tail = new Node(-1,-1);
public:
    LRUCache(int capacity) : cap(capacity){
        head->next = tail;
        tail->prev = head;
    }
    void addnode(Node* newnode){
        Node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }
    void deletenode(Node* del){
        Node* prev = del->prev;
        Node* next = del->next;
        prev->next = next;
        next->prev = prev;
    }

    
    int get(int key) {
        if(m.find(key)!=m.end()){
            Node* resNode = m[key];
            int value = resNode->value;
            m.erase(key);
            deletenode(resNode);
            addnode(resNode);
            m[key] = head->next;
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node* exis = m[key];
            m.erase(key);
            deletenode(exis);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new Node(key,value));
        m[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */