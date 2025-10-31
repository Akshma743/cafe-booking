#include <iostream>
#include <string>
using namespace std;

class FoodCourt {
private:
    double foodBill = 0;
    double drinkBill = 0;
    double courtBookingBill = 0;
    bool fullCourtBooked = false;

public:
    void showMenu() {
        cout << "\n===== Welcome to the Food Court =====\n";
        cout << "1. Food Items\n";
        cout << "2. Drinks\n";
        cout << "3. Book Entire Food Court (₹5000 + 10% Discount)\n";
        cout << "4. View Bill\n";
        cout << "5. Exit\n";
    }

    void foodMenu() {
        int choice, qty;
        cout << "\n--- Food Menu ---\n";
        cout << "1. Burger - ₹150\n";
        cout << "2. Pizza - ₹300\n";
        cout << "3. Sandwich - ₹120\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        switch (choice) {
        case 1: foodBill += 150 * qty; break;
        case 2: foodBill += 300 * qty; break;
        case 3: foodBill += 120 * qty; break;
        default: cout << "Invalid choice!\n"; return;
        }

        cout << "✅ Food added successfully!\n";
    }

    void drinkMenu() {
        int choice, qty;
        cout << "\n--- Drinks Menu ---\n";
        cout << "1. Coffee - ₹80\n";
        cout << "2. Cold Drink - ₹60\n";
        cout << "3. Juice - ₹100\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        switch (choice) {
        case 1: drinkBill += 80 * qty; break;
        case 2: drinkBill += 60 * qty; break;
        case 3: drinkBill += 100 * qty; break;
        default: cout << "Invalid choice!\n"; return;
        }

        cout << "✅ Drink added successfully!\n";
    }

    void bookFullCourt() {
        if (fullCourtBooked) {
            cout << "\n⚠  Food Court already booked!\n";
            return;
        }

        double basePrice = 5000;
        double discount = basePrice * 0.10;
        double finalAmount = basePrice - discount;

        courtBookingBill = finalAmount;
        fullCourtBooked = true;

        cout << "\n--- Food Court Booking Details ---\n";
        cout << "Base Price: ₹" << basePrice << endl;
        cout << "Discount (10%): ₹" << discount << endl;
        cout << "Total Payable: ₹" << finalAmount << endl;
        cout << "✅ Food Court booked successfully!\n";
    }

    void viewBill() {
        cout << "\n===== Your Bill Summary =====\n";
        cout << "Food Bill: ₹" << foodBill << endl;
        cout << "Drinks Bill: ₹" << drinkBill << endl;
        cout << "Food Court Booking: ₹" << courtBookingBill << endl;
        cout << "-----------------------------\n";
        cout << "Grand Total: ₹" << (foodBill + drinkBill + courtBookingBill) << endl;
    }
};

int main() {
    FoodCourt f;
    int choice;

    do {
        f.showMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: f.foodMenu(); break;
        case 2: f.drinkMenu(); break;
        case 3: f.bookFullCourt(); break;
        case 4: f.viewBill(); break;
        case 5: cout << "Exiting...\n"; break;
        default: cout << "Invalid option!\n";
        }

    } while (choice != 5);

    return 0;
}