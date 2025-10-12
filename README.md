# Laboratory_5
Structures

Tasks:

-> Strings warm-up:)

->Competitors

->Circles

->Fence


# Memo: Structs and Struct Arrays in C

## 1. What is a Struct?

- A **struct** (structure) is a user-defined data type in C.
- It allows grouping **different type** of  variables into one logical unit.

### Defining a Struct
```c
struct Student {
    char name[51];
    int age;
    double gpa;
};
```

- Here, `Student` has three members (fields, attributes): a character array for the name, an integer for the age, and a double for the GPA.

### Creating Struct Variables
```c
struct Student s1;

// Assigning values
strcpy(s1.name, "Alice");
s1.age = 20;
s1.gpa = 3.5;

// Accessing values
printf("%s is %d years old with GPA %.2f", s1.name, s1.age, s1.gpa);
```

---

## 2. Typedef for Convenience

- Writing `struct Student` every time can be long.
- Use `typedef` to create a shortcut:

```c
typedef struct {
    char name[50];
    int age;
    double gpa;
} Student;

Student s1; // no need for 'struct' keyword anymore, but is still can be used!
```

---

## 3. Initializing Structs
```c
Student s1 = {"Bob", 22, 3.8};

Student s2;
strcpy(s2.name, "Clara");
s2.age = 19;
s2.gpa = 3.9;
```

---

## 4. Struct Arrays

- Just like with basic types, you can create arrays of structs.

### Example
```c
Student class[3];

strcpy(class[0].name, "Anna");
class[0].age = 20;
class[0].gpa = 3.6;

strcpy(class[1].name, "Ben");
class[1].age = 21;
class[1].gpa = 3.7;

strcpy(class[2].name, "Chris");
class[2].age = 22;
class[2].gpa = 3.9;

// Print all students
for (int i = 0; i < 3; i++) {
    printf("%s (%d) GPA: %.2f\n", class[i].name, class[i].age, class[i].gpa);
}
```

---

## 5. Passing Structs to Functions

- Structs can be passed by value (copy) or by pointer (reference). (pointers were on lecture, even if we did not practice it on Lab)

```c
void printStudent(Student s) {//s is just a copy, the original Student instance won't be changed 
    printf("%s (%d) GPA: %.2f\n", s.name, s.age, s.gpa); //E.g. Albert Einsten (33) GPA:10.00
    s={"Hello Kitty!",3,0.0};//This won't affect poor Einstein's original record, just the copy lives INSIDE this function!
}

void updateGPA(Student *s, double newGPA) { //Now, here the address (location) of the original Student is given, so the function locates and may modify the ORIGINAL one!
    s->gpa = newGPA;
}

int main() {
    Student s = {"Diana", 20, 3.5};
    printStudent(s);
    updateGPA(&s, 3.9); //Diana got a better result, and the s is modified, because the function wrote the mempory slice where we have stored the results!
    printStudent(s); //Diana do not becoma Kitty:)
}
```

---

## 6. Key Points to Remember
- Structs group related data of different types.
- `typedef` makes struct definitions shorter.
- You can create arrays of structs to store multiple records.
- Use `.` to access struct members, and `->` when working with pointers to structs.
- Passing structs by pointer is usually more efficient.

---

