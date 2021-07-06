// https://www.interviewbit.com/old/problems/palindrome-string/

int Solution::isPalindrome(string A) {
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    string check = "";
    bool flag = true;
    for(int i=0; i<A.size(); i++)
    {
        if(isalnum(A[i]))
            check+=A[i];
    }
    int n = check.length()-1;
    for(int i=0; i<=n/2; i++)
    {
        if(check[i]!=check[n-i])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
