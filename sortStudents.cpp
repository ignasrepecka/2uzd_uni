#include "sortStudents.h"
#include <algorithm>
#include <iostream>

bool compareByName(const Studentas& a, const Studentas& b) {
    return a.getVardas() < b.getVardas();
}

bool compareBySurname(const Studentas& a, const Studentas& b) {
    return a.getPavarde() < b.getPavarde();
}

bool compareByAverage(const Studentas& a, const Studentas& b) {
    return a.getVidurkis() < b.getVidurkis();
}

bool compareByMedian(const Studentas& a, const Studentas& b) {
    return a.getMediana() < b.getMediana();
}

void sortStudents(std::vector<Studentas>& studentai, int sortOption) {
    switch (sortOption) {
        case 1:
            std::sort(studentai.begin(), studentai.end(), compareByName);  // To sort by name
            break;
        case 2:
            std::sort(studentai.begin(), studentai.end(), compareBySurname);  // To sort by surname
            break;
        case 3:
            std::sort(studentai.begin(), studentai.end(), compareByAverage);  // To sort by average
            break;
        case 4:
            std::sort(studentai.begin(), studentai.end(), compareByMedian);  // To sort by median
            break;
        default:
            std::cout << "Netinkamas rūšiavimo pasirinkimas. Prašome pasirinkti nuo 1 iki 4." << std::endl;
            break;
    }
}
