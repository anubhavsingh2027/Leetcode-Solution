class MyHashSet {
    vector<bool>mp;
public:
    MyHashSet() {
        mp.resize(1000005, false);
    }
    
    void add(int key) {
        mp[key]=true;
    }
    
    void remove(int key) {
      mp[key]=false;
    }
    
    bool contains(int key) {
         return mp[key];
    }
};

