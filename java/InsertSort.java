import java.util.Arrays;

/**
 * Insertion Sort
 * Time complexity ->O(nlogN)
 * 
 * Derivation process (ascending order):
 * Initial   -> [3,2,9,1,5] Ordered list:[3] Unordered list:[2,9,1,5]
 * First iteration -> [2,3,9,1,5] Ordered list:[2,3] Unordered list:[9,1,5]
 * Second iteration -> [2,3,9,1,5] Ordered list:[2,3,9] Unordered list:[1,5]
 * Third iteration -> [1,2,3,9,5] Ordered list:[1,2,3,9] Unordered list:[5]
 * Fourth iteration -> [1,2,3,5,9] Ordered list:[1,2,3,5,9] Unordered list: None
 * Conclusion:
 * Number of sorts: n-1 times
 * Ordered list: First time:1   Second time:1+1   nth time:n
 * Unordered list: First time:n-1 Second time:n-1-1 nth time:0
 */
public class InsertSort {
    public static void main(String[] args) {

        int[] array = {9, 2, 3, 1, 5};
        InsertSort.insertSort(array);

    }

    private static void insertSort(int[] array) {
        int insert; // The first element of the unordered list
        int insertIndex; // Index of the last element in the ordered list
        for (int i = 1; i < array.length; i++) { // With every loop, ordered list +1, unordered list -1, loop array.length -1 times

            insert = array[i]; // The first element of the unordered list
            insertIndex = i - 1; // Index of the last element in the ordered list

            // insertIndex >= 0 ensures no index out of bounds; insert < array[insertIndex] indicates the first element of the unordered list is smaller than the last element of the ordered list and needs to be swapped
            while (insertIndex >= 0 && insert < array[insertIndex]) {
                array[insertIndex + 1] = array[insertIndex]; // Overwrite the first element of the unordered list
                insertIndex--; // Decrease the index by 1 to find the position in the ordered list where it's less than insert
            }

            if (!(insert == array[insertIndex + 1])) { // Optimization: If the first element of the unordered list (insert) is in its correct position, there's no need to swap
                array[insertIndex + 1] = insert; // After finding the correct position, overwrite
            }

        }
        System.out.println(Arrays.toString(array));
    }

}
