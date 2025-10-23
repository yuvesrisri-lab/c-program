#include <stdio.h>

struct Student {
	char name[50];
	int roll;
	float marks;
};

int main() {
	struct Student s;
	 
	printf("Enter student name:");
	fgets(s.name, sizeof(s.name),stdin);
	
	printf("Enter roll number:");
	scanf("%d",&s.roll);
	
	printf("Enter marks:");
	scanf("%f",&s.marks);
	
	int i = 0;
	while (s.name[i] != '\0') {
		if (s.name[i] == '\n') {
			s.name[i] = '\0';
			break;
		}
		i++;
	}
	
	printf("\nStudent Details:\n");
	printf("Name:%s\n", s.name);
	printf("Roll Number: %d\n", s.roll);
	printf("Marks: %.2f\n", s.marks);
	
	return 0;	
}
