#include <stdio.h>

double findMedian(int nums1[], int m, int nums2[], int n) {
    int merge[m + n];
    int i = 0, j = 0, k = 0;

    // Merge two sorted arrays
    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            merge[k++] = nums1[i++];
        else
            merge[k++] = nums2[j++];
    }

    while (i < m)
        merge[k++] = nums1[i++];

    while (j < n)
        merge[k++] = nums2[j++];

    int total = m + n;

    // Find median
    if (total % 2 == 0)
        return (merge[total / 2 - 1] + merge[total / 2]) / 2.0;
    else
        return merge[total / 2];
}

int main() {
    int m, n, i;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter elements of first sorted array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter elements of second sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    printf("Median = %.5f\n", findMedian(nums1, m, nums2, n));

    return 0;
}
