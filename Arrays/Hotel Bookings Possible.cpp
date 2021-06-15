//https://www.interviewbit.com/problems/hotel-bookings-possible/

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K)
{
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    for (int i = K; i < arrive.size(); i++)
    {
        if (arrive[i] < depart[i - K])
            return false;
    }
    return true;
}

// bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
//     int n = arrive.size();
//     sort(arrive.begin(),arrive.end());
//     sort(depart.begin(),depart.end());

//     int i=0; //for Day of arrival
//     int j=0; //for Day of departure
//     int rooms_booked=0;
//     // Iterate over arrival
//     while(i<n)
//     {
//         if(arrive[i]<depart[j])  //If arrival is before a departure
//         {
//             if(rooms_booked>=K) //Check if there is a room
//             {
//                 return 0;
//             }
//             rooms_booked++;  //Assign one room
//             i++; //Move ahead
//         }
//         else if(arrive[i]>depart[j]) //If departure before next arrival
//         {
//             rooms_booked--;
//             j++;
//         }
//         else  //Departure and arrival same day no worry
//               // Since timing not specified count as the person came and left at the very moment!
//         {
//             i++;
//             j++;
//         }
//     }
//     return 1;
// }
