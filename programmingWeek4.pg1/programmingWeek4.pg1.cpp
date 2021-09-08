#include<stdio.h>
#include<math.h>

int main() {
	float a, b, c, s, area;
	printf("Enter three number : ");
	scanf_s("%f%f%f",&a,&b,&c);
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
		s = (a + b + c) / 2.0;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("Area of triangle is : %.2f", area);
	}
	else  printf(" 0 ");
	return 0;
}