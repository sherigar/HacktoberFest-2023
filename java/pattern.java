public class Special_combination_star {
    public static void main(String[] args) {
        int n = 5;
        for (int row = 1; row <= 2 * n  ; row++) {
            if (row <= n) {
                for (int space = 0; space < row - 1; space++) {
                    System.out.print(" ");
                }
                for (int col = 1; col <= n - row + 1; col++) {
                    System.out.print("* ");
                }
                System.out.println();
            }else {
                    for (int space = 0; space <= 2 * n - 1 - row ; space++) {
                        System.out.print(" ");
                    }
                    for (int col = 1; col <= row - n ; col++) {
                        System.out.print("* ");
                    }
                    System.out.println();

                }

            }


        }

    }

