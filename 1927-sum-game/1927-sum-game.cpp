class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int h = n / 2;

        int maxpos1 = 0, maxpos2 = 0;
        int qn1 = 0, qn2 = 0;

        for (int i = 0; i < h; i++) {
            if (num[i] == '?')
                qn1++;
            else
                maxpos1 += num[i] - '0';
        }

        for (int i = h; i < n; i++) {
            if (num[i] == '?')
                qn2++;
            else
                maxpos2 += num[i] - '0';
        }

        if ((qn1 + qn2) % 2)
            return true;

        return 2 * (maxpos1 - maxpos2) != 9 * (qn2 - qn1);
    }
};