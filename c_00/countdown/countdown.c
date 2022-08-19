/* Write a program that displays all digits in descending 
order, followed by a
newline.
Example:
$> ./ft_countdown | cat -e
9876543210$
*/
#include <unistd.h>
int main(void)
{
write(1, "9876543210\n", 11);
}
