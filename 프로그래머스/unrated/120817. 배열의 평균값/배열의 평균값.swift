import Foundation

func solution(_ numbers:[Int]) -> Double {
    var avg: Double = 0.0
    var sum: Int = 0
    for num in numbers {
        sum += num
    }
    avg = Double(sum) / Double(numbers.count)
    return avg
}