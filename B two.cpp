#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        
        int ferry;
        cin >> ferry;
        ferry *= 100;
      
        int car;
        vector<int> cars(1, 0);
        
        vector<int> sum(1, 0);
        while (cin >> car, car > 0)
        {
            cars.push_back(car);
            sum.push_back(sum.back() + car);
        }
        
        vector<vector<bool> > dp(cars.size(), vector<bool>(ferry + 1, false));
        vector<vector<string> > lane(dp.size(), vector<string>(dp[0].size(), "")); 
        pair<int, int> memo = make_pair(0, 0);
        dp[0][0] = true;
        for (int i = 1; i < (int)cars.size(); ++i)
            for (int j = 0; j <= ferry; ++j)
            {
              
                if (dp[i - 1][j])
                {
                   
                    if (ferry - j >= cars[i])
                    {
                        dp[i][j + cars[i]] = true;
                        lane[i][j + cars[i]] = "starboard" ;
                        memo = make_pair(i, j + cars[i]);
                    }
                   
                    if (ferry - (sum[i - 1] - j) >= cars[i])
                    {
                        dp[i][j] = true;
                        lane[i][j] = "port";
                        memo = make_pair(i, j);
                    }
                }
            }
        cout << memo.first << endl;
        string print;
        while (lane[memo.first][memo.second] != "")
        {
            print = lane[memo.first][memo.second] + "\n" + print;
            memo.second -= lane[memo.first][memo.second] == "starboard"? 
                               cars[memo.first] : 0;
            --memo.first;
        }
        cout << print;
        if (T)
            cout << endl;
    }
    return 0;
}
