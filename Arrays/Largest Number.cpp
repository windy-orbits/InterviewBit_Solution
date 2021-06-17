// https://www.interviewbit.com/problems/largest-number/

bool cmp(int a,int b) {
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab > ba;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int> B = vector<int>(A);
    sort(B.begin(),B.end(),cmp);
    string res;
    for(int i=0;i<B.size();i++) {
        res += to_string(B[i]);
    }
     // remove leading 0's
    if(res[0] == '0') return "0";
    
    return res;
    // return res.erase(0, min(res.find_first_not_of('0'), res.size()-1));
}
