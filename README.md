Algopedia
=========

Algopedia wants to be your best reference for algorithms and data structures.

It is a project created by [danielmartin](http://github.com/danielmartin/) that brings together efficient implementations of algorithms for common problems in an encyclopedic way. Each algorithm is classified according to its problem domain and implementation language. The source tree looks like this:

> algopedia/ProblemDomain/Problem/Language/

Algopedia is more than a "cookbook" of algorithms. We want to add to each algorithm detailed explanations, running time and caveats, so that the information can be used by students and professionals alike. We are firm believers of "learning by doing" methodologies, so, ideally, students in Computer Science courses learn algorithms and data structures by using and contributing to Algopedia.

## How can I contribute to Algopedia? ##

Simply fork this repository, make your changes in a topic branch and send a pull request.

## Can I contribute original algorithms that I published in journals? ##

Yes, as long as:

* it's your own work
* you consider it interesting enough to be in Algopedia.
* you are willing to make it part of Algopedia under the GPL.

## Can I contribute my solutions to the X programming contest? ##

Please, no. There are many reasons to not to contribute this kind of content:

* it is usually protected by copyright.
* some of the contest problems are not generalizable enough to be useful for a great amount of people.
* you are spoiling the people that are trying to solve those problems. Algopedia's ultimate goal is to be educative.

## Which languages does Algopedia support? ##

Algopedia is agnostic about the implementation language of the algorithms contained in it. Feel free to implement solutions in exotic languages and send a pull request.

## Which is the format of contributions to Algopedia? ##

The file must begin with the following GPL license text in a commentary:

> This file is part of Algopedia.
> 
> Algopedia is free software: you can redistribute it and/or modify it
> under the terms of the GNU General Public License as published by
> the Free Software Foundation, either version 3 of the License, or
> (at your option) any later version.
> 
> Algopedia is distributed in the hope that it will be useful, but
> WITHOUT ANY WARRANTY; without even the implied warranty of
> MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
> General Public License for more details.
> 
> You should have received a copy of the GNU General Public License
> ralong with Algopedia.  If not, see <http://www.gnu.org/licenses/>.

Then, you should implement your algorithm main function (you can use auxiliary functions if you need them). Try to make algorithms autocontained. If external dependencies are unavoidable, mention those in the README file. It's a good thing that you include a driver program with a few test cases. You can make your test cases as rigourous as you consider.

## What if I discover an error in an algorithm? ##

Open an issue explaining the problem, with a failed test case in the description.

## What if I have a faster algorithm for a problem? ##

We love faster algorithms! Simply include your algorithm as an alternative function in your pull request. After a consensus, the community may decide to replace the original algorithm with your contribution.

## Is there a coding style guide? ##

Not at the moment. To guarantee a bit of homogenousness, try to follow the conventions of other problems solved in that particular language.
