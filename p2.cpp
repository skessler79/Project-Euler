#include <iostream>

int main()
{
	int m = 1;
	int n = 2;
	int s = 0;
	while(n<=4000000)
	{
		if(!(n%2))
		{
			s+=n;		}
		int temp = m;
			m = n;
			n = temp;
			n+=m;
	}
	std::cout << s << std::endl;
}