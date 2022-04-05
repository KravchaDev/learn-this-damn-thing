const binarySearch = (array: Array<any>, item: any): any | undefined => {
    let l = 0
    let r = array.length - 1
    // when iterator less than array length
    while (l <= r) {
        const middle = Math.floor((l+r) / 2)
        const itemInArray = array[middle]
        if(itemInArray === item) return middle
        if(itemInArray > item) r = middle - 1
            else l = middle + 1
    }
    return undefined
}

const array = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]

console.log(binarySearch(array,-1))
console.log(binarySearch(array,16))
