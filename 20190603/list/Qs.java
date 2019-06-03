public class Qs {
    int[] result;

    public Qs() {
        result = new int[8];
    }

    public void cal8qs(int row) {
        if (row == 8) {
            printQs();
            return;
        }
        for (int column = 0; column < 8; column++) {
            if (isOk(row, column)) {
                result[row] = column;
                cal8qs(row+1);
            }
        }
    }

    private boolean isOk(int row, int column) {
        int leftup = column -1, rightup = column + 1;
        for (int i = row - 1; i >= 0; i--) {
            if (result[i] == column) return false;
            if (leftup >= 0) {
                if (result[i] == leftup) return false;
            }
            if (rightup < 8 ) {
                if (result[i] == rightup) return false;
            }
            leftup--;
            rightup++;
        }
        return true;
    }

    public void printQs() {
        for (int row = 0; row < 8; row++) {
            for (int column = 0; column < 8; column++) {
                if (result[row] == column) {
                    System.out.print("Q ");
                } else {
                    System.out.print("* ");
                }
            }
            System.out.println();
         }
         System.out.println();
    }

    public static void main(String[] args) {
        Qs qs = new Qs();
        qs.cal8qs(0);
    }
}
