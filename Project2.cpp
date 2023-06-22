
#include <iostream>
#include <string>
#include<vector>

using namespace std;

struct Course {
    string courseID;
    string courseTitle;
    string prerequisite1;
    string prerequisite2;

    Course() {
        courseID = "";
        courseTitle = "";
        prerequisite1 = "N/A";
        prerequisite2 = "N/A";
    }
    Course(string courseID, string courseTitle, string prerequisite1) {
        this->courseID = courseID;
        this->courseTitle = courseTitle;
        this->prerequisite1 = prerequisite1;
        this->prerequisite2 = "N/A";
    }
    Course(string courseID, string courseTitle, string prerequisite1, string prerequisite2) {
        this->courseID = courseID;
        this->courseTitle = courseTitle;
        this->prerequisite1 = prerequisite1;
        this->prerequisite2 = prerequisite2;
    }
};
class HashTable {

    struct Node {
        Course course;
        int key;
        Node* next;

        Node(Course course) {
            Course course;
            string ID = course.courseID.substr(4);
            //key = ID.stoi(ID) % 8;
        }

        void PrintNode() {
            Course course = this->course;

            cout << course.courseID << "," << course.courseTitle;
            if (course.prerequisite1 != "N/A") {
                cout << "," << course.prerequisite1;
            }
            if (course.prerequisite2 != "N/A") {
                cout << "," << course.prerequisite2;
            }
        }
    };

    vector<Node> nodes;

    HashTable();
    void PrintCourse();
    void PrintAll();
    void InsertCourse(string info);


    HashTable::HashTable() {
        nodes.resize(8);
    }

    HashTable::PrintAll() {
        for (i = 0; i < nodes.size(); ++i) {
            Node* currNode = nodes.at(i);
            currNode.PrintNode();
            currNode = currNode->next;
            }
        }
    }

    HashTable::PrintCourse(string courseID) {
        for(i = 0; i < nodes.size(); ++i){
            if (courseID == nodes.at(i)->courseID) {
                cout << nodes.at(i)courseID <<  }
    }

};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
