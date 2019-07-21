class Solution {
public:
    
    bool equals(int a[], int b[], int n)
{
    for(int i = 0; i < 26; i++)
    if(a[i] != b[i])
    return false;

    return true;
}

    vector<int> findAnagrams(string s, string p) {
      
    int counts[26] = {0};
    int countp[26] = {0};

    int sizes = s.length();
    int sizep = p.length();
        
    if(sizes == 0 || sizep == 0 || sizep > sizes)
        return {};
        
    for(int i = 0; i < sizep; i++)
    {
        counts[s[i] - 'a']++;
        countp[p[i] - 'a']++;
    }
    vector<int> res;

    for(int i = sizep; i < sizes; i++)
    {
        if(equals(counts, countp, sizep))
        res.push_back(i-sizep);
        
        counts[s[i] - 'a']++;
        counts[s[i-sizep] - 'a']--;

    }
    if(equals(countp, counts, sizep))
        res.push_back(sizes-sizep);
        
        return res;
    }

};
