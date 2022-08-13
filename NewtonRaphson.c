//to apply Newton-Raphson's method to f(x)=x^3-2 and find approximate cube root of 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float function(float);
float function_derivative(float);
void newton_raphson_method(float,float);
void newton_raphson_method(float seed_value,float allowed_error)
{
    float value=seed_value;
    float h=-function(value)/function_derivative(value);
    for(;fabs(function(value))>=allowed_error;)
    {
        if(fabs(function_derivative(value))>0.000000001)
        h=-function(value)/function_derivative(value);
        else
        {
            printf("Newton-Raphson's Method fails.");
            exit(0);
        }
        value+=h;
    }
    printf("\nRequired Cube root of 2:%f\n",value);
    printf("\nFunctional value: f(%f)=%f\n",value,function(value));
}
float function(float value)
{
return(pow(value,3)-2);
}
float function_derivative(float value)
{
return(3*pow(value,2));
}
void main()
{
    float allowed_error=0.0,seed_value;
    printf("\nEnter a seed value: ");
    scanf("%f",&seed_value);
    printf("\nEnter allowed error: ");
    scanf("%f",&allowed_error);
    newton_raphson_method(seed_value,allowed_error);
}
