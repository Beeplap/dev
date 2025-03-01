public class Triangle {
    private double side1;
    private double side2;
    private double side3;

    // Constructor to initialize the sides of the triangle
    public Triangle(double side1, double side2, double side3) {
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    // Method to calculate the perimeter of the triangle
    public double calculatePerimeter() {
        return side1 + side2 + side3;
    }

    // Method to calculate the area of the triangle using Heron's formula
    public double calculateArea() {
        double s = calculatePerimeter() / 2; // semi-perimeter
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    public static void main(String[] args) {
        // Create a triangle with sides 3, 4, and 5
        Triangle triangle = new Triangle(3, 4, 5);

        // Calculate area and perimeter
        double area = triangle.calculateArea();
        double perimeter = triangle.calculatePerimeter();

        // Print the results
        System.out.println("Area of the triangle: " + area);
        System.out.println("Perimeter of the triangle: " + perimeter);
    }
}
