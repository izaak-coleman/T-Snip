# T-Snip  
  
======= T-Snip: Templatized C++ functions. Copy -> Paste -> Modify. =======  
  
How to use:  
-- 1) Upload templatized function in .h file.  
-- 2) Update README with:  
      -- Function declaration.  
      -- File name in which function is located.  
      -- Function description.  
  
=====================================================================  
  
```c++
template<class T>
inline T const& max(T const& a, T const& b);
```  
Location: max.h  
Desc: If a is the larger of a and b, returns a. Otherwise returns b.  
