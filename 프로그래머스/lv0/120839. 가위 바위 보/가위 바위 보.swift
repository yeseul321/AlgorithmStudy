import Foundation

func solution(_ rsp:String) -> String {
    var str : String = ""
    for i in rsp{
        if i == "2"{
            str += "0"
        }else if i == "0"{
            str += "5"
        }else {
            str += "2"
        }
    }
    return str
}