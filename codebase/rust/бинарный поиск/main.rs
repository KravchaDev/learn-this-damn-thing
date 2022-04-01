fn binary_search(arr: &[i32; 16], x :i32)  -> i32 {
    let mut low:i32 = 0;
    let mut hight:i32= arr.len() as i32 - 1;
    let mut mid :i32;

    while low<hight {
        mid = (low + hight)/2; // средний индекс
        let guess:i32 = arr[mid as usize]; // средний элемент

        if guess == x {
            println!("Найден {} под индексом: {}", x, mid);
            return mid;
        } else if guess > x {
            hight = mid;
        } else if guess < x {
            low = mid;
        }
    }
    println!("Цифра не найдена");
    return 0; //number not found
}

fn main() {
    let arr = [1,2,5,7,9,12,54,63,76,88,89,92,94,95,99,100];
    let x = 54;
    binary_search(&arr,x);
}

// console log:
// <<  Найден 54 под индексом: 6 >>
