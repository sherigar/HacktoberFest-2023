public class MergeSortAlgo {
    public static void main(String[] args) {
        int[] arr = { 2, 7, 8, 9, 1, 3, 4, 5 };
        int low = 0;

        int high = arr.length - 1;
        mergeSort(arr, low, high);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

    }

    static void mergeSort(int arr[], int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            mergefunc(arr, low, mid, high);
        }
    }

    static void mergefunc(int[] arr, int low, int mid, int high) {
        int n1 = mid + 1 - low;
        int n2 = high - mid;
        int[] left = new int[n1];
        int[] right = new int[n2];
        for (int i = 0; i < n1; i++) {
            left[i] = arr[low + i];
        }
        for (int i = 0; i < n2; i++) {
            right[i] = arr[mid + 1 + i];
        }
        int i = 0, j = 0, k = low;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
                k++;
            } else {
                arr[k] = right[j];
                j++;
                k++;
            }
        }

        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
}