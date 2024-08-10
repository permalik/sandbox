pub fn insertion_sort() {
    println!("running insertion sort");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_insertion_sort() {
        insertion_sort();
    }
}
