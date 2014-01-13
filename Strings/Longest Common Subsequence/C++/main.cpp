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
#include <iostream>

int main(int argc, char *argv[])
{
    string first_string, second_string;
    first_string	= "AGCAT";
    second_string	= "GAC";
    cout << lcs(first_string, second_string) << endl;

    first_string	= "ABCD";
    second_string	= "EFGH";
    cout << lcs(first_string, second_string) << endl;

    first_string	= "XMJYAUZ";
    second_string	= "MZJAWXU";
    cout << lcs(first_string, second_string) << endl;

}
