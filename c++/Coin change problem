// recursive solution
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &num, int x) {
    if (x == 0) {
        return 0;
    }
    if (x < 0) {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++) {
        int ans = solve(num, x - num[i]);
        if (ans != INT_MAX) {
            // considering the current coin so we add 1
            mini = min(mini, 1 + ans);
        }
    }
    return mini;
}

int minimumElements(vector<int> &num, int x) {
    int ans = solve(num, x);
    if (ans == INT_MAX) {
        return -1;
    }
    return ans;
}

int main() {
    vector<int> num = {1, 2, 3}; // Example input vector
    int x = 5; // Example value of x
    int result = minimumElements(num, x);
    cout << "Minimum number of elements required to form " << x << " is: " << result << endl;
    return 0;
}

// recursive + memoization solution

#include <bits/stdc++.h>
using namespace std;

int solvemem(vector<int> &num, int x, vector<int> &dp) {
    if (x == 0) {
        return 0;
    }
    if (x < 0) {
        return INT_MAX;
    }
    if (dp[x] != -1) {
        return dp[x];
    }
    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++) {
        int ans = solvemem(num, x - num[i], dp);
        if (ans != INT_MAX) {
            // considering the current coin so we add 1
            mini = min(mini, 1 + ans);
        }
    }
    dp[x] = mini;
    return dp[x];
}

int minimumElements(vector<int> &num, int x) {
    vector<int> dp(x + 1, -1); // Initialize dp array with -1
    int ans = solvemem(num, x, dp);
    if (ans == INT_MAX) {
        return -1;
    }
    return ans;
}

int main() {
    vector<int> num = {1, 2, 3}; // Example input vector
    int x = 5; // Example value of x
    int result = minimumElements(num, x);
    cout << "Minimum number of elements required to form " << x << " is: " << result << endl;
    return 0;
}

// tabulation solution 
#include <bits/stdc++.h>
using namespace std;

int solvetab(vector<int> &num, int x) {
    vector<int> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= x; i++) {
        // trying to solve for every amount from 1 to x
        for (int j = 0; j < num.size(); j++) {
            if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX) {
                dp[i] = min(dp[i], 1 + dp[i - num[j]]);
            }
        }
    }
    if (dp[x] == INT_MAX) {
        return -1;
    }
    return dp[x];
}

int minimumElements(vector<int> &num, int x) {
    // tabulation
    return solvetab(num, x);
}

int main() {
    vector<int> num = {1, 2, 3}; // Example input vector
    int x = 5; // Example value of x
    int result = minimumElements(num, x);
    cout << "Minimum number of elements required to form " << x << " is: " << result << endl;
    return 0;
}


