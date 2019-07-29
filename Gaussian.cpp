/*
 * Gaussian.cpp
 *
 *  Created on: Jul 7, 2016
 *      Author: mt
 */

#include "Gaussian.h"

namespace mt {

	Gaussian::Gaussian() {
		errmsg = "";
	}

	Gaussian::~Gaussian() {
	}

	Gaussian& Gaussian::U(matrix<double>& m, unsigned short N) {
		// Gaussian elimination
		for (int j = 0; j < N; j++){
			if (m(j,j) == 0.0)	{
				errmsg = "Matrix is not regular";
			} else {
				for (int i = j + 1; i < N; i++){
					double k = -m(i,j)/m(j,j);
					for (int l = 0; l < N+1; l++)
						m(i, l ) += k*m(j,l);
				}
			}
		}
		return *this;
	}

	void Gaussian::print(matrix<double>& m, unsigned short N){
		cout << endl;
		for (int i = 0; i < N; i++) {
				for (int j = 0; j < N+1; j++)
					cout << m(i,j) << "\t";
				cout << endl;
			}
	}
} /* namespace mt */
