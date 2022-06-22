
int main()
{
	try
	{
		char		*ptr = NULL;
		*(const_cast<double*>(&_value)) = std::strtod(_input.c_str(), &ptr);
		if (_value == 0.0 && (_input[0] != '-' && _input[0] != '+' && !std::isdigit(_input[0])))
			throw (std::bad_alloc());
		if (*ptr && std::strcmp(ptr, "f"))
			throw (std::bad_alloc());
	}
	catch (std::exception&)
	{
		_e = true;
	}
}