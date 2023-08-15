#include<stdio.h>
#include<conio.h>
struct Distance {
    int feet;
    int inches;
};

void main() {
    struct Distance distance1, distance2, sum;
    clrscr();

    //  first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);

    //  second distance
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);

    // sum of distances
    sum.feet = distance1.feet + distance2.feet;
    sum.inches = distance1.inches + distance2.inches;

      if (sum.inches >= 12) {
	sum.feet += sum.inches / 12;
	sum.inches %= 12;
    }

       printf("\nSum of distances: %d feet %d inches\n", sum.feet, sum.inches);

  getch();
}
