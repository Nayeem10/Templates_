namespace com{
    int fact[N], inv[N], inv_fact[N];
    void init(){
        fact[0] = inv_fact[0] = 1;
        for(int i = 1; i < N; i++){
            inv[i] = i == 1 ? 1 : 1LL * inv[i - mod % i] * (mod / i + 1) % mod;
            fact[i] = 1LL * fact[i - 1] * i % mod;
            inv_fact[i] = 1LL * inv_fact[i - 1] * inv[i] % mod;
        }
    }
    int C(int n, int r){
        return (r < 0 or r > n) ? 0 : 1LL * fact[n] * inv_fact[r] % mod * inv_fact[n - r] % mod;
    }
    int fac(int n){
        return fact[n];
    }
}
using namespace com;
