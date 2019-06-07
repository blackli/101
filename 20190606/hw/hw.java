public class hw {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        System.out.printf("%d\n", search(arr, 1));

    }

    private static int search(int[] arr, int aim) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = (low + aim)/2;
            if (arr[mid] == aim) {
                return mid;
            } else if (arr[mid] > aim) {
                high = mid - 1;
            } else {
                low = low - 1;
            }
        }
        return -1;
    }
}
