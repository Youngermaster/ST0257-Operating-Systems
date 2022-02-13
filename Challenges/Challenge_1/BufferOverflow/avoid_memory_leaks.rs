fn main() {
    // Fixed-size array (type signature is superfluous)
    let xs: [i32; 5] = [1, 2, 3, 4, 5];

    // Indexing starts at 0
    println!("first element of the array: {}", xs[0]);

    // ! Rust compilation will break this code inmediately!
    println!("first element of the array: {}", xs[20]);
}
