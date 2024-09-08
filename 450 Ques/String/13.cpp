#include <bits/stdc++.h>
using namespace std;

// Problem: Word wrap problem

int inf = INT_MAX;

void printPath(int path[], int n)
{
    if(path[n] == 1) {
        cout << path[n] << " " << n << " ";
    }

    else {
        printPath(path, path[n] - 1);
        cout << path[n] << " " << n << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n+1];

    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int space[n+1][n+1];
    int ls[n+1][n+1];
    int cost[n+1];
    int path[n+1];

    for(int i=1; i<=n; i++) {

        space[i][i] = m - a[i];

        for(int j=i+1; j<=n; j++) {
            space[i][j] = space[i][j-1] - a[j] - 1;
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j++) {
            if(space[i][j] < 0) {
                ls[i][j] = inf;
            }

            else if(j == n and space[i][j] > 0) {
                ls[i][j] = 0;
            }

            else {
                ls[i][j] = space[i][j] * space[i][j];
            }
        }
    }

    cost[0] = 0;
    for(int i=1; i<=n; i++) {
        cost[i] = inf;

        for(int j=1; j<=i; j++) {
            if(cost[j-1] != inf and ls[i][j] != inf and cost[j-1] + ls[i][j] < cost[i]) {
                cost[i] = cost[j-1] + ls[i][j];
                path[i] = j;
            }
        }
    }

    printPath(path, n);
    cout << endl;

    return 0;
}
