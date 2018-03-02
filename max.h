// comparison.h
// Author: Izaak Coleman


/* Returns the max of a and b. */
template<class T>
inline T const& max(T const& a, T const& b) {
  return (a > b) ? a : b;
}

