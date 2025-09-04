/*
 * @lc app=leetcode id=1759638663 lang=cpp
 *
 * TimeNeededToBuyTickets
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
//         Input: tickets = [2,3,2], k = 2 // easy

// Output: 6
queue<int>q;
int n = tickets.size();
int time=0;
for(int i=0;i<n;i++){
    q.push(i);

}
while(tickets[k]!=0){
    tickets[q.front()]--;
    if(tickets[q.front()]){
        q.push(q.front());
        q.pop();
    }
    else{
    q.pop();

    }
    time++;
}

 return time;
        
    }
};