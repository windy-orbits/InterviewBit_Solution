// https://www.interviewbit.com/problems/is-rectangle/

int Solution::solve(int A, int B, int C, int D) {
    vector<int> sqr;
    sqr.push_back(A);
    sqr.push_back(B);
    sqr.push_back(C);
    sqr.push_back(D);
    
    sort(sqr.begin(), sqr.end());
    return (sqr[0]==sqr[1] && sqr[2]==sqr[3]);
//  return (A==B & C==D);
   }
