class Solution {
public:
    int singleNumber(int A[], int n) {
        map<int, int> hash;
        for(int i=0; i<n; i++)
            hash[A[i]]++;
        map<int, int>::iterator iter;
        for(iter=hash.begin(); iter!=hash.end(); iter++)
        {
            if(iter->second == 1)
                return iter->first;
        }
    }
};