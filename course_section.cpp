/*
 * Course: COEN 2220 - Programming 2
 * Name: Julian A. Pagan Hernandez
 * Lab: Lab 4 - Object-Oriented Programming, Part 2
 * Description: Aggregation practice with CourseSection
 * Due date: 09/12/2026
 */

#include <iostream>
#include <string>
using namespace std;

class Instructor
{
    private:
        string name;  // State owned by one Instructor object.

    public:
        Instructor() { name = ""; }  // Start with a predictable empty value.
        void setName(string n) { name = n; }  // The public interface controls changes.
        string getName() const { return name; }  // Reading should not modify the object.
};

class TextBook
{
    private:
        string title;  // State owned by one TextBook object.

    public:
        TextBook() { title = ""; }  // Start with a predictable empty value.
        void setTitle(string t) { title = t; }  // Keep title changes inside the class interface.
        string getTitle() const { return title; }  // Reading should not modify the object.
};

class CourseSection
{
    private:
        // ===== Resuelve estos TODO ahora (Parte C) =====

        // TODO (Parte C): Add a private string for the section identifier.

        string sectionIdentifier;

        // TODO (Parte C): Add private Instructor and TextBook member objects.

        Instructor instructor;
        TextBook textbook;

        // These members create the "has-a" relationship for this exercise.

    public:
        // TODO (Parte C): Write a constructor that receives a section identifier,
        // an instructor name, and a textbook title. Use the public interfaces of
        // Instructor and TextBook to initialize their data.

        void setSectionIdentifier(string id) {
            sectionIdentifier = id;
        }

        void setInstructorName(string name) {
            instructor.setName(name);
        }

        void setTextBookTitle(string title) {
            textbook.setTitle(title);
        }

        string getInstructorName() const {
            return instructor.getName();
        }

        string getTextBookTitle() const {
            return textbook.getTitle();
        }

        // TODO (Parte C): Write printInfo() const. Display the section identifier,
        // instructor name, and textbook title by calling public getters.

        void printInfo() const {
            cout << "Section Identifier: " << sectionIdentifier << endl;
            cout << "Instructor Name: " << getInstructorName() << endl;
            cout << "Textbook Title: " << getTextBookTitle() << endl;
        }


        
};

int main() {
    // TODO (Parte C): Create one CourseSection with dummy data and call printInfo().
    // Do not use real student information.

    CourseSection course;
    course.setSectionIdentifier("CS501");
    course.setInstructorName("Prof. Yoda");
    course.setTextBookTitle("Jedi Coding: The Force of C++");

    course.printInfo();

    return 0;
}