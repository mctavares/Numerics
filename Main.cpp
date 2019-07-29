#include "Gaussian.h"
using namespace mt;

int main()	{
	const int N = 3;
	matrix<double> m (N, N+1);

	m(0,0) = 1.0;
	m(0,1) = 2.0;
	m(0,2) = 1.0;
	m(0,3) = 2.0;

	m(1,0) = 2.0;
	m(1,1) = 6.0;
	m(1,2) = 1.0;
	m(1,3) = 7.0;

	m(2,0) = 1.0;
	m(2,1) = 1.0;
	m(2,2) = 4.0;
	m(2,3) = 3.0;

	Gaussian g;

	g.print(m, N);
	g.U(m, N);
	cout << "Error: >" << g.getErrMsg() << "<" << endl;
	g.print(m, N);

	return 0;
}

