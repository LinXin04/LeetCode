class Solution {
public:
   vector<vector<int>> permuteUnique(vector<int>& nums) {
	vector<vector<int>> result;
	sort(nums.begin(), nums.end());
	vector<int> pri_nums=nums;
	result.push_back(nums);
	nextPermutation(nums);
	while (pri_nums != nums)
	{
		result.push_back(nums);
		nextPermutation(nums);
	}
	return result;
}

vector<int> nextPermutation(vector<int>& nums) {
	vector<int> pri_nums = nums;
	int length = nums.size();
	if (length<=1) return nums;
	int i = length - 2;
	while (i >= 0 && nums[i] >= nums[i + 1]) i--;

	if (i >= 0)
	{
		int j = length - 1;
		while (j>i && nums[i] >= nums[j]) j--;
		swap(nums[i], nums[j]);
		reverse(nums, i + 1, length - 1);
	}
	else
		reverse(nums, 0, length - 1);
	return nums;
}

void reverse(vector<int> &nums, int i, int j)
{
	while (i<j)
	{
		swap(nums[i], nums[j]);
		i++;
		j--;
	}
}
};
