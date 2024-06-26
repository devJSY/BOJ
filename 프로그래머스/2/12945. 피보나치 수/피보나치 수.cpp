#include <string>
#include <vector>

using namespace std;

long long dp[100005];

int solution(int n) {
    int answer = 0;
    
    dp[1] = 1;
    for(int i = 2; i <= 100000; ++i)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;
    }
    
    answer = dp[n];
    
    return answer;
}