#include <stdio.h>

#define CHECK(X) printf("%s...%s\n", (X) ? "passed" : "FAILED", #X);

size_t find_first(const char s[], int c);
void replace_first(int a[], size_t n, int oldint, int newint);
void replace_last(char s[], int oldc, int newc);
size_t count(const int a[], size_t n, int x);

int main (void){
  return 0;
}


/* a */
size_t find_first(const char s[], int c){
  size_t i;
  for (i = 0; s[i] != '\0'; ++i){
    if (s[i] == c){
      return i;
    }
  }

  return (size_t)-1;
}

/* b */
void replace_first(int a[], size_t n, int oldint, int newint){
  size_t i;
  for (i = 0; i < n; ++i){
    if (a[i] == oldint){
      a[i] = newint;
      break;
    }
  }
}

/* c */
void replace_last(char s[], int oldc, int newc){
  size_t i;
  size_t last = 0;
  for (i = 0; s[i] != '\0'; ++i){
    if (s[i] == oldc){
      last = i;
    }
  }

  s[last] = newc;
}

/* d */
size_t count(const int a[], size_t n, int x){
  size_t i;
  size_t count = 0;
  for (i = 0; i < n; ++i){
    if (a[i] == x){
      count++;
    }
  }

  return count;
}