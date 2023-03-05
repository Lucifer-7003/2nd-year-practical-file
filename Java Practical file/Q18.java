// Q18. WAP to create a class Student with following data members:
//  	1. rollno	2. name	3.phy	4.chem	5. math	6. total	7. per
//  
//  	create following methods:
//  	1. getData()
//  	2. showData()
//  	3. calculateResult()

// Define a class called "Student"
class Student {
    // Declare instance variables as private
    private int rollno;
    private String name;
    private double phy;
    private double chem;
    private double math;
    private double total;
    private double per;

    // Define a method to set student data
    public void getData(int rollno, String name, double phy, double chem, double math) {
        // Assign parameter values to instance variables
        this.rollno = rollno;
        this.name = name;
        this.phy = phy;
        this.chem = chem;
        this.math = math;
    }

    // Define a method to display student data
    public void showData() {
        // Display the student's roll number, name, and scores in physics, chemistry,
        // and mathematics
        System.out.println("Roll No: " + rollno);
        System.out.println("Name: " + name);
        System.out.println("Physics: " + phy);
        System.out.println("Chemistry: " + chem);
        System.out.println("Mathematics: " + math);
        // Display the total marks and percentage scored by the student
        System.out.println("Total: " + total);
        System.out.println("Percentage: " + per);
    }

    // Define a method to calculate the result of the student
    public void calculateResult() {
        // Calculate the total marks scored by the student
        total = phy + chem + math;
        // Calculate the percentage scored by the student
        per = total / 3.0;
    }

}

// Define a class called "Q18"
class Q18 {
    public static void main(String[] args) {
        // Create a new instance of the "Student" class
        Student s1 = new Student();
        // Set the student data
        s1.getData(101, "Aditya Vishwakarma", 78, 86, 92);
        // Calculate the student's result
        s1.calculateResult();
        // Display the student's data
        s1.showData();
    }
}