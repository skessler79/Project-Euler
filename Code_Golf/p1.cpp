#import<iostream>
int n=1e3,s;main(){for(;n--;)n%3*n%5?:s+=n;std::cout<<s;}