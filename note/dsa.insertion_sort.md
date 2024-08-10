## Summary
A strategy which mutates an array in place, dividing it into a sorted and unsorted part.
The sorted part is originally comprised of the first (or 0th) item in the array, with the unsorted 
part containing the remainder of items. The algorithm iteratively moves the first item from the 
unsorted part and inserts it into the correct position in the sorted part.

## Steps
Begin with a zero-indexed array, containing items for sorting `a[]`.
Store its length in a separate variable `n` (language-dependent).
Iterate the array from `a[1]` to `a[n]`.
Track the primary index at `a[1]` and increment its value with each iteration.
Store the value of this primary index in a variable `tmp`, updating with each passing iteration.
Track an additional index immediately before the primary at `a[0]`.
Store the value of this additional index in a variable `j`.
Loop through. If `tmp` is smaller than `j`, shift `j` right one position.
Insert `tmp` into its correct position.

## Time Complexity
O(n^2)
