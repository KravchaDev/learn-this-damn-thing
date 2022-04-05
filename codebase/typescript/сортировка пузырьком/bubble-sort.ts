const swapItems = (items: Array<number>, firstIndex: number, secondIndex: number): void => {
    let item = items[firstIndex]
    items[firstIndex] = items[secondIndex]
    items[secondIndex] = item
}

const bubbleSort = (items: Array<number>): Array<number> => {
    for (let i = 0; i < items.length; i++) {
        for (let j = 0, stopSort = items.length - i - 1; j < stopSort; j++) {
         if(items[j] > items[j+1]) {
             swapItems(items, j, j+1)
         }
        }
    }
    return items
}

const items = [1,5,3,2,6,7,2,53,1035,2034,2077]

const result = bubbleSort(items)

console.log(result)
