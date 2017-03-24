# include <iostream>
using namespace std;

typedef double(*f)(double); //This is like saying double f(double)


double integrate(f funct, double y, double z){

	double area=0.0;
	for(double i=y; i<z; i=i+0.0001) //This may be appear in the exam.
		area=area+(0.0001)*(funct(i)); //This is how to cal. integration
	return area;
}

double line(double x){

return x;
}

double square(double x){

return x*x;
}

 double cube(double x){

return x*x*x;
 }





int main(){


cout<< "The integral of f(x)=x between 1 and 5 is: "<<integrate(line, 1, 5)<<endl;
cout<< "The integral of f(x)=x^2 between 1 and 5 is: "<<integrate(square, 1, 5)<<endl;
cout<< "The integral of f(x)=x^3 between 1 and 5 is: "<<integrate(cube, 1, 5)<<endl;


}
