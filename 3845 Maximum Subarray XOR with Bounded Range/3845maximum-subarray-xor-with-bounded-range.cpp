class Solution {
    struct Node {
        Node* ch[2];
        int count;
        Node() { ch[0] = ch[1] = nullptr; count = 0; }
    };

    Node* root;

    void insert(int val) {
        Node* curr = root;
        for (int i = 15; i >= 0; --i) {
            int b = (val >> i) & 1;
            if (!curr->ch[b]) curr->ch[b] = new Node();
            curr = curr->ch[b];
            curr->count++;
        }
    }

    void remove(int val) {
        Node* curr = root;
        for (int i = 15; i >= 0; --i) {
            curr = curr->ch[(val >> i) & 1];
            curr->count--;
        }
    }

    int query(int val) {
        Node* curr = root;
        int res = 0;
        for (int i = 15; i >= 0; --i) {
            int b = (val >> i) & 1;
            if (curr->ch[1 - b] && curr->ch[1 - b]->count > 0) {
                res |= (1 << i);
                curr = curr->ch[1 - b];
            } else if (curr->ch[b] && curr->ch[b]->count > 0) {
                curr = curr->ch[b];
            } else return 0;
        }
        return res;
    }

public:
    int maxXor(vector<int>& nums, int k) {
        vector<int> meloraxuni = nums;
        int n = meloraxuni.size();
        root = new Node();
        
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; ++i) pref[i+1] = pref[i] ^ meloraxuni[i];

        deque<int> maxQ, minQ;
        int L = 0, ans = 0;
        
        for (int R = 0; R < n; ++R) {
            while (!maxQ.empty() && meloraxuni[maxQ.back()] <= meloraxuni[R]) maxQ.pop_back();
            while (!minQ.empty() && meloraxuni[minQ.back()] >= meloraxuni[R]) minQ.pop_back();
            maxQ.push_back(R);
            minQ.push_back(R);

            while (meloraxuni[maxQ.front()] - meloraxuni[minQ.front()] > k) {
                if (L <= R) remove(pref[L]);
                L++;
                if (maxQ.front() < L) maxQ.pop_front();
                if (minQ.front() < L) minQ.pop_front();
            }
            
            insert(pref[R]); 
            ans = max(ans, query(pref[R + 1]));
        }
        return ans;
    }
};