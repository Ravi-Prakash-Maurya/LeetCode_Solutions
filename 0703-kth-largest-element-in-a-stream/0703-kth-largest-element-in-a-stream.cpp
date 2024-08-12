class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for (int num : nums) add(num);
    }
    int add(int val) {
        if (vec.size() < k) vec.insert(lower_bound(vec.begin(), vec.end(), val), val);
        else if (val > vec[0]) {
            vec[0] = val;
            for (int i = 0; i < k - 1 && vec[i] > vec[i + 1]; ++i) swap(vec[i], vec[i + 1]);
        }
        return vec[0];
    }
private:
    vector<int> vec;
    int k;
};


/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */