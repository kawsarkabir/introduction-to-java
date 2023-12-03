import java.util.Scanner;

public class Quadratic {
    public static void main(String[] args) {
        // Create a Scanner object for user input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter coefficients
        System.out.println("Enter the coefficient a: ");
        double a = scanner.nextDouble();

        System.out.println("Enter the coefficient b: ");
        double b = scanner.nextDouble();

        System.out.println("Enter the coefficient c: ");
        double c = scanner.nextDouble();

        // Close the Scanner to avoid resource leak
        scanner.close();

        // Calculate the discriminant
        double discriminant = b * b - 4 * a * c;

        // Check the nature of roots based on the discriminant
        if (discriminant > 0) {
            double root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
            double root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
            System.out.println("Two distinct real roots: " + root1 + " and " + root2);
        } else if (discriminant == 0) {
            double root = -b / (2 * a);
            System.out.println("One real root: " + root);
        } else {
            System.out.println("No real roots, roots are complex numbers.");
        }
    }
}
