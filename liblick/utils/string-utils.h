/**
 * @file
 * @brief An assortment of functions which work with strings.
 */

#pragma once

/**
 * @brief create a copy of a string, on the heap
 * @param s the string to copy
 * @return a copy of s. Free using free()
 */
char *strdup2(const char *s);
/**
 * @brief returns a pointer to the last occurrence of a substring
 * @param haystack the string to look through
 * @param needle the string to look for
 * @return a pointer to the last occurrence of needle, or NULL
 */
char *strstrr(const char *haystack, const char *needle);
/**
 * @brief returns a new string with a string replaced
 * @param haystack the string to look through
 * @param needle the string to look for
 * @param replacement the string to replace the needle with
 * @return a pointer to a string. Free using free()
 */
char *strrep(const char *haystack, const char *needle,
        const char *replacement);
/**
 * @brief concatenate strings together
 * @param n the number of strings
 * @param strs the strings to concatenate, in order
 * @return the resulting string. Free using free()
 */
char *concat_strs_arr(size_t n, char **strs);
/**
 * @brief concatenate strings together
 * @param n the number of strings
 * @param ... the strings to concatenate, in order
 * @return the resulting string. Free using free()
 */
char *concat_strs(size_t n, ...);
