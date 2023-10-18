
/*{
	int index = 0, store, j, increment = 0;
	va_list printf;

	{
		{
			if ('c' == format[index + 1])
			{
				store = va_arg(printf, int);
				_putchar(store);
				increment++;
				index++;
			}
			else if ('s' == format[index + 1])
			{
				ptrStr = va_arg(printf, char *);
				for (j = 0; ptrStr[j] != '\0'; j++)
				{
					_putchar(ptrStr[j]);
					increment++;
				}
				index++;
			}
			else
			{
				_putchar('%');
				_putchar(format[index + 1]);
				increment += 2;
				index++;
			}
		}
		else
		{
			_putchar(format[index]);
			increment++;
		}
	}
	va_end(printf);

	return (increment);
}*/
