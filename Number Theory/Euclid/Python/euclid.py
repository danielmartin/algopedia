# This file is part of Algopedia.

# Algopedia is free software: you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# Algopedia is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with Algopedia.  If not, see <http://www.gnu.org/licenses/>.

#!/usr/bin/env python

def gcd(a, b):
    """ Calculates the gcd of two positive integers a, and b
    """
    while b != 0:
        a, b = b, a % b
    return a

if __name__ == '__main__':
    print gcd(4, 3)
    print gcd(10, 5)
    print gcd(234, 69)
    print gcd(1769, 551)
    
    
