#include <stdio.h>

#include "TraceInterface.h"
#include "ScenarioTrace.h"
#include "LineTrace.h"

static void execute_trace(TraceInterface* const traceObject, int index);

int main(){

    // この２行でオブジェクト言語でいうnewを行っている。
    // newの場合は格納領域の用意からオブジェクト生成まで一行でかけるが
    // cの場合は格納領域の用意とオブジェクト生成をわけて書く必要がある。
    ScenarioTrace st;
    ScenarioTrace_Constructor(&st, "シナリオトレースの属性1");

    // シナリオトレースと同様に格納領域用意とオブジェクト生成&格納
    LineTrace lt;
    LineTrace_Constructor(&lt, "ライントレースの属性１");

    // フィールドを見たければ、Javaみたいに"."で属性を参照できる。
    printf("ここにシナリオトレースの属性１を表示：%s\n", st.field1);
    printf("ここにライントレースの属性１を表示:%s\n", lt.field1);

    // TraceInterfaceに定義されているtraceを実行する。
    // TraceInterface型にキャストしている。
    
    ((TraceInterface*)&st)->p_method->trace(1);
    ((TraceInterface*)&st)->p_method->trace(2);    

    return 0;
}

