//https://www.interviewbit.com/problems/excel-column-number/

// used the concept of changing numbers from one number system to other 
// (hex to dec, bin to dec etc) only here it is base 26.

int Solution::titleToNumber(string A) {
    int ans=0;
    for(int i=0; i<A.size();i++)
    {
        ans*=26;
        ans+=(int(A[i]-'A')+1);
    }
    return ans;
    
}
