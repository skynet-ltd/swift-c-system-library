#include <cmark.h>
#include <stdlib.h>

void test() {
  const char *markdown = "*Hello World*";
  const char *encoded = cmark_markdown_to_html(markdown, 14, 0);
  printf("%s\n", encoded);
  free((void *)encoded);
}