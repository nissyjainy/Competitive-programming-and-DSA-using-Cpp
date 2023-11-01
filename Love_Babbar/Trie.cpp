#include <iostream>
using namespace std;
class TrieNode
{
    public:
    char data;
    TrieNode* Children[26];
    bool isTerminal;
    // constructor banau chu ok
    TrieNode(char ch)
    {
        data = ch;
        for(int i =0;i<26;i++)
        {
            Children[i] = NULL;
        }
        isTerminal=false;
    }
};
class Trie
{
    public :
    TrieNode* root;
    Trie()
    {
        root = new TrieNode('\0');
    }
void insertutil(TrieNode* root, string word)
{
    //base case
    if(word.length()==0)
    {
        root->isTerminal = true;
        return;
    }
    //assumption
    int index = word[0] - 'A'; // always for the index
    TrieNode * child;
    // present 
    if(root->Children[index]!=NULL)
    {
        child = root->Children[index];
    }
    // absent
    else{
    child = new TrieNode(word[0]);
    root->Children[index] = child;
    }

    insertutil(child,word.substr(1));

     
}
void Insert(string word)
{
      return  insertutil(root,word);
}

bool Searchutil(TrieNode* root, string word)
{
    // base case
    if(word.length()==0)
    {
        return root->isTerminal; // aana thi khabar padshe ki jo terminal che to word present che else nathi
    }
     int index = word[0] - 'A';
    TrieNode * child;
    // present 
    if(root->Children[index]!=NULL)
    {
        child = root->Children[index];
    }
    // absent
    else
    {
         return false;
    }

    Searchutil(child,word.substr(1));

}
bool Search(string word)
{
   return Searchutil(root,word);
}
};
int main()
{
    Trie *t = new Trie(); // memeory allocation che aa ok
    t->Insert("abcd");
    cout<<"Present or not " << t->Search("abcd") <<"\n";
    return 0;
}