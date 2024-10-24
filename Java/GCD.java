public class GCD {
    public static int gcd(int anum, int bnum) {
        if (bnum == 0)
            return anum;
        return gcd(b, anum % bnum);
    }

    public static void main(String[] args) {
        int anum = 24, bnum = 18;
        System.out.println("GCD: " + gcd(anum, bnum));
    }
}
