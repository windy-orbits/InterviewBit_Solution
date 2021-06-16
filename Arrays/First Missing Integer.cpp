// https://www.interviewbit.com/problems/first-missing-integer/

int Solution::firstMissingPositive(vector<int> &A){
    sort(A.begin(),A.end());
    int i=0,n=A.size(),j=1;
    while(i<n)
    {
        if(A[i]<=0)i++;
        else if(A[i]==j)
        {
            i++;
            j++;
        }
        else break;
    }
    return j;
}
