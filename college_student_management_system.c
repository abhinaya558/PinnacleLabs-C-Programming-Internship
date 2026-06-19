#include <stdio.h>

int main() {

    char name[50];
    char department[30];
    int rollNo, semester;
    float attendance;
    float marks[5];
    char subjects[5][30] = {
        "Mathematics",
        "Physics",
        "Chemistry",
        "Computer Science",
        "English"
    };

    float total = 0, percentage;
    int i;
    int highest = 0, lowest = 0;

    printf("=====================================================\n");
    printf("        COLLEGE STUDENT MANAGEMENT SYSTEM\n");
    printf("=====================================================\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Department (CSE/ECE/EEE/etc): ");
    scanf("%s", department);

    printf("Enter Semester: ");
    scanf("%d", &semester);

    printf("Enter Attendance Percentage: ");
    scanf("%f", &attendance);

    printf("\nEnter Marks for 5 Subjects\n");

    for(i = 0; i < 5; i++) {

        printf("%s: ", subjects[i]);
        scanf("%f", &marks[i]);

        total += marks[i];

        if(marks[i] > marks[highest])
            highest = i;

        if(marks[i] < marks[lowest])
            lowest = i;
    }

    percentage = total / 5;

    printf("\n\n");
    printf("=====================================================\n");
    printf("                STUDENT REPORT CARD\n");
    printf("=====================================================\n");

    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);
    printf("Department   : %s\n", department);
    printf("Semester     : %d\n", semester);
    printf("Attendance   : %.2f%%\n", attendance);

    printf("\n-----------------------------------------------------\n");
    printf("SUBJECT MARKS\n");
    printf("-----------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-20s : %.2f\n", subjects[i], marks[i]);
    }

    printf("-----------------------------------------------------\n");

    printf("Total Marks        : %.2f / 500\n", total);
    printf("Percentage         : %.2f%%\n", percentage);

    printf("Strongest Subject  : %s\n", subjects[highest]);
    printf("Weakest Subject    : %s\n", subjects[lowest]);

    printf("\n=====================================================\n");

    if(percentage >= 90) {
        printf("Grade              : A+\n");
        printf("Performance        : OUTSTANDING\n");
    }
    else if(percentage >= 80) {
        printf("Grade              : A\n");
        printf("Performance        : EXCELLENT\n");
    }
    else if(percentage >= 70) {
        printf("Grade              : B\n");
        printf("Performance        : GOOD\n");
    }
    else if(percentage >= 60) {
        printf("Grade              : C\n");
        printf("Performance        : SATISFACTORY\n");
    }
    else {
        printf("Grade              : F\n");
        printf("Performance        : NEEDS IMPROVEMENT\n");
    }

    if(percentage >= 50)
        printf("Result             : PASS\n");
    else
        printf("Result             : FAIL\n");

    if(percentage >= 85 && attendance >= 85)
        printf("Scholarship Status : ELIGIBLE\n");
    else
        printf("Scholarship Status : NOT ELIGIBLE\n");

    printf("\n=====================================================\n");
    printf("CAREER SUGGESTIONS\n");
    printf("=====================================================\n");

    if(percentage >= 90) {
        printf("• AI/ML Engineer\n");
        printf("• Software Developer\n");
        printf("• Data Scientist\n");
        printf("• Research Internships\n");
    }
    else if(percentage >= 75) {
        printf("• Web Development\n");
        printf("• Mobile App Development\n");
        printf("• Cloud Computing\n");
    }
    else {
        printf("• Improve Fundamentals\n");
        printf("• Practice Coding Daily\n");
        printf("• Work on Mini Projects\n");
    }

    printf("\n=====================================================\n");
    printf("PERSONALIZED MESSAGE\n");
    printf("=====================================================\n");

    if(percentage >= 90)
        printf("Excellent work! Keep participating in internships,\nprojects and hackathons.\n");
    else if(percentage >= 75)
        printf("Great performance! Focus on your weakest subject\nfor even better results.\n");
    else if(percentage >= 50)
        printf("Good effort. Consistent practice will help you\nreach higher grades.\n");
    else
        printf("Don't give up. Every expert was once a beginner.\nKeep learning and improving daily.\n");

    printf("=====================================================\n");
    printf("      THANK YOU FOR USING THE SYSTEM\n");
    printf("=====================================================\n");

    return 0;
}
