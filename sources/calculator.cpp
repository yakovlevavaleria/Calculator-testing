long double Sum(double x,double y)
{
    return x+y;
}
long double *Dev(double x,double y)
{
    if (y != 0) {
		long double *buf = new long double;
		*buf = x / y;
		return buf;
	}
	else return nullptr;
 }
long double Mult(double x,double y)
{
    return x*y;
}
long double Sub(double x,double y)
{
    return x-y;
}
long double Pow1(double x,double y)
{
    double buff;
    int i;
    buff = 1;
    for (i = 1; i <= y; i++) {
        buff *= x;
    }
    return buff;
}
double *Sqrt3(float x)
{
	double c = 0, res = x;
	if (x > 0){
		double *r = new double;
		if (x != 1 && x != 0) {
			while (c - res > 0.00001 || c - res < -0.00001)
			{
				c = res;
				res = (c + x / res) / 2;
			}
			*r = res;
		}
		else if (x == 1) *r = 1;
		else if (x == 0) *r = 0;

		return r;
	}
	else return nullptr;
}
