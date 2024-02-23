//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class TrieNode{
    public:
    char data;
    TrieNode*children[10];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<10;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
class Trie{
    public:
    TrieNode*root;
    Trie(){
        root=new TrieNode('\0');
    }
    void insertUtil(TrieNode*root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        int index = word[0]-'0';
        TrieNode*child;

        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertUtil(child,word.substr(1));

    }
      void insertWord(string word){
        insertUtil(root,word);
    }  
};
int main(){
  Trie * t= new Trie();
  cout<<"JIGAR"<<endl;
  t->insertWord("JIGAR");
  t->insertWord("JIGARA");
  t->insertWord("JIGARAO");
  
return 0;
}