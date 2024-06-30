// CS300 Project 2
// Brandon Ellis

// Function to print the list of courses
void printCourseList(const std::unordered_map<std::string, Course>& courses) {
    std::cout << "\nHere is a sample schedule: \n\n";
    for (const auto& pair : courses) {
        std::cout << pair.second.courseNumber << ", " << pair.second.courseName << std::endl;
    }
    std::cout << "\n";
}

