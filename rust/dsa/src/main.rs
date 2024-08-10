// TODO: impl dynamic array
// TODO: impl multidimensional array

use crate::insertion_sort::insertion_sort;

mod insertion_sort;

fn static_array() {
    const ARR: [i32; 10] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
    const LEN: usize = ARR.len();

    let len_i32: i32 = LEN.try_into().expect("len does not fit into i32");

    for i in ARR {
        if i == (len_i32 - 1) {
            print!("{i}\n");
        } else {
            print!("{i} ");
        }
    }
}

fn main() {
    print!("static array:\n");
    static_array();
    insertion_sort();
}
