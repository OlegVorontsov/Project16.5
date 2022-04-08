#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	const int N = 5;
	int Array[N][N];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Array[i][j] = i + j;
			cout << Array[i][j] << " ";
		}
		cout << "\n";
	}
	
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	int theDay = buf.tm_mday;
	int theMonth = buf.tm_mon + 1;
	int theYear = buf.tm_year + 1900;

	cout << theDay << " ";
	cout << theMonth << " ";
	cout << theYear << "\n";

	int sum = 0;
	int y = theDay % N;
	cout << y << "\n";

	for (int x = 0; x < N; x++)
	{
		sum += Array[y][x];
	}
	cout << sum;

	return 0;
}