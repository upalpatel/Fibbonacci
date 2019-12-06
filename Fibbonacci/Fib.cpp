/*Upal Patel
CPSC 131
Computer: HP Envy TS 15 Notebook PC
Edition: Windows 10 Home
Processor: Intel Core i7-4700MQ CPU @2.40GHz
RAM: 12 GB
System Type: 64-bit OS / x64-based processor*/
#include <iostream>
#include <ctime>
using namespace std;
long fib(int n);
int main()
{
	int start, finish;
	start = clock();
	cout << fib(41) << endl;
	finish = clock();
	cout << "Runtime: " << (finish - start) / 1000 << endl;
	system("PAUSE");
	return 0;
}
long fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}