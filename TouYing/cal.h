#ifndef CAL_H_H
#define CAL_H_H


#include <cmath>
using namespace std;

const double pi = 3.1415926535;
 const double a=6378140;
 const double b=6356755;
double e=sqrt((a*a-b*b)/(a*a));//求出e


//求r1和r2
double getR(double fai)
{
	double t_fai=(fai/180)*pi;
	double t1=a*cos(t_fai);
	double t2=sqrt(1-e*e*sin(t_fai)*sin(t_fai));
	return t1/t2;
}



//求U1和U2
double getU(double fai)
{
	double t_fai=(fai/180)*pi;
	double tempw;
	tempw=asin(e*sin(t_fai));
	double t1=tan((pi/4)+(t_fai/2));
	double t2=pow(tan((pi/4)+(tempw/2)),e);
	return t1/t2;
}

//求阿尔法
double getAERFA(double fai1,double fai2,double u1,double u2)
{
	//double t_fai1=(fai1/180)*pi;
	//double t_fai2=(fai2/180)*pi;
	double r1=getR(fai1);
	double r2=getR(fai2);

	double t1=log10(r1)-log10(r2);
	double t2=log10(u2)-log10(u1);
	
	return t1/t2;
}

//求K
double getK(double fai1,double u1,double aerfa,double blc)
{
	double r1=getR(fai1);
    
	double t1=100*r1*pow(u1,aerfa);
	double t2=blc*aerfa;

	return t1/t2;
}

//求fai0
double getFAI(double aerfa)
{
    return asin(aerfa)*(180/pi);
}

//求nou
double getNOU(double fai,double AERFA,double k)
{
	double u=getU(fai);
	
	return k/(pow(u,AERFA));
}

//求sata
double getSATA(double jd,double zy,double AERFA)
{
	double t_jd=((jd-zy)/180)*pi;
	
	return AERFA*t_jd;

}

//求X
double getX(double zdwd,double wd,double AERFA,double k,double jd,double zy)
{
	double t1=getNOU(zdwd,AERFA,k);
	double t2=getNOU(wd,AERFA,k)*cos(getSATA(jd,zy,AERFA));
	return t1-t2;
}

//求Y
double getY(double wd,double AERFA,double k,double jd,double zy)
{
	return getNOU(wd,AERFA,k)*sin(getSATA(jd,zy,AERFA));
}





#endif