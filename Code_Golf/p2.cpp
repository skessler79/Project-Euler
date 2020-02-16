#import<iostream>
int m=1,n=2,s;main(){for(;n<=4e6;n+=m)n%2?:s+=n,m^=n^=m^=n;std::cout<<s;}