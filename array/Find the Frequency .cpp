int findFrequency(vector<int> v, int x){
    
    int freq =0 ;
    for(auto X:v)
    if(X==x) freq++;
    return freq;
    
    
}
