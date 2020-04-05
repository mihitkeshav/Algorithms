#include <iostream>


long long period(long long m){
     int a=0,b=1;
     long long ans;
     int c=a+b;
     long long i;
     for(i=0;i<m*m;i++){
          c=(a+b)%m;
          a=b;
          b=c;
          if((a==0) && (b==1)){
            ans=i+1;
            break;
            }
            else
           continue;
      }
      return ans;
}

long long get_fibonacci(long long n, long long m){
      long long c = n%period(m);
      long long i,a=0,b=1;
      long long l=c;
      for(i=0;i<c-1;i++){
          l=(a+b)%m;
          a=b;
          b=l;
      }
      return l%m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci(n,m) << '\n';
}