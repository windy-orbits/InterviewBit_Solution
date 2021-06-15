// https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    for(int i=0; i<A; i++)
    {
        vector<int> temp(i+1);
        for(int j=0; j<i+1; j++)
        {
            temp[j] = (j==0 || j==i ? 1 : ans[i-1][j]+ans[i-1][j-1]);
        }
        ans.push_back(temp); 
    }
    return ans;
}
