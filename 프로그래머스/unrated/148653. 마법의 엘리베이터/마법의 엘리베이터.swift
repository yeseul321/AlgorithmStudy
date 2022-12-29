import Foundation

func solution(_ storey:Int) -> Int {
    var temp = storey
    var ret = 0
    while temp != 0{
        let bottom = temp%10
        let top = 10-bottom
        
        if temp == 5{
            ret += 5
            break
        }
        
        if bottom > top{
            ret += top
            temp += top
        }
        else if bottom == top{
            if (temp % 100) / 10 < 5{
                ret += 5
                temp -= 5
            }else{
                ret += 5
                temp += 5
            }
        }
        else{
            ret += bottom
            temp -= bottom
        }
        
        temp /= 10
    }
    return ret
}