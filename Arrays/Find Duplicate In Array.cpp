// https://www.interviewbit.com/problems/find-duplicate-in-array/

int Solution::repeatedNumber(const vector<int> &A)
{
    int a[A.size()] = {0};
    for (int i = 0; i < A.size(); i++)
        a[A[i]]++;

    for (int j = 0; j < A.size(); j++)
        if (a[j] > 1)
            return j;

    return -1;
}
// It's O(n) time complexity
// how it is getting accepted
