//https://www.interviewbit.com/problems/reverse-the-string/

string Solution::solve(string A) {
    string ans = "";
    stringstream ss(A);
    string word;
    vector<string> v;
    
    while(ss>>word)
        v.push_back(word);
        
    for(int i=v.size()-1; i>=0; i--)
    {
        ans.append(v[i]);
        if(i!=0)
            ans+=' ';
    }
    return ans;
}
