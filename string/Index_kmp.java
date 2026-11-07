package string;

public class Index_kmp {
    public static int[] getnext(String S) {
        int[] next = new int[S.length()];
        int i = 0;
        int j = -1;
        next[0]=-1;

        while (i < S.length()-1) {
            if (j == -1 || S.charAt(i) == S.charAt(j)) {
                i++;
                j++;
                next[i] = j;
            } else {
                j = next[j];
            }
        }
        return next;
    }
    public static int kmp(String T, String S, int pos) {
        int i = pos;
        int j = -1;
        int[] next = getnext(S);
        while (i < T.length() && j < S.length()) {
            if ( j == -1||T.charAt(i) == S.charAt(j)) {
                i++;
                j++;
            } else {
                j = next[j];
            }
        }
        if (j == S.length()) {
            return i - j;
        }
        else {
            return -1;
        }
    }
}

