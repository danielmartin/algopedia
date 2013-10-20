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

using namespace std;

int
extended_euclidean_algorithm(int a, int b, int *prev_x, int *prev_y)
{
    int x, y, t, q;
    x = *prev_y = 0;
    y = *prev_x = 1;
    while (b != 0) {
	q = a / b;
	t = b;
	b = a % b;
	a = t;
	t = *prev_x;
	*prev_x = x;
	x = t - q * x;
	t = *prev_y;
	*prev_y = y;
	y = t - q*y;
    }
    return a;
}

int 
gcd(int a, int b)
{
    int t;
    while (b != 0) {
	t = b;
	b = a % b;
	a = t;
    }
    return a;
}

int main()
{
    int a = 4;
    int b = 3;
    int x, y;
    x = y = 0;
    cout << gcd(a, b) << endl;
    extended_euclidean_algorithm(a, b, &x, &y);
    cout << "x = " << x << " y = " << y << endl;

    a = 10;
    b = 5;
    cout << gcd(a, b) << endl;
    extended_euclidean_algorithm(a, b, &x, &y);
    cout << "x = " << x << " y = " << y << endl;

    a = 234;
    b = 69;
    cout << gcd(a, b) << endl;
    extended_euclidean_algorithm(a, b, &x, &y);
    cout << "x = " << x << " y = " << y << endl;

    a = 1769;
    b = 551;
    cout << gcd(a, b) << endl;
    extended_euclidean_algorithm(a, b, &x, &y);
    cout << "x = " << x << " y = " << y << endl;
    
    return 0;
}
