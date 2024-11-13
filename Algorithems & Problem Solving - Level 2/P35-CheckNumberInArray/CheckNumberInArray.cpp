#include <iostream>
#include <cstdlib>

using namespace std;

int ft_RandomNumber(int from, int to) {
    int rendomNumber = rand() % (to - from + 1) + from;
    return rendomNumber;
}

int ft_ReadPositifNumber(string message) {
    int nbr = -1;
    while (nbr <= 0 ) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

void ft_FillArrayElements(int arrayElement[100], int length) {
    int i = 0;
    while (i < length) {
        arrayElement[i] = ft_RandomNumber(1, 100);
        i++;
    }
}

void ft_printArray(int arry[100], int lenth) {
    int i = 0;
    while (i < lenth) {
        cout << arry[i] << ' ';
        i++;
    }
    cout <<'\n' <<endl;
}

int ft_SearchIndexNumber(int array[100], int arrayLength, int SearchNumber) {
    int i = 0;
    while (i < arrayLength) {
        if (array[i] == SearchNumber)
            return i;
        
        i++;
    }
    return -1;
}

void ft_ChekIsFoundNumber(int array[100], int arrayLength, int SearchNumber) {
    cout << "\nNumber you are looking for is: " << SearchNumber << endl;
    if (ft_SearchIndexNumber(array, arrayLength, SearchNumber) != -1){
        cout << "Yes, the number is found: -) " << '\n';
    }
    else {
        cout << "No, the number is not found: -( " << '\n';
    }
}

int main() {
    srand((unsigned)time(NULL));
    int array[100], length;
    length = ft_ReadPositifNumber("Enter length of array maxlength = 100: ");
    
    ft_FillArrayElements(array,length);
    
    cout << "\nArray Elemments:\n";
    ft_printArray(array, length);
    
    int SearchNumber = ft_ReadPositifNumber("Please enter a number to search for:\n");

    ft_ChekIsFoundNumber(array, length, SearchNumber);
    
    return 0;
}