#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x);
}

int main() {
    double a = M_PI;          
    double b = 3 * M_PI / 2;  
    int n = 12;              
    
    double deltaX = (b - a) / n;  
    
    double upperSum = 0;
    double lowerSum = 0;
    
    for (int i = 0; i < n; i++) {
        double xK = a + i * deltaX;        
        double xKNext = xK + deltaX;      
        
        lowerSum = lowerSum + f(xKNext) * deltaX;
        
        upperSum = upperSum + f(xK) * deltaX;
    }
    
    printf("Upper Darboux Sum: %f\n", upperSum);
    printf("Lower Darboux Sum: %f\n", lowerSum);
    
    return 0;
}
