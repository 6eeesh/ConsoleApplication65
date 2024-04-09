#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

using namespace std;

class Person {
public:
    string getFirstName() const { return firstName; }
    string getSurname() const { return surname; }
    string getLastName() const { return lastName; }
    string getFullName() const { return firstName + " " + surname + " " + lastName; }
    int getAge() const { return 2024 - birthYear; }

protected:
    string firstName;
    string surname;
    string lastName;
    int birthYear;
};

class Address {
public:
    string getCountry() const { return country; }
    string getRegion() const { return region; }
    string getCity() const { return city; }
    string getStreet() const { return street; }
    int getHouseNumber() const { return houseNumber; }

private:
    string country;
    string region;
    string city;
    string street;
    int houseNumber;
};

class StudentInfo {
public:
    int getStartYear() const { return startYear; }
    int getCourse() const { return course; }
    string getGroupName() const { return groupName; }
    string getSpecialization() const { return specialization; }
    int getStudentsCount() const { return studentsCount; }

private:
    int startYear;
    int course;
    string groupName;
    string specialization;
    int studentsCount;
};

class Grades {
public:
    vector<int> getDzRates() const { return dzRates; }
    vector<int> getPracticeRates() const { return practiceRates; }
    vector<int> getExamRates() const { return examRates; }
    vector<int> getZachetRates() const { return zachetRates; }

private:
    vector<int> dzRates;
    vector<int> practiceRates;
    vector<int> examRates;
    vector<int> zachetRates;
};

class Student : public Person, public Address, public StudentInfo, public Grades {
public:
    Student(const string& firstName, const string& surname, const string& lastName,
        int birthYear, const string& country, const string& region, const string& city,
        const string& street, int houseNumber, int startYear, int course, const string& groupName,
        const string& specialization, int studentsCount, const vector<int>& dzRates,
        const vector<int>& practiceRates, const vector<int>& examRates,
        const vector<int>& zachetRates)
        : Person({ firstName, surname, lastName, birthYear }),
        Address({ country, region, city, street, houseNumber }),
        StudentInfo({ startYear, course, groupName, specialization, studentsCount }),
        Grades({ dzRates, practiceRates, examRates, zachetRates }) {}
};

#endif // STUDENT_H