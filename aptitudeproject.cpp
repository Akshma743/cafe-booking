#include <iostream>
#include <string>
using namespace std;

void showMenu() {
    cout << "\n------ Café Menu ------" << endl;
    cout << "1. Food Items" << endl;
    cout << "2. Cold Drinks" << endl;
    cout << "3. Coffee Section" << endl;
    cout << "4. Café Booking" << endl;
    cout << "5. Feedback" << endl;
    cout << "6. Exit" << endl;
}

void foodItems() {
    int choice, item, qty;
    float price = 0;
    cout << "\n---- Select Food Type ----" << endl;
    cout << "1. Chinese\n2. Mexican\n3. Korean\n4. Indian" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nChinese Menu:\n"
                 << "1. Noodles (₹120)\n2. Manchurian (₹150)\n3. Fried Rice (₹130)\n"
                 << "4. Spring Roll (₹110)\n5. Chilli Paneer (₹160)\n6. Soup (₹90)" << endl;
            break;

        case 2:
            cout << "\nMexican Menu:\n"
                 << "1. Tacos (₹130)\n2. Nachos (₹100)\n3. Burrito (₹150)\n"
                 << "4. Quesadilla (₹160)\n5. Enchiladas (₹170)\n6. Salsa Chips (₹80)" << endl;
            break;

        case 3:
            cout << "\nKorean Menu:\n"
                 << "1. Bibimbap (₹200)\n2. Kimchi (₹150)\n3. Ramen (₹180)\n"
                 << "4. Kimbap (₹190)\n5. Japchae (₹170)\n6. Tteokbokki (₹160)" << endl;
            break;

        case 4:
            cout << "\nIndian Menu:\n"
                 << "1. Paneer Butter Masala (₹180)\n2. Dal Tadka (₹120)\n3. Chole Bhature (₹150)\n"
                 << "4. Biryani (₹200)\n5. Butter Naan (₹40)\n6. Masala Dosa (₹130)" << endl;
            break;

        default:
            cout << "Invalid type!" << endl;
            return;
    }

    cout << "\nEnter item number: ";
    cin >> item;
    cout << "Quantity: ";
    cin >> qty;

    // Chinese
    if (choice == 1) {
        int rates[] = {120, 150, 130, 110, 160, 90};
        price = rates[item - 1] * qty;
    }
    // Mexican
    else if (choice == 2) {
        int rates[] = {130, 100, 150, 160, 170, 80};
        price = rates[item - 1] * qty;
    }
    // Korean
    else if (choice == 3) {
        int rates[] = {200, 150, 180, 190, 170, 160};
        price = rates[item - 1] * qty;
    }
    // Indian
    else if (choice == 4) {
        int rates[] = {180, 120, 150, 200, 40, 130};
        price = rates[item - 1] * qty;
    }

    cout << "\nTotal Bill: ₹" << price << endl;
}

void coldDrinks() {
    int choice, qty;
    float price = 0;
    cout << "\n---- Cold Drinks ----" << endl;
    cout << "1. Pepsi (₹40)\n2. Coke (₹40)\n3. Sprite (₹35)\n4. Mojito (₹80)\n5. Fanta (₹35)\n6. Red Bull (₹150)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Quantity: ";
    cin >> qty;

    int rates[] = {40, 40, 35, 80, 35, 150};
    if (choice >= 1 && choice <= 6)
        price = rates[choice - 1] * qty;
    else {
        cout << "Invalid!" << endl;
        return;
    }

    cout << "\nTotal Bill: ₹" << price << endl;
}

void coffeeSection() {
    int choice, qty;
    float price = 0;
    cout << "\n---- Coffee Section ----" << endl;
    cout << "1. Cappuccino (₹120)\n2. Latte (₹150)\n3. Espresso (₹100)\n"
         << "4. Cold Coffee (₹130)\n5. Americano (₹140)\n6. Mocha (₹160)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Quantity: ";
    cin >> qty;

    int rates[] = {120, 150, 100, 130, 140, 160};
    if (choice >= 1 && choice <= 6)
        price = rates[choice - 1] * qty;
    else {
        cout << "Invalid!" << endl;
        return;
    }

    cout << "\nTotal Bill: ₹" << price << endl;
}

void cafeBooking() {
    int hours;
    cout << "\n---- Café Booking ----" << endl;
    cout << "Per hour charge: ₹5000" << endl;
    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Total Booking Charge: ₹" << hours * 5000 << endl;
}

void feedback() {
    string fb;
    cout << "\n---- Feedback ----" << endl;
    cout << "Please share your experience: ";
    cin.ignore();
    getline(cin, fb);
    cout << "Thank you for your feedback!" << endl;
}

int main() {
    int choice;
    cout << "===== Welcome to Nova Café =====" << endl;

    while (true) {
        showMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: foodItems(); break;
            case 2: coldDrinks(); break;
            case 3: coffeeSection(); break;
            case 4: cafeBooking(); break;
            case 5: feedback(); break;
            case 6: cout << "Thank you! Visit Again!" << endl; return 0;
            default: cout << "Invalid Option!" << endl;
        }
    }
}
