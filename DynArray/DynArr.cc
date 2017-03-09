#include "DynArr.hh"

DynArray::DynArray(void)
{
	m_data = new int[DYN_ARRAY_DEFAULT_SIZE];
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
}

DynArray::DynArray(size_t size)
{
	m_data = new int[size];
	m_capacity = size;
	m_size = size;
}

DynArray::DynArray(size_t size, const int & value)
{
	m_data = new int[size];
	m_capacity = size;
	m_size = size; 
	fill(begin(), end(), value);
}


DynArray::~DynArray(void)
{
	delete[]m_data;
}

int * DynArray::begin(void) const
{
	return m_data;
}

int * DynArray::end(void) const
{
	return (m_data+m_size);
}

void DynArray::resize(size_t n)
{
	int *temp;
	temp = new int[n];
	copy(m_data,m_data+m_size,temp);
	m_data = temp;
	delete[] temp;
	m_size = m_size+ 1;
}

void DynArray::fill(int * first, int * last, int value)
{
	while (first!=last)
	{
		*first = value;
		++first;
	}
}

void DynArray::copy(int * first, int * last, int * dest)
{
	while (first != last)
	{
		*dest = *last;
		++dest;
	}
}

int & DynArray::operator[](size_t n) const
{

	return m_data[n];
}

bool operator==(const DynArray & lhs, const DynArray & rhs)
{
	
	for (int i = 0; i < lhs.m_size || i<rhs.m_size ; i++)
	{
		if (lhs.m_data[i] != rhs.m_data[i])
		{
			return false;
		}
			
	}
	return true;
}

void DynArray::push(const int & val)
{
	int *last = m_data + m_size;
	if ( *(m_data+m_size)== 0)
	{
		*last = val;
	}
	else
	{
		resize(m_size + 1);
		m_data[m_size-1] = val;
	}
}
