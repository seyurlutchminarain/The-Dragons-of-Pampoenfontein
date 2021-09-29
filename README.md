# The-Dragons-of-Pampoenfontein
Implementing a greedy algorithm for the problem.

PROBLEM DESCRIPTION:
=========================================================================================================================================================================================
The sleepy town of Pampoenfontein has been attacked by dragons! A number of brave knights
have ridden out to try defend the town and slay the dragons. Assume that there are n dragons
and m knights. Each dragon’s head has a diameter, and each knight has a height. A dragon
whose head is diameter d can only be killed by a knight with height h when d  h. Furthermore,
a knight can only kill at most one dragon. Given a list of dragon head diameters and list of
knight heights, write a program to determine the minimum total height of all the knights that
must be used to kill all the dragons.

Example:
Imagine there are two dragon’s with diameters 10 and 20, and three knights with heights
12; 22; 32. The knight of height 12 cannot kill the dragon of diameter 20, but it can kill the
dragon of diameter 10. The optimal solution is to have the knight of height 12 kill the dragon
of height 10 and the knight of height 22 kill the dragon of height 20 for a total height of 34. The
final knight is not used at all.

INPUT:
Input consists of two lines. The first line begins with the integer n. n integers follow, each
separated by a space. These integers represent the diameters of each dragon’s head. Note
that these diameters are not necessarily in any order. The second line begins with the integer
m  n. m integers follow, each separated by a space. These integers represent the heights of
each knight. Note that these heights are not necessarily in any order.

OUTPUT:
MInimum total heights of all knights used to kill all the dragins.
