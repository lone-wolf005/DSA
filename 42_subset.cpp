class Solution
{
       void subset(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
       {
              if (index >= nums.size())
              {
                     ans.push_back(output);
                     return;
              }
              subset(nums, output, index + 1, ans);
              output.push_back(nums[index]);
              subset(nums, output, index + 1, ans);
       }

public:
       vector<vector<int>> subsets(vector<int> &nums)
       {
              vector<vector<int>> ans;
              vector<int> output;
              int index = 0;
              subset(nums, output, index, ans);
              return ans;
       }
};