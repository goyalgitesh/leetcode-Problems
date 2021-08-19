public class pattern {
    public static void main(String[] args) {
        int n = 10;
        int digit = 1;
        int temp;

        for(int i=0; i<n; i++) {
            temp = digit;
            for(int j=0; j<=i; j++) {
                System.out.print(temp++ + " ");

            }
            System.out.println();
        }


    }

}