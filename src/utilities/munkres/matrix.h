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

#if !defined(_MATRIX_H_)
#define _MATRIX_H_

template <class T>
class Matrix {
public:
	Matrix();
	Matrix(long rows, long columns);
	Matrix(const Matrix<T> &other);
	Matrix<T> & operator= (const Matrix<T> &other);
	~Matrix();
	// all operations except product modify the matrix in-place.
	void resize(long rows, long columns);
	void identity(void);
	void clear(void);
	T& operator () (long x, long y);
	T trace(void);
	Matrix<T>& transpose(void);
	Matrix<T> product(Matrix<T> &other);
	long minsize(void) {
		return ((m_rows < m_columns) ? m_rows : m_columns);
	}
	long columns(void) {
		return m_columns;
	}
	long rows(void) {
		return m_rows;
	}
private:
	T **m_matrix;
	long m_rows;
	long m_columns;
};

#include "matrix.hpp"

#endif /* !defined(_MATRIX_H_) */

