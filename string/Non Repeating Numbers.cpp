class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int Xor = 0;
        for(auto x : nums)
        Xor ^= x;
        
        int right_setbit = Xor&(~(Xor-1));
        int x = 0, y =0;
        for(auto n : nums)
        {
            if(n&right_setbit)
            x^=n;
            else y^=n;
        }
        return {min(x, y), max(x, y)};
    }
};
