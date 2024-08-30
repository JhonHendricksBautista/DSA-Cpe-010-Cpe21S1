def grade_check():
    for grade in list_grades:
        if grade % 2 == 0:
            even_grades.append(grade)
        else:
            continue

list_grades = [26, 49, 98, 87, 62, 75]
even_grades = []

grade_check()
print(even_grades)
print(sum(even_grades))
