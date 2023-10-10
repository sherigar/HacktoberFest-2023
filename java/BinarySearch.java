public class BinarySearch {
    public static void main(String args[]) {

        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        int low = 0, high = (arr.length - 1);

        int num = 6;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (arr[mid] == num) {
                System.out.println("At: " + (mid + 1));
                break;
            } else if (arr[mid] < num) {
                low = mid + 1;
            } else if (arr[mid] > num) {
                high = mid - 1;
            }
        }
    }
}
