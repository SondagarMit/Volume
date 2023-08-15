#include<stdio.h>
#include<conio.h>
#include<string.h>


struct Student
 {
    int rollNo;
    char name[100];
    int chem;
    int maths;
    int phy;
};

void main() {
    struct Student students[5];
    int i;
    clrscr();

    for ( i = 0; i < 5; i++) {
	printf("Enter details for student %d:\n", i + 1);
	printf("Roll No.: ");
	scanf("%d", &students[i].rollNo);
	printf("Name: ");
	scanf("%s", students[i].name);
	printf("Chemistry Marks: ");
	scanf("%d", &students[i].chem);
	printf("Mathematics Marks: ");
	scanf("%d", &students[i].maths);
	printf("Physics Marks: ");
	scanf("%d", &students[i].phy);
	printf("\n");
    }

    printf("Student Details and Percentages:\n");
    for ( i = 0; i < 5; i++) {
	float total_marks = students[i].chem + students[i].maths + students[i].phy;
	float percentage = (total_marks / 300) * 100;
	printf("Roll No.: %d\n", students[i].rollNo);
	printf("Name: %s\n", students[i].name);
	printf("Chemistry Marks: %d\n", students[i].chem);
	printf("Mathematics Marks: %d\n", students[i].maths);
	printf("Physics Marks: %d\n", students[i].phy);
	printf("Percentage: %.2f%%\n", percentage);
	printf("\n");
    }

    getch();
}
