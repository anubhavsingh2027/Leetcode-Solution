class MyHashSet {
    vector<int>mp;
public:
    MyHashSet() {
        mp.resize(1000005, -1);
    }
    
    void add(int key) {
        mp[key]+=1;
    }
    
    void remove(int key) {
      mp[key]=-1;
    }
    
    bool contains(int key) {
         return mp[key]!=-1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */