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
gcd(int x, int y)
{
    int t;
    while (y != 0) {
	t = y;
	y = x % y;
	x = t;
    }
    return x;
}

int main()
{
    int x = 3;
    int y = 4;
    cout << gcd(x, y) << endl;
    x = -10;
    y = -5;
    cout << gcd(x, y) << endl;    
    x = 234;
    y = 69;
    cout << gcd(x, y) << endl;

    return 0;
}
