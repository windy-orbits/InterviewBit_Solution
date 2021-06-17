//https://www.interviewbit.com/problems/palindrome-integer/

int Solution::isPalindrome(int A) {
    string str = to_string(A);
    int mid;
    if(str.length()%2==0)
        mid = str.length()/2 - 1;
    else
        mid = str.length()/2;
        
    for(int i=0; i<=mid; i++)
        if(str[i]!=str[str.length()-1-i])
            return false;
            
    return true;
}
