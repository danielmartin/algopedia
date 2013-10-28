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
#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

set<int> 
get_primes(int N)
{
    vector<bool> primes;
    set<int> prime_set;
    for (int i = 0; i <= N; ++i)
	primes.push_back(true);
    primes[0] = false;
    primes[1] = false;

    // We only need to loop until the square root of the max. number
    for (int i = 2; i <= sqrt(N); ++i)
	if (primes[i])
	    for (int j = i*i; j <= N; j += i)
		primes[j] = false;
    for (int i = 0; i <= N; i++)
	if (primes[i])
	    prime_set.insert(i);

    return prime_set;
}

int main()
{
    // A small prime
    set<int> primes_less_than_5 = get_primes(5);
    for (set<int>::iterator it = primes_less_than_5.begin();
	 it != primes_less_than_5.end();
	 ++it) {
	if (it == primes_less_than_5.begin())
	    cout << *it;
	else
	    cout << " " << *it;
    }
    cout << endl << endl;

    // A large composite number
    set<int> primes_less_than_7865 = get_primes(7865);
    for (set<int>::iterator it = primes_less_than_7865.begin();
	 it != primes_less_than_7865.end();
	 ++it) {
	if (it == primes_less_than_7865.begin())
	    cout << *it;
	else
	    cout << " " << *it;
    }
    cout << endl << endl;

    // Another prime
    set<int> primes_less_than_131 = get_primes(131);
    for (set<int>::iterator it = primes_less_than_131.begin();
	 it != primes_less_than_131.end();
	 ++it) {
	if (it == primes_less_than_131.begin())
	    cout << *it;
	else
	    cout << " " << *it;
    }

    return 0;
}
