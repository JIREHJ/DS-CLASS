#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /*void sort(int num[],int size){
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-1;j++){
          if(num[j]>num[j+1]){
            int temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
          }
        }
    }

    }
void print_num(int num[], int size){
    for (int i=0;i<size;i++){
        printf("%d\t",num[i]);
    }
}*/


int main()
{
    double ave; // To store the average of marks
    printf("subject number,\n 1: Maths, 2: Physics, 3: Chemistry,\n\n");

    int avearray[3][4]; // Array to store marks for 4 tasks and 3 subjects

    // Input marks for each task and subject
    for (int i = 0; i < 3; ++i) {
        printf("Enter marks for subject %d in task, 1. assignment, 2. test, 3. mid term, 4. end of term\n", i + 1);
        for (int j = 0; j < 4; ++j) {
            printf("Marks for task %d: ", j + 1);
           scanf_s("%d", &avearray[i][j]);
           if(avearray[i][j]>100 || avearray[i][j]<0){
            printf("invalid mark\n");
            printf("Re-enter the marks, between 0 and 100\n");
            scanf_s("%d", &avearray[i][j]);

           }else{}
        }
    }

    // Display the averages for each task
    for (int i = 0; i < 3; ++i) {
        ave = (avearray[i][0] + avearray[i][1] + avearray[i][2]) / 3.0;
        printf("The average for subject %d is %.2lf\n", i + 1, ave);
    }

    printf("\nAll marks:\n");

    // Output all marks for each task
    for (int i = 0; i < 3; ++i) {
        printf("Marks for subject %d:\n", i + 1);
        for (int j = 0; j < 4; ++j) {
            printf("Subject %d: %d\n", j + 1, avearray[i][j]);
        }
    }


    /*float physics_assignment, physics_coursework, physics_midterm, physics_endterm;
    float chemistry_assignment, chemistry_coursework, chemistry_midterm, chemistry_endterm;
    float math_assignment, math_coursework, math_midterm, math_endterm;


    float avg_physics, avg_chemistry, avg_math;


    printf("Enter marks for Physics:\n");
    printf("Assignment: ");
   scanf_s("%f", &physics_assignment);
    printf("Coursework: ");
    scanf_s("%f", &physics_coursework);
    printf("Midterm: ");
    scanf_s("%f", &physics_midterm);
    printf("End of Term Exam: ");
   scanf_s("%f", &physics_endterm);


    printf("\nEnter marks for Chemistry:\n");
    printf("Assignment: ");
   scanf_s("%f", &chemistry_assignment);
    printf("Coursework: ");
    scanf_s("%f", &chemistry_coursework);
    printf("Midterm: ");
    scanf_s("%f", &chemistry_midterm);
    printf("End of Term Exam: ");
    scanf("%f", &chemistry_endterm);


    printf("\nEnter marks for Math:\n");
    printf("Assignment: ");
  scanf_s("%f", &math_assignment);
    printf("Coursework: ");
     scanf_s("%f", &math_coursework);
    printf("Midterm: ");
   scanf_s("%f", &math_midterm);
    printf("End of Term Exam: ");
     scanf_s("%f", &math_endterm);


    avg_physics = (physics_assignment + physics_coursework + physics_midterm + physics_endterm) / 4;
    avg_chemistry = (chemistry_assignment + chemistry_coursework + chemistry_midterm + chemistry_endterm) / 4;
    avg_math = (math_assignment + math_coursework + math_midterm + math_endterm) / 4;


    printf("\nAverage marks for Physics: %.2f\n", avg_physics);
    printf("Average marks for Chemistry: %.2f\n", avg_chemistry);
    printf("Average marks for Math: %.2f\n", avg_math);


    float overall_avg = (avg_physics + avg_chemistry + avg_math) / 3;
    printf("\nOverall average marks: %.2f\n", overall_avg);*/

    //merging task
/*int n, x;
printf("Enter the number of domestic animals: ");
scanf_s("%d", &n);

char domestic_animals[n][50];
for(int i=0; i<n; i++){
    printf("Enter the domestic animal %d:", i+1);
    scanf_s("%s", domestic_animals[i]);
}
 printf("Enter the number of wild animals: ");
scanf_s("%d", &x);

char wild_animals[x][50];
for(int i=0; i<x; i++){
    printf("Enter the domestic animal %d:", i+1);
    scanf_s("%s", wild_animals[i]);
}
    printf("All the animals:\n ");
    for(int i=0; i<n; i++){
        printf("%d. %s\n", i+1, domestic_animals[i]);
    }
    for(int i=0; i<x; i++){
        printf("%d. %s\n", n+i+1, wild_animals[i]);
    }
    //merge
    int size=n+x;
    char merged_array[size][50];
    for(int i=0; i<size; i++){
        strcpy(merged_array[i],domestic_animals[i]);//copying elements in domestic animals array the the merged array
    }
     for(int i=0; i<size; i++){
        strcpy(merged_array[i+n],wild_animals[i]);//copying elements in wild animals array the the merged array
    }
    for(int i=0; i<size; i++){
        printf("%s ", merged_array[i]);//displaying elements in merged array.
    }
    /*int size;
    int num[size];
    printf("Enter the number of elements\n");
    scanf_s("%d",&size);
    printf("Enter the numbers\n");
    for (int i=0;i<size;i++){
    scanf_s("%d",&num[i]);
    }
    sort(num,size);
    print_num(num,size);*/
    return 0;
}
