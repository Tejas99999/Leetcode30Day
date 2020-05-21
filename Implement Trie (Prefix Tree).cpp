struct node
{
    node* next[26];
    bool end;
};


class Trie {
     node*root;
public:
    /** Initialize your data structure here. */
    Trie() {
      root=getnode();

    }
    node* getnode()
    {
        node* temp=new node;
        for(int i=0;i<26;i++)
        {
            temp->next[i]= NULL;
        }
        temp->end=false;
        return temp;
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
        node*temp=root;
        for(int i=0;i<word.length();i++)
        {
            int value=word[i]-'a';
            cout<<value;
            if(!temp->next[value])
                temp->next[value]=getnode();
            temp=temp->next[value];
        }
        temp->end=true;

    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        node*temp=root;
       for(int i=0;i<word.length();i++)
       {
           int value=word[i]-'a';
           if(temp->next[value])
               temp=temp->next[value];
           else
               return false;
        }
        if(temp->end==true)
            return true;
        return false;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
          node*temp=root;
       for(int i=0;i<prefix.length();i++)
       {
           int value=prefix[i]-'a';
           if(temp->next[value])
               temp=temp->next[value];
           else
               return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
