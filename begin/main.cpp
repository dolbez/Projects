#include <iostream>
#include <cmath>
#define PI 3.14

int f1(int a)
{
	int p = 4 * a;
	return p;
}

int f2(int a)
{
	int s = std::pow(a, 2);
	return s;
}

void f3(int a, int b)
{
	int s = a * b;
	int p = 2 * (a + b);
	std::cout << s << " " << p << std::endl;
}
int f4(double d)
{
	return PI * d;
}

void f5(int a, int b)
{
	int v = std::pow(a, 3);
	int s = 6 * std::pow(a, 2);
	std::cout << v << " " << s << std::endl;
}

void f6(int a, int b, int c)
{
	int v = a * b*c;
	int s = 2 * (a*b + b * c + a * c);
	std::cout << v << " " << s << std::endl;
}

void f7(double r)
{
	double l = 2 * PI*r;
	double s = PI * std::pow(r, 2);
	std::cout << l << " " << s << std::endl;
}

int f8(int a, int b)
{
	return (a + b) / 2;
}
int f9(int a, int b)
{
	if (a >= 0 && b >= 0)
		return sqrt(a*b);
}
void f10(int a, int b)
{
	if (a != 0 && b != 0)
	{
		int temp = std::pow(a, 2) + std::pow(b, 2);
		int temp_1 = std::pow(a, 2) - std::pow(b, 2);
		int temp_2 = std::pow(a, 2)*std::pow(b, 2);
		int temp_3 = std::pow(a, 2) / std::pow(b, 2);
		std::cout << temp << " " << temp_1 << " " << temp_2 << " " << temp_3 << std::endl;
	}
}

void f11(int a, int b)
{
	if (a != 0 && b != 0)
	{
		int temp = std::abs(a) + std::abs(b);
		int temp_1 = std::abs(a) - std::abs(b);
		int temp_2 = std::abs(a)*std::abs(b);
		int temp_3 = std::abs(a) / std::abs(b);
		std::cout << temp << " " << temp_1 << " " << temp_2 << " " << temp_3 << std::endl;
	}
}

void f12(int a, int b)
{
	int c = sqrt(pow(a, 2) + pow(b, 2));
	int p = a + b + c;
	std::cout << c << " " << p << std::endl;
}

void f13(double rad1, double rad2)
{
	double s1 = PI * std::pow(rad1, 2);
	double s2 = PI * std::pow(rad2, 2);
	double s3 = s1 - s2;
	std::cout << s1 << " " << s2 << " " << s3 << std::endl;
}

void f14(int l)
{
	int rad = l / (2 * PI);
	int s = PI * std::pow(rad, 2);
	std::cout << rad << std::endl;
}

void f15(double s)
{
	double d = 2 * std::sqrt(s / PI);
	double l = PI * d;
	std::cout << d << std::endl;
}

int f16(int x1, int x2)
{
	return std::abs(x2 - x1);
}

void f17(int a, int b, int c)
{
	int cut_ac = std::abs(c - a);
	int cut_bc = std::abs(b - a);
	int sum = cut_ac + cut_bc;
	std::cout << cut_ac << " " << cut_bc << " " << sum << std::endl;
}

void f18(int a, int b, int c)
{
	int result = std::abs(c - a)*std::abs(c - b);
	std::cout << result << std::endl;
}

void f19(int x1, int x2, int y1, int y2)
{
	int y_res = y2 - y1;
	int x_res = x2 - x1;
	int p = 2 * (y_res + x_res);
	int s = y_res * x_res;
	std::cout << p << " " << s << std::endl;
}

void f20(int x1, int x2, int y1, int y2)
{
	int y_res = std::pow((y2 - y1), 2);
	int x_res = std::pow((x2 - x1), 2);
	int r = std::sqrt(x_res + y_res);
	std::cout << r << std::endl;
}

void f21(int x1, int x2, int x3, int y1, int y2, int y3)
{
	int a = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
	int b = std::sqrt(std::pow((x3 - x2), 2) + std::pow((y3 - y2), 2));
	int c = std::sqrt(std::pow((x1 - x3), 2) + std::pow((y1 - y3), 2));
	int p = (a + b + c) / 2;
	p = p * 2;
	int s = std::sqrt(p*(p - a)*(p - b)*(p - c));
	std::cout << p << " " << s << std::endl;
}

void f22(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	std::cout << a << " " << b << std::endl;
}

