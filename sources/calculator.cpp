double sumary(double a, double b)
{	
        return a + b;
}
double differense(double a, double b)
{	
        return a - b;
}
double multiplication(double a, double b)
{	
        return a * b;
}
double quotient(double a, double b)
{	
        if (y!=0) { double *buf=new double;
		  *buf=a/b;
		  return buf;}
	    else return nullptr;
}
double power(double a, int c)
{	
        double a1 = 1;	
        if (c>0)		
                for (int i = 0; i < c; i++)		
                        a1 = a1*a;	
        if (c<0)	
                for (int i = 0; i < (-c); i++)			
                        a1 = a1 / a;
        return a1;
}
double squareroot(double a)
{
	double xn = 1.0;  
	double xn1 = 2.0;

	if ( a != 1 && a != 0 )
	{
		while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
		{
		 xn = xn1;
		 xn1 = (float)(xn + (float)a/xn)/2;
		}

	}
		else if ( a == 1 ) xn1 = 1;
			else if ( a == 0 ) xn1 = 0;


	return xn1;
}
double absolut(double a)
{	
        return ((a >= 0) ? a : -a);
}
double roundp(double a)
{	
        if (a < 0)
                a = -absolut(a);
        return a;
}
