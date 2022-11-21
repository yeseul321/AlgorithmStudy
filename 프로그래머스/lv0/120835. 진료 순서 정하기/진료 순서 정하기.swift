import Foundation

func solution(_ emergency:[Int]) -> [Int] {
    var e: [Int] = emergency.map{ emergency.sorted(by: >).firstIndex(of: $0)! + 1}
    return e
}