//  passing structure memeber as argument
//  pass by value 
#include<stdio.h>
struct student{
    char name[50];
    int age;
    int roll_no;
    float marks;
};

void print(char name[],int age,int roll, float marks){
    printf("%s %d %d %.2f ", name,age,roll,marks);
    
}
int main(){
   struct student s1 = {"Lokesh",22,97,23.3};
   /*
    we can also write this same thing in different way:-
    struct student s1;
    s1.name="lokesh";
    s1.age=22;
    s1.roll_no=97;
    s1.marks=23.3;
    */
    print(s1.name,s1.age,s1.roll_no,s1.marks);
    return 0;
}