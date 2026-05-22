
class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int low = ceil(pow((double)l, 1.0/k) - 1e-9);
        int high = floor(pow((double)r, 1.0/k) + 1e-9);

        return max(0, high - low + 1);
    }
};