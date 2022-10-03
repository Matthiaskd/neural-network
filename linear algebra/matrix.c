#include<stdio.h>
#include<stdlib.h>
//!!!: 2D matrices are represented in 1D !!!

//adds m1 and m2 in m1
//note: the arrays must be of the same size and must be defined
void add(double m1[], double m2[], size_t rows, size_t cols)
{
    //calculate length of the arrays
    size_t len=rows*cols;

    for(size_t i = 0; i<len; i++){
        m1[i]=m1[i]+m2[i];
    }
}


//multiplies m1 by a
//a:scalar
//note: the length of the matrix (len) must be given 
void scal(double m[], size_t a, size_t len)
{
    for (size_t i=0; i<len; i++){
        m[i]=m[i]*a;
    }
}

//returns a new matrix r = m1xm2 (of size a*c)
void mul(double m1[], double m2[], size_t a, size_t b, size_t c, double r[])
{
    for(size_t i=0; i<a; i++){
        for(size_t j=0; j<){
            double sum=0;
            for(size_t k; k<b; k++){
                sum+=m1[i*b+k] * m2[k*b+ j];
            }
            r[i*r+j]=sum;
        }
    }
}