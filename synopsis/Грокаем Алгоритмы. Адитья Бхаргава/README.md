## Глава 1. Знакомство с алгоритмами

**Алгоритм** - набор инструкций для выполнения задачи.

**Бинарный поиск** - алгоритм, который получает на вход отсортированный список элементов, если элемент, который вы ищите, есть в списке, то бинарный поиск возвращает ту позицию, в которой он был найден. В противном случае возвращает null.

#### Как работает?

1.  Определение значения элемента в середине структуры данных. Полученное значение сравнивается с ключом.
    
2.  Если ключ меньше значения середины, то поиск осуществляется в первой половине элементов, иначе — во второй.
    
3.  Поиск сводится к тому, что вновь определяется значение серединного элемента в выбранной половине и сравнивается с ключом.
    
4.  Процесс продолжается до тех пор, пока не будет найден элемент со значением ключа или не станет пустым интервал для поиска.

```
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
```

Дальше:  Сортировка выбором...




