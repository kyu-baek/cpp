	
#include "Span.hpp"

Span::Span(void) : _N(0), _v(0) {}

Span::Span(unsigned int N) : _N(N), _v(0) {}

Span::Span(const Span &sp)
{
	(void)sp;
}

Span &Span::operator=(const Span &sp)
{
	if (this != &sp)
	{
		this->_N = sp._N;
		this->_v.clear();
		this->_v = sp._v;
	}
	return (*this);
}

Span::~Span(void) {}

void				Span::addNumber(const unsigned int number)
{
	if (_v.size() >= _N)
		throw NoSpeaceStore();
	_v.push_back(number);
}

unsigned int	Span::shortestSpan(void)
{
	if (_v.empty() || _v.size() <= 1)
		throw NoSpanFound();
	std::vector<int> temp = _v;
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator iter = temp.begin();
	int	span = *(iter + 1) - *iter;
	iter++;
	unsigned int i = temp.size();
	while (i-- > 2)
	{
		int j;
		if ((j = *(iter + 1) - *iter) < span)
			span = j;
		iter++;
	}
	if (span < 1)
		span = 1;
	return (span);

}

unsigned int	Span::longestSpan(void)
{
	if (_v.empty() || _v.size() <= 1)
		throw NoSpanFound();
	return *(std::max_element(_v.begin(), _v.end())) - *(std::min_element(_v.begin(), _v.end()));
}

void				Span::makeV(unsigned int s)
{
	srand(time(NULL));
	if (_v.size() + s > _N)
		throw NoSpanFound();
	for (unsigned int i = 0; i < s; i++)
		_v.push_back(rand() % (s*10));
}
void				Span::printV(void)
{
	if (_v.empty() || _v.size() <= 1)
		throw NoSpanFound();
	std::cout << "inside val = ";
	for (unsigned int i = 0; i < _v.size(); i++ )
		std::cout << _v.at(i) << ' ';
	std::cout << "\n";
}

const char *Span::NoSpeaceStore::what(void) const throw()
{
	return ("Error: NoSpeaceStore");
}
const char *Span::NoSpanFound::what(void) const throw()
{
	return ("Error: NoSpanFound");
}
