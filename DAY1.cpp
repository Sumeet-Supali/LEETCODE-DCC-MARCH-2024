#include <iostream>
using namespace std;

int main()
{
  string s = "101";
  int ones = 0, zeros = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '1')
      ones++;
    if (s[i] == '0')
      zeros++;
  }

  string ans = string(ones - 1, '1') + string(zeros, '0') + '1';
  cout << ans;
}