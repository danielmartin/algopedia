/* This file is part of Algopedia.
 *
 * Algopedia is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Algopedia is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Algopedia.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "lcs.h"

string
lcs(string &first_string, string &second_string)
{
    int m = first_string.size();
    int n = second_string.size();
    int dp[m+1][n+1];
    for (int i = 0; i <= m; ++i) {
	for (int j = 0; j <= n; ++j) {
	    if (i == 0 || j == 0) dp[i][j] = 0;
	    else if (first_string[i-1] == second_string[j-1])
		dp[i][j] = dp[i-1][j-1]+1;
	    else if (first_string[i-1] != second_string[j-1])
		dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	}
    }
    // Recover solution by going backwards
    int i = m;
    int j = n;
    int k = dp[i][j];
    int l = k-1;
    char sol[k+1];
    while (i > 0 && j > 0) {
	if (first_string[i-1] == second_string[j-1] &&
	    dp[i][j] == dp[i-1][j-1]+1) {
	    sol[l] = first_string[i-1];
	    i--; j--; l--;
	}
	else if (dp[i][j] == dp[i][j-1])
	    j--;
	else if (dp[i][j] == dp[i-1][j])
	    i--;
    }
    sol[k] = '\0'; // Terminating null
    return string(sol);
}

