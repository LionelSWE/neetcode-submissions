class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        string s1Sorted = s;
        string t1Sorted = t;
        sort(s1Sorted.begin(), s1Sorted.end());
        sort(t1Sorted.begin(), t1Sorted.end());

        return s1Sorted == t1Sorted;
    }
};
