 class TrieNode
{
public:
  char data;
  TrieNode *children[26];
  bool isTerminal;

  TrieNode(char c)
  {
    this->data = c;
    for (int i = 0; i < 26; i++)
    {
      children[i] = nullptr;
    }
    this->isTerminal = false;
  }
};


class Trie {
   
 TrieNode *root;

  void insertUtil(TrieNode *root, string &word,int i)
  { // base case
   if (i==word.size())
    {
      root->isTerminal = true;
      return;
    }
    // assumption  on word all in small
    int index = word[i] - 'a';
    TrieNode *child;

    // present
    if (root->children[index] != nullptr)
    {
      child = root->children[index];
    }
    // absent
    else
    {
      child = new TrieNode(word[i]);
      root->children[index] = child;
    }
    // recursion call;
    insertUtil(child, word,i+1);
  }

  bool searchUtil(TrieNode *root, string &word,int i)
  {
    // base case
    if (i==word.size())
    {
      return root->isTerminal;
    }

    int index = word[i] - 'a';
    TrieNode *child;
    // present
    if (root->children[index] != nullptr)
    {
      child = root->children[index];
    }
    // absent
    else
    {
      return false;
    }
    return searchUtil(child, word,i+1);
  }

  bool startUtil(TrieNode *root, string &word,int i){
    if(i==word.size()){
        return true;
    }
    int index=word[i]-'a';
    TrieNode*child;
    if(root->children[index]!=nullptr){
        child=root->children[index];
    }
    else{
        return false;
    }
    return startUtil(child,word,i+1);
  }

public:
    Trie() {
         root = new TrieNode('\0');
    }
    
    void insert(string word) {
        insertUtil(root,word,0);
        
    }
    
    bool search(string word) {
       return  searchUtil(root, word,0);
        
    }
    
    bool startsWith(string prefix) {
        return startUtil(root,prefix,0);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */