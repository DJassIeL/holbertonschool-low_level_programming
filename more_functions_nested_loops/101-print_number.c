#include "main.h"
/**
 * print_number - Prints an integer.
 *@n: to probe
 * Return: Void function not have return.
 */
void print_number(int n)
{
	int q, w, e, r, t, y, u, i, o, p;

	if (n >= 1000000000 && n <= 2147483647)
	{
		q = n / 1000000000;
		_putchar(q + 48);
		w = (n / 100000000) % 10;
		_putchar(w + 48);
		e = (n / 10000000) % 10;
		_putchar(e + 48);
		r = (n / 1000000) % 10;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 100000000 && n <= 999999999)
	{
		w = n / 100000000;
		_putchar(w + 48);
		e = (n / 10000000) % 10;
		_putchar(e + 48);
		r = (n / 1000000) % 10;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 10000000 && n <= 99999999)
	{
		e = n / 10000000;
		_putchar(e + 48);
		r = (n / 1000000) % 10;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 1000000 && n <= 9999999)
	{
		r = n / 1000000;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 100000 && n <= 999999)
	{
		t = n / 100000;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 10000 && n <= 99999)
	{
		y = n / 10000;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 1000 && n <= 9999)
	{
		u = n / 1000;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		i = n / 100;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 10 && n <= 99)
	{
		o = n / 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= 0 && n <= 9)
	{
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -9 && n < 0)
	{
		n = n * -1;
		p = n % 10;
		_putchar(45);
		_putchar(p + 48);
	}
	else if (n >= -99 && n <= -10)
	{
		n = n * -1;
		o = n / 10;
		_putchar(45);
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -999 && n <= -100)
	{
		n = n * -1;
		i = n / 100;
		_putchar(45);
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -9999 && n <= -1000)
	{
		n = n * -1;
		u = n / 1000;
		_putchar(45);
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -99999 && n <= -10000)
	{
		n = n * -1;
		y = n / 10000;
		_putchar(45);
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -999999 && n <= -100000)
	{
		n = n * -1;
		t = n / 100000;
		_putchar(45);
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -9999999 && n <= -1000000)
	{
		n = n * -1;
		r = n / 1000000;
		_putchar(45);
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -99999999 && n <= -10000000)
	{
		n = n * -1;
		e = n / 10000000;
		_putchar(45);
		_putchar(e + 48);
		r = (n / 1000000) % 10;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else if (n >= -999999999 && n <= -100000000)
	{
		n = n * -1;
		w = n / 100000000;
		_putchar(45);
		_putchar(w + 48);
		e = (n / 10000000) % 10;
		_putchar(e + 48);
		r = (n / 1000000) % 10;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 48);
	}
	else
	{
		n = (n + 1) * -1;
		q = n / 1000000000;
		_putchar(45);
		_putchar(q + 48);
		w = (n / 100000000) % 10;
		_putchar(w + 48);
		e = (n / 10000000) % 10;
		_putchar(e + 48);
		r = (n / 1000000) % 10;
		_putchar(r + 48);
		t = (n / 100000) % 10;
		_putchar(t + 48);
		y = (n / 10000) % 10;
		_putchar(y + 48);
		u = (n / 1000) % 10;
		_putchar(u + 48);
		i = (n / 100) % 10;
		_putchar(i + 48);
		o = (n / 10) % 10;
		_putchar(o + 48);
		p = n % 10;
		_putchar(p + 49);
	}
}
