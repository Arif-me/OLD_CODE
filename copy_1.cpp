#include <iostream>
#include <string>
using namespace std;
void visit(string const& chars, size_t max_len, string const& cur) {
    if(cur.length() == max_len) {
      return;
    }
    else {
      for(auto c : chars) {
        string next = cur + c;
        cout << next << endl;
        visit(chars, max_len, next);
      }
    }
}

int main()
{
  visit("abcde", 5, "");
  return 0;
}
