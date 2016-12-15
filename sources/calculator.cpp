double sum(int a, int b) {
	return a+b;
}

double dev(int a, int b) {
	return a-b;

}

double mult(int a, int b) {
	return a*b;

}

double sub(int a, int b) {
     if(b == 0)
     {
       throw "Error.Impossible to divide by zero";
     }
	return a/b;

}

double pow(int a, int b) {
        if(b==0)
	{
	throw 1;
	}
	
	unsigned int i = 1;
	if(b<0){
		double pow=1.;
		for(i=1;i<b;++i){
		pow/=(double)a;	
		}
	}
	else{
		double pow = a;
	for (i = 1; i<b; i++) {
		pow *=(double) a;

	}}
	return pow;
}

double sqrta(int a) {
	if(a<0)
	{
	throw "Impossible"
	}
	unsigned int div = 1, rslt = 0;
	while (a> 0)
	{
		a -= div, div += 2;
		rslt += a < 0 ? 0 : 1;
	}
	return rslt;

}
double sqrtb(int b) {
	if(b<0)
	{
	throw "Impossible"
	}
	unsigned int div1 = 1, rslt1 = 0;
	while (b> 0)
	{
		b -= div1, div1 += 2;
		rslt1 += b < 0 ? 0 : 1;
	}
	return rslt1;
}
