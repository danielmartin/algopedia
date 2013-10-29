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
#ifdef __EUCLID_H
#define __EUCLID_H

int
extended_euclidean_algorithm(int a, int b, int *prev_x, int *prev_y);

int
gcd(int x, int y);

#endif
