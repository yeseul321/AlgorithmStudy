import Foundation

func solution(_ numbers:[Int]) -> [Int] {
    var arr: [Int] = numbers
    for i in 0...(arr.count - 1) {
        arr[i] *= 2
    }
    return arr
}