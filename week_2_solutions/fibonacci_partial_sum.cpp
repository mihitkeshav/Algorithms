#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}
long long period(long long m){
      int a=0,b=1;
      long long i,ans;
      int l=a+b;
      for(i=0;i<m*m;i++){
         l=(a+b)%m;
         a=b;
         b=l;
         if(a==0 && b==1){
         ans=i+1;
         break;
         }else
         continue;
      }
      return ans;
}
int last_sum(long long n){
     long long c=n%period(10);
     long long a=0,b=1;
     long long i,l=c;
     for(i=0;i<c-1;i++){
         l=(a+b)%10;
         a=b;
         b=l;
     }
     return l%10;
}
int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << (last_sum(to+2)-last_sum(from+1)+10)%10 << '\n';

}