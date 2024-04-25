// Write your implementation code here

#include "records.h"

Student::Student(int student_id, std::string student_name){
    id = student_id;
    name = student_name;
}
int Student::get_id() const{
    return id;
}
std::string Student::get_name() const{
    return name;
}

Course::Course(int course_id, std::string course_name, unsigned char course_credits){
    id = course_id;
    name = course_name;
    credits = course_credits;
}
int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}

Grade::Grade(int student_id, int course_id, char grade_given){
    student_id = student_id;
    course_id = course_id;
    grade = grade_given;
}
int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}