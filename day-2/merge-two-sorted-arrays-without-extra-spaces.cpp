#include <bits/stdc++.h>

using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	 for (int j = 0, i = m; j<n; j++){
		nums1[i] = nums2[j];
		i++;
	}
	sort(nums1.begin(),nums1.end());
	return nums1;
}