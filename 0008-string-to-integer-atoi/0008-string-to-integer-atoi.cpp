class Solution {
public:
    int myAtoi(string s) {

        int i = 0, neg = 0, n = s.size();
        while(i < s.size() && s[i] == ' ') i++;
        if(i < n && s[i] == '-') {
            neg = 1;
            i++;
        }
        if(neg && s[i] == '+') return 0;
        if(s[i] == '+') i++;

        if(i < n && s[i] >= 'a' && s[i] <= 'z') return 0;
        // cout << i << endl;
        long ans = 0;
        while(i < n && s[i] >= '0' && s[i] <= '9') {
            ans = (ans * 10) + s[i]-'0';
            i++;

            if(ans > INT_MAX) {
                if(neg) return INT_MIN;
                return INT_MAX;
            }
        }

        if(neg) return -ans;
        return ans;
    }
};