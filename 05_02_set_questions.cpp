//find the Longest consicutive  {0,3,4,8,9,2,1}=>{0,1,2,3,4,8,9} so 0 to 4 = 5

#if 0
int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    set<int> nm;

    for (int i = 0; i < nums.size(); i++) {
        nm.insert(nums[i]);
    }

    int count = 1;
    int maxCount = 1;
    int match = *nm.begin();

    auto it = nm.begin();
    ++it;

    for (; it != nm.end(); ++it) {
        if (match + 1 == *it) {
            match = match + 1;
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            count = 1;
            match = *it;
        }
    }

    return maxCount;
}

int main(){
    longestConsecutive(nums)
}
#endif