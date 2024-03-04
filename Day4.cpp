class Solution
{
public:
  int bagOfTokensScore(vector<int> &tokens, int p)
  {
    sort(tokens.begin(), tokens.end());

    int left = 0;
    int n = tokens.size();
    int right = n - 1;
    int score = 0;
    // base condition
    if (n == 1)
    {
      if (p >= tokens[0])
      {
        return 1;
      }
      return 0;
    }

    if (n == 2)
    {
      for (int i = 0; i < n; i++)
      {
        if (tokens[i] <= p)
        {
          score++;
          p = p - tokens[i];
        }
      }

      return score;
    }

    int ans = 0;

    while (left <= right)
    {
      if (p >= tokens[left])
      {
        p = p - tokens[left];
        left++;
        score++;
        ans = max(ans, score);
      }
      else if (score > 0)
      {
        p = p + tokens[right];
        right--;
        score--;
      }
      else
      {
        break;
      }
    }

    return ans;
  }
};