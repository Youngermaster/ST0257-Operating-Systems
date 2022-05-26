fn main() {
    let mut sumatory = 0;
    let mut arr = [0; 10];

    for i in 0..10 {
        arr[i] = i;
    }

    // ! we should get an error here.
    // ! 'index out of bounds'
    for i in 0..11 {
        sumatory += arr[i];
    }

    println!("The sumatory is: {}", sumatory);
}
