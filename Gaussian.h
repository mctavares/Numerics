/*
 * Gaussian.h
 *
 *  Created on: Jul 7, 2016
 *      Author: mt
 */

#ifndef GAUSSIAN_H_
#define GAUSSIAN_H_

#include <iostream>
#include <boost/numeric/ublas/matrix.hpp>

using namespace std;
using namespace boost::numeric::ublas;

namespace mt {

	class Gaussian {
		private:
			string errmsg;
		public:
			Gaussian();
			virtual ~Gaussian();
		public:
			string getErrMsg() {return errmsg;}

		public:
			Gaussian& U(matrix<double>& m, unsigned short N);
			void print(matrix<double>& m, unsigned short N);
	};

}

#endif /* GAUSSIAN_H_ */
