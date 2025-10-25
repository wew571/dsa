def fib(n):
    if n <= 1: return n
    dp = [0] * (n+1)
    dp[1] = 1
    for i in range(2, n+1):
        dp[i] = dp[i-1] + dp[i-2]
    return dp[n]

def countWays(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    elif n == 2:
        return 2

    dp = [0] * (n + 1)
    dp[1] = 1
    dp[2] = 2

    for i in range(3, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]

    return dp[n]

def uniquePaths(m,n):
    dp = [[1] * n for _ in range(m)]
    for i in range(1,m):
        for j in range(1,n):
            dp[i][j] = dp[i-1][j] + dp[i][j-1]
    return dp[m-1][n-1]

def knapsack(W, weights, values, n):
    K = [[0 for w in range(W+1)] for i in range(n+1)]
    for i in range(1, n+1):
        for w in range(W+1):
            current_weight = weights[i-1]
            current_value = values[i-1]
            if current_weight > w:
                K[i][w] = K[i-1][w]
            else:
                val_not_include = K[i-1][w]
                val_include = current_value + K[i-1][w - current_weight]
                K[i][w] = max(val_not_include, val_include)
    return K[n][w], K