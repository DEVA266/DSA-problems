total_department_count = int(input("Enter the total no of department : "))
# getting total department count in the college

all_department_names = []
all_department_strength = []
# declaring two list for saving the department name and strength 

for _ in range(total_department_count):
    department_name = input("Enter the department name : ")
    department_strength = int(input(f"Enter the {department_name} department Strength : "))
    # getting the department name and strength from the user and stores in the list 

    all_department_names.append(department_name)
    all_department_strength.append(department_strength)


# declaring a dictionary to map the strength of the department name to the department strength
all_department_details = dict(zip(all_department_names,all_department_strength))

print(all_department_details)