void f23(int a, int b, int c)
{
	int varc = b;
	c = a;
	b = c;
	a = varc;
	std::cout << a << " " << b << " " << c << std::endl;
}

void f24(int a, int b, int c)
{
	int varb = b;
	c = a;
	b = c;
	a = varb;
	std::cout << a << " " << b << " " << c << std::endl;
}

void f25(int x)
{
	int y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	std::cout << y << std::endl;
}

void f26(int x)
{
	int y = 4 * std::pow((x - 3), 6) - 7 * std::pow((x - 3), 3) + 2;
	std::cout << y << std::endl;
}

void f27(int x)
{
	int var = std::pow(x, 2);
	int var1 = var * var;
	int var2 = var * var1*var;
	std::cout << var << " " << var1 << " " << var2 << std::endl;
}

void f28(int x)
{
	int var = std::pow(x, 2);
	int var1 = var * x;
	int var2 = var1 * var;
	int var3 = var2 * var2;
	int var4 = var3 * var2;
	std::cout << var1 << " " << var2 << " " << var3 << " " << var4 << std::endl;
}

void f29(double a)
{
	double b = (a*PI) / 180;
	std::cout << b << std::endl;
}

void f30(double a)
{
	double b = 180 * a / PI;
	std::cout << b << std::endl;
}

void f31(double temp)
{
	double tempc = (temp - 32) * 5 / 9;
	std::cout << tempc << std::endl;
}

void f32(double tempc)
{
	double temp = 9 * tempc / 5 + 32;
	std::cout << temp << std::endl;
}

void f33(double weight, double price, double x)
{
	double kg1 = price / weight;
	double ykg = x / kg1;
	std::cout << kg1 << " " << ykg << std::endl;
}

void f34(double cho_weight, double cho_price, double iris_weight, double iris_price)
{
	double kg_cho1 = cho_price / cho_weight;
	double kg_iris1 = iris_price / iris_weight;
	std::cout << kg_cho1 << " " << kg_iris1 << std::endl;
}

void f35(double v, double u, double t1, double t2)
{
	double s = v * t1;
	double v1 = v - u;
	double res = s + v1 * t2;
	std::cout << res << std::endl;
}

void f36(double v1, double v2, double s, double t)
{
	double v3 = v1 + v2;
	std::cout << s + v3 * t << std::endl;
}

void f37(double v1, double v2, double s, double t)
{
	std::cout << std::abs(s - (v1 + v2)*t) << std::endl;
}
void f38(double a, double b)
{
	std::cout << (-b / a) << std::endl;
}

void f39(double a, double b, double c)
{
	double x = std::pow(b, 2) - 4 * a*c;
	double x1 = (-b + std::sqrt(x)) / (2 * a);
	double x2 = (-b + std::sqrt(x)) / (2 * a);
	std::cout << (std::min(x1, x2)) << " " << (std::max(x1, x2)) << std::endl;
}

void f40(double a, double b, double c, double a2, double b2, double c2)
{
	double d = a * b2 - a2 * b;
	double e = (c*b2 - c2 * b) / d;
	double f = (a*c2 - a2 * c) / d;
	std::cout << e << " " << f << std::endl;
}

int main() {
	std::cout << f1(5) << std::endl;
	std::cout << f2(5) << std::endl;
	f3(3, 5);
	std::cout << f4(10) << std::endl;
	f5(6, 2);
	f6(2, 6, 3);
	f7(3);
	std::cout << f8(10, 10) << std::endl;
	std::cout << f9(6, 3) << std::endl;
	f10(6, 4);
	f11(8, 8);
	f12(8, 8);
	f13(14, 5);
	f14(6);
	f15(9);
	std::cout << f16(8, 2) << std::endl;;
	f17(9, 4, 1);
	f18(12, 22, 0);
	f19(2, 3, 5, 3);
	f20(2, 11, 3, 2);
	f21(5, 2, 7, 2, 5, 1);
	f22(7, 25);
	f23(12, 3, 12);
	f24(6, 4, 1);
	f25(1);
	f26(3);
	f27(4);
	f28(6);
	f29(9);
	f30(3);
	f31(11);
	f32(2);
	f33(2, 2, 6);
	f34(4, 2, 1, 8);
	f35(6, 12, 2, 1);
	f36(8, 2, 4, 3);
	f37(5, 2, 3, 4);
	f38(4, 9);
	f39(33, 12, 54);
	f40(1, 3, 12, 2, 4, 6);
	return 0;
}
