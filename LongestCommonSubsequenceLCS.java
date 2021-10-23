public class LCS {

	private static int sol(String s1, String s2, int n, int m) {
		// TODO Auto-generated method stub

		if(n == 0 || m == 0) {
			return 0;
		}
		if(s1.charAt(n - 1) == s2.charAt(m - 1)) {
			return 1 + sol(s1, s2, n - 1, m - 1);
		}
		
		int c1 = sol(s1, s2, n - 1, m);
		int c2 = sol(s1, s2, n, m - 1);
		
		return Math.max(c1, c2);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String s1 = "abcde";
		String s2 = "aec";
		
		System.out.println(sol(s1, s2, s1.length(), s2.length()));
	}

}
