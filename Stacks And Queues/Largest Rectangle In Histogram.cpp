// https://www.interviewbit.com/old/problems/largest-rectangle-in-histogram/

int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    int maxar = INT_MIN, area;
    //left & right stack store nearest left & right values in the array
    //the index is kept in the l & r vectors
    stack<int> left, right;
    vector<int> l(n), r(n);
    //finding the previous smallest element
    for (int i = 0; i < n; i++) {
        while (!left.empty() && A[left.top()] >= A[i])  left.pop();
        l[i] = (!left.empty()) ? left.top() : -1;
        left.push(i);
    }
    //finding the next smallest element
    for (int i = n-1; i >= 0; i--) {
        while (!right.empty() && A[right.top()] >= A[i])    right.pop();
        r[i] = (!right.empty()) ? right.top() : n;
        right.push(i);
    }
    //calculating the max. area histogram formed
    for (int i = 0; i < n; i++) {
        area = A[i] * (r[i] - l[i] - 1);
        maxar = max(maxar, area);
    }
    return maxar;
}

/////////////////    Giving TLE    ////////////////////
// int Solution::largestRectangleArea(vector<int> &A) {
//     vector<int> left(A.size());
//     left[0] = 0;
//     int j;
//     for(int i=1; i<A.size(); i++)
//     {
//         j=i;
//         while(j>=0 && A[j]>=A[i])
//         {
//             j--;
//         }
//         left[i]=j+1;  
//     }
//     vector<int> right(A.size());
//     right[A.size()-1]=A.size()-1;
//     int k;
//     for(int l=0; l<A.size()-1; l++)
//     {
//         k=l;
//         while(k<A.size() && A[k]>=A[l])
//         {
//             k++;
//         }
//         right[l]=k-1;
//     }
//     vector<int> ans(A.size());
//     int maxm = INT_MIN;
//     for(int i=0; i<A.size(); i++)
//     {
//         ans[i]=((right[i]-left[i]+1)*A[i]);
//         maxm = max(maxm, ans[i]);
//     }
//     return maxm;
// }
