//https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string A) {
    int len = A.size()-1;
    int count = 0;
    while(A[len]==' ' && len>=0)
        len--; // to remove space at the end   
    while(A[len]!=' ' && len>=0)
    {
        count++; 
        len--;
    }
    return count;
}
