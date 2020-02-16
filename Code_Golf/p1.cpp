#include <iostream>
int n=1000,sum;main(){
	for(;;n--)
	{
		if(n % 3 == 0) sum += n;
		else if(n % 5 == 0) sum += n;
		std::cout << n << std::endl;
	}

	std::cout << sum << std::endl;
}