#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

// PROBLEM: You are given an integer array heights representing the heights of buildings, some bricks, and some ladders.

// You start your journey from building 0 and move to the next building by possibly using bricks or ladders.

// While moving from building i to building i+1 (0-indexed),

// If the current building's height is greater than or equal to the next building's height, you do not need a ladder or bricks.
// If the current building's height is less than the next building's height, you can either use one ladder or (h[i+1] - h[i]) bricks.
// Return the furthest building index (0-indexed) you can reach if you use the given ladders and bricks optimally.

int furthestBuilding(vi& heights, int bricks, int ladders)
{
    int n = heights.size();

    priority_queue<int> maxB;

    int i, diff = 0;

    for(i=0; i<n; i++)
    {
        if(heights[i] >= heights[i+1]) continue;
    
        diff = heights[i+1] - heights[i];

        bricks -= diff;
        maxB.push(diff);

        if(bricks <= 0)
        {
            bricks += maxB.top();
            maxB.pop();
            ladders--;
        }

        if(ladders < 0) break;
    }

    return i;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vi heights = {4,2,7,6,9,14,12};

    int bricks, ladders;

    cin >> bricks >> ladders;

    int ans = furthestBuilding(heights, bricks, ladders);

    cout << ans << endl;

    return 0;
}
