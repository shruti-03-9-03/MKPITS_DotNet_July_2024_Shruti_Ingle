public class VowelCount {
    public static void main(String[] args) {
        String str = "hello world";
        int count = 0;
        for (int icout = 0; icout < str.length(); icout++) {
            char ch = str.charAt(icout);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        System.out.println("Number of vowels: " + count);
    }
}
