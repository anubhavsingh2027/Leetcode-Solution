class LRUCache {

    class Node {
    public:
        int key;
        int value;
        Node*prev;
        Node*next;
        Node(int k,int v){
            this->key=k;
            this->value=v;
            prev=nullptr;
            next=nullptr;
        }
    };
    unordered_map<int,Node*>mp;
    int limit;
    Node*head=new Node(-1,-1);
    Node*tail=new Node(-1,-1);
    

    void addNode(Node*newNode){
        Node*oldNext=head->next;
        head->next=newNode;
        newNode->prev=head;
        newNode->next=oldNext;
        oldNext->prev=newNode;
    }
    void deleteNode(Node*oldNode){
      Node*  preNode=oldNode->prev;
      Node*  nextNode=oldNode->next;
        preNode->next=nextNode;
        nextNode->prev=preNode;
        delete oldNode;
    }
public:
    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
       if(mp.find(key)!=mp.end()){
        Node*required=mp[key];
        int value=required->value;
        mp.erase(key);
        deleteNode(required);
        Node*newNode=new Node(key,value);
        addNode(newNode);
        mp[key]=newNode;
        return value;
       }
       return -1;
    }
    
    void put(int key, int value) {

        //exist;
         if(mp.find(key)!=mp.end()){
            Node*OldNode=mp[key];
            deleteNode(OldNode);
            mp.erase(key);
        }
        //capacity reached
        if(mp.size()==limit){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        Node*newNode=new Node(key,value);
        addNode(newNode);
        mp[key]=newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */