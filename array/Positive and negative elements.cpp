vector<int> arranged(int A[],int N)
{
    vector<int> v1, v2;
   for(int i=0;i<N;i++)
   {
       if(A[i]<0)v1.push_back(A[i]);
       else v2.push_back(A[i]);
   }
    vector<int> v;
    int f =1;
    for(int i=0;i<N/2;i++)
    {v.push_back(v2[i]); 
    v.push_back(v1[i]);
    }
    return v;
}
