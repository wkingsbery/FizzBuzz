//Billy Kingsbery
//This code implements fizzbuzz, every 3rd number outputs Fizz
//Every 5th number outputs Buzz
//Every 3rd AND 5th number outputs FizzBuzz


#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 101; i++)
	{
		if (i%3 == 0 && i%5 != 0)
		{
			cout <<"Fizz"<<endl;
		}
		else if (i%3 != 0 && i%5 == 0)
		{
			cout <<"Buzz"<<endl;
		}
		else if (i%3 == 0 && i%5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}
