package org.ctci.code;

public class Question5_1 {
	public static void main(String[] args) {
		int N = 0b10000000000;
		int M = 0b10101;
		int i = 2, j = 6;

		System.out.println(Integer.toBinaryString(updateBits(N,M,i,j)));

	}

	public static int updateBits(int n, int m, int i, int j) {
		int max = ~0; /* All 1’s */
		// 1’s through position j, then 0’s
		int left = max - ((1 << j) - 1);
		// 1’s after position i
		int right = ((1 << i) - 1);
		// 1’s, with 0s between i and j
		int mask = left | right;
		// Clear i through j, then put m in there
		return ((n & mask) | (m << i));
	}
}