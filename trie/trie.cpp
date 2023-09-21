#include <bits/stdc++.h>
using namespace std;
class Node
{

      char data;
      unordered_map<char, Node *> m;
      bool isTerminal;

public:
      Node(char d)
      {
            data = d;
            isTerminal = false;
      }
      friend class Trie;
};
class Trie
{
      Node *root;

public:
      Trie()
      {

            root = new Node('\0');
      }
      // insertion
      void insert(string s)
      {
            Node *temp = root;
            for (char ch : s)
            {
                  if (temp->m.count(ch) == 0)
                  {
                        Node *n = new Node(ch);
                        temp->m[ch] = n;
                  }
                  temp = temp->m[ch];
            }
            temp->isTerminal = true;
      }

      // searching
      bool find(string s)
      {
            Node *temp = root;
            for (char ch : s)
            {
                  if (temp->m.count(ch) == 0)
                  {
                        return false;
                  }
                  temp = temp->m[ch];
            }
            return temp->isTerminal;
      }
};

int main()
{

      string s[] = {"hello", "he", "apple", "aple", "news"};
      Trie t;
      for (auto str : s)
      {
            t.insert(str);
            cout << str << ",";
      }

      string key;
      cin >> key;

      cout << t.find(key) << endl;

      return 0;
}