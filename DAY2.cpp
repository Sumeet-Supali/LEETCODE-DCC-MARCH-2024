#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> nums = {-7, -3, 2, 3, 11};
  int n = nums.size();
  vector<int> v(n, 0);

  int i = 0;
  for (auto ele : nums)
  {
    int square = ele * ele;
    nums[i++] = square;
  }

  // two pointer approach
  int head = 0;
  int tail = n - 1;
  for (int i = n - 1; i >= 0; i--)
  {
    if (nums[head] > nums[tail])
    {
      v[i] = nums[head];
      head++;
    }
    else
    {
      v[i] = nums[tail];
      tail--;
    }
  }
}