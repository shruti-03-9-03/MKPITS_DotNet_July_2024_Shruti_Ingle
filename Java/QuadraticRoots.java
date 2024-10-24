public class QuadraticRoots {
    public static void main(String[] args) {
        double FirstNumber = 1, SecondNumber = -7, c = 12;
        double discriminant = SecondNumber * SecondNumber - 4 * FirstNumber * c;
        double root1 = (-SecondNumber + Math.sqrt(discriminant)) / (2 * FirstNumber);
        double root2 = (-SecondNumber - Math.sqrt(discriminant)) / (2 * FirstNumber);
        System.out.println("Roots: " + root1 + " and " + root2);
    }
}
