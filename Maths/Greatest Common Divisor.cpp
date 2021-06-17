//https://www.interviewbit.com/problems/greatest-common-divisor/

int Solution::gcd(int A, int B) {
    while(A>0)
    {
        int rem = B%A;
        B=A;
        A=rem;
    }
    return B;
}
