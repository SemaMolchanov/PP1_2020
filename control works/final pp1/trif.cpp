#include <stdio.h>

/*  Triforce Generator v3
 * 
 * This will generate an ascii triforce of a user defined  size using
 * a predetermined character. It works by mirroring a series of triangles
 * as shown in the diagram below. The triangles with the letter "S" in
 * them represent empty triangles (as in filled with spaces), while the
 * triangles with the letter "D" represent triangles filled with asterisks
 * that will show on screen.
 *
 * Top Half:
 *  ___________________
 * |\   |   /|\   |   /
 * | \ S|S / | \ S|S /
 * |S \ | / D|D \ | /
 * |___\|/___|___\|/
 *
 * Bottom Half:
 *  _______________
 * |   /|\   |   /|\
 * |S / | \S |S / | \
 * | / D|D \ | / D|D \
 * |/___|___\|/___|___\
 *
 * As it can be seen, the pattern looks identical from a glance. The complete shape
 * is the same for both the top and bottom halves, but each pattern is two triangles
 * shorter than they were in the previous version. This gives us an upper pattern of
 * SS|SD|DS|S and a lower pattern of SD|DS|SD|D. We can remove S|S from the end of the
 * upper pattern, as it is not displayed on screen and thus unnecessary (but placed here
 * to illustrate that the top half and the bottom half are indentical, simply mirrored
 * along the x-axis). The "S" and "D" labels for each triangle in the two patterns
 * accurately represent which triangles are filled with visible characters and which
 * are filled with spaces. For further information on this implementation, refer back
 * to v1 for anything not covered.
 *
 * This version is pretty much identical to v2, except that the most commonly used
 * for loops have been moved into functions.
 */

// These functions draw the triangles that make up the patterns. There are only two
// types, and the arguments passed determine the size of the triangles, and what
// characters they are printed with.
int normal_triangle(int iterations, int iterations_minus, char style);
int reflected_triangle(int iterations, int iterations_minus, int iterator, char style);

int main(void) {

  // Hardcode size for codepade testing.
  int size = 20;
  //printf("Please enter a size: ");
  //scanf("%d", &size);
  int x = 0; // A Counter, to be used with size
  // We don't want to modify size directly when counting down, so make a copy.
  int size_copy = size;
  
  // Let's keep track of how many characters are printed on screen.
  // (So far only applicable to triforces, it hasn't been adapted to
  // count whenever a character is printed on screen despite the triangle
  // it belongs to.
  // int characters_count = 0;
  
  // For codepad testing the character_style will be hardcoded.
  char character_style = '*';
  //printf("Please enter a character style: ");
  //scanf(" %c", &character_style);
  
  // Use this to skip triangles we don't want to print
  char character_skip = ' ';
  
  // backwards is used to count towards whatever value the user input for size.
  int backwards  = 0;
  int k = 0; // A Counter, to be used with backwards
  
  for (backwards; backwards < size; backwards++) {
    for (k = 0; k < (backwards); k++) {
      printf("%c", character_skip);  // changed from "i" to " "
      if (k == (backwards - 1)) {

        // This is a function that creates reflected triangles (along the hypotenuse and y-axis,
        // reflections along the hypotenuse are (size - 1) and y-axis is (size - 2).
        reflected_triangle(size, 1, k, character_skip);
        reflected_triangle(size, 2, k, character_skip);
        
        normal_triangle(backwards, 0, character_style);
        normal_triangle(backwards, 1, character_style);
        
        printf("\n");
      }
    }
  }

  // Keep size > 1 because we need to print (size - 1) lines.
  // Here we do the same thing as above, only mirrored. Again, we don't want to modify size directly, so we
  // copy it to a new variable so it can be modified. We construct the triangles with the same pattern as above,
  // and the code is loosely based on the initial outmost while loop of triforce generator v1. Pretty much
  // everything that applies to the loop above, in regards to the repeating for loops in the if{} and the multiple
  // variables ='ing our main iterative x, is applicable to this loop as well. If the previous loop makes sense, this
  // should too. If not, just break it down and check out triforce generator v1. Compare the two different patterns used
  // in this version and in v1 (it's pretty much v1's pattern flipped).
  for (size_copy; size_copy > 1; size_copy--) {
    for (x = 0; x < (size_copy - 1); x++) {
      printf("%c", character_skip);  // changed from $
      if (x == (size_copy - 2)) {                 // (size - 2) because we are printing (size - 1) lines.
        
        reflected_triangle(size, 1, x, character_style);
        reflected_triangle(size, 2, x, character_style);
        
        normal_triangle(size_copy, 1, character_skip);
        normal_triangle(size_copy, 2, character_skip);
        
        reflected_triangle(size, 1, x, character_style);
        reflected_triangle(size, 2, x, character_style);
        
        printf("\n");
      }
    }
  }
  return(0);
}

// These two functions construct our triangles (save for the very first one on
// each line printed). There are two types, normal and reflected. normal
// triangles are built top to bottom (larger as it goes down), and reflected
// triangles are built bottom to top (smaller as it goes down). However, this
// is dependent on where the function call lies in the code. When counting
// towards size (as we do in the initial for loop in main()), then normal
// and reflected triangles act as advertised. It is when we count down
// from size (as we do in the second outermost for loop in main()), that
// these do not act as advertised. Instead, normal triangles become
// reflected, and reflected triangles become normal. This is because
// counting down from size effectively mirrors the functionality of counting
// towards size along the x-axis. So whatever is displayed using these functions
// and counting towards size, is reversed (mirrored along the x-axis) when we count
// down from size.
//
// With that noted, counting towards size is the default behavior.

int normal_triangle(int iterations, int iterations_minus, char style) {
  int s = 0;
  for (s = 0; s < (iterations - iterations_minus); s++) {
    printf("%c", style);
  }
  
  return(0);
}

int reflected_triangle(int iterations, int iterations_minus, int iterator, char style) {
  for (iterator; iterator < (iterations - iterations_minus); iterator++) {
    printf("%c", style);
  }
  
  return(0);
}