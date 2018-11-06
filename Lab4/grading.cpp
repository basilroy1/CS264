 #include <algorithm>
 #include <iomanip>
 #include <ios>
 #include <iostream>
 #include <stdexcept>
 #include <string>
 #include <vector>
 #include "grade.h"
 #include "Student_info.h"
 using std::cin; using std::cout; using std::endl; using std::domain_error; using std::max;
 using std::setprecision; using std::sort; using std::streamsize; using std::string; using std::vector;
 int main(){
 vector<Student_info> students;
 Student_info record;
 string::size_type maxlen = 0; // the length of the longest name
 cout << "enter name followed by midterm grade, final exam grade and these followed by"
 << " homework assignment grades \n";
 cout << "e.g., Smith 93 91 47 90 92 73 100 87 (in some computer to finish: hit enter and then ctrl+d)\n";
 cout << "output: Smith 90.4\n";
 while (read(cin, record)){
 maxlen = max(maxlen, record.name.size());
 students.push_back(record);
 }
 sort(students.begin(), students.end(), compare); // alphabetize the student records
 for (vector<Student_info>::size_type i = 0; // write the names and grades
 i != students.size(); ++i){
 //write the name, padded on teh right to maxlen + 1 characters
 cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');
 try{
 double final_grade = grade(students[i]);
 streamsize prec = cout.precision();
 cout << setprecision(3) << final_grade
 << setprecision(prec);
 } catch (domain_error& e){
 cout << e.what();
 }
 cout << endl;
 }
 return 0;
 
 }
