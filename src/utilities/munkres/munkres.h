/*
 *   Copyright (c) 2007 John Weaver
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#if !defined(_MUNKRES_H_)
#define _MUNKRES_H_

#include "matrix.h"

#include <list>
#include <utility>

class Munkres {
public:
	void solve(Matrix<double> &m);
private:
  static const long NORMAL = 0;
  static const long STAR = 1;
  static const long PRIME = 2; 
	inline bool find_uncovered_in_matrix(double,long&,long&);
	inline bool pair_in_list(const std::pair<long,long> &, const std::list<std::pair<long,long> > &);
	long step1(void);
	long step2(void);
	long step3(void);
	long step4(void);
	long step5(void);
	long step6(void);
	Matrix<long> mask_matrix;
	Matrix<double> matrix;
	bool *row_mask;
	bool *col_mask;
	long saverow, savecol;
};

// DM: This is dangerous, but will do for now
#include "munkres.cpp"

#endif /* !defined(_MUNKRES_H_) */
