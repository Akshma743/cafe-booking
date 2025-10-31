employees = {}

def add_employee():
    emp_id = int(input("Enter ID: "))
    if emp_id in employees:
        print("Employee with this ID already exists!")
        return
    emp_name = input("Enter Name: ")
    emp_age = int(input("Enter Age: "))
    emp_sal = float(input("Enter Salary: "))
    employees[emp_id] = {"Name": emp_name, "Age": emp_age, "Salary": emp_sal}
    print("Employee added successfully!\n")

def delete_employee():
    emp_id = int(input("Enter ID to delete: "))
    if emp_id in employees:
        del employees[emp_id]
        print("Employee deleted successfully!\n")
    else:
        print("Employee not found!\n")

def update_employee_name():
    emp_id = int(input("Enter ID to update name: "))
    if emp_id in employees:
        new_name = input("Enter new Name: ")
        employees[emp_id]["Name"] = new_name
        print("Name updated successfully!\n")
    else:
        print("Employee not found!\n")

def display_all_employees():
    if not employees:
        print("No employees to display.\n")
        return
    print("All Employees:")
    for emp_id, info in employees.items():
        print(f"ID: {emp_id}, Name: {info['Name']}, Age: {info['Age']}, Salary: {info['Salary']}")
    print()

def search_employee():
    emp_id = int(input("Enter Employee ID to search: "))
    if emp_id in employees:
        info = employees[emp_id]
        print(f"ID: {emp_id}, Name: {info['Name']}, Age: {info['Age']}, Salary: {info['Salary']}\n")
    else:
        print("Employee not found!\n")

# Main menu loop
while True:
    print("=== Employee Management System ===")
    print("1. Add Employee")
    print("2. Delete Employee")
    print("3. Update Employee Name")
    print("4. Display All Employees")
    print("5. Search Employee by ID")
    print("6. Exit")
    
    choice = input("Enter your choice: ")
    
    if choice == "1":
        add_employee()
    elif choice == "2":
        delete_employee()
    elif choice == "3":
        update_employee_name()
    elif choice == "4":
        display_all_employees()
    elif choice == "5":
        search_employee()
    elif choice == "6":
        print("Exiting...")
        break
    else:
        print("Invalid choice! Try again.\n")