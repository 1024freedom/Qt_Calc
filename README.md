# Qt 计算器应用

## 项目简介
这是一个基于 Qt 框架开发的简单计算器应用，支持基本的数学运算和表达式求值。计算器实现了双栈算法来处理运算符优先级，支持括号运算和小数计算。

## 功能特点
- **基础运算**：支持加(+)、减(-)、乘(*)、除(/)、取模(%)运算
- **数字输入**：支持0-9数字输入和小数点(.)输入
- **括号运算**：支持左括号(()和右括号())的优先级运算
- **实用功能**：
  - 取反操作：将当前数字变为相反数
  - 删除功能：删除最后一个输入字符
  - 清空功能：重置计算器状态
  - 等于运算：计算并显示表达式结果
- **结果显示**：最多显示6位有效数字

## 使用说明
1. 通过数字按钮输入操作数
2. 使用运算符按钮构建数学表达式
3. 使用括号控制运算优先级
4. 点击 `=` 按钮计算结果
5. 特殊功能按钮：
   - `±`：当前数字取反
   - `DEL`：删除最后一个字符
   - `AC`：清空所有输入

## 实现细节
### 核心算法
```cpp
double Widget::strCalc(QString str) {
    // 使用双栈法实现运算符优先级处理
    QStack<double> num_stack;
    QStack<QChar> op_stack;
    
    // 运算逻辑
    auto calc = [&]() {
        double b = num_stack.pop();
        double a = num_stack.pop();
        QChar op = op_stack.pop();
        
        switch(op.unicode()) {
            case '+': num_stack.push(a + b); break;
            case '-': num_stack.push(a - b); break;
            case '*': num_stack.push(a * b); break;
            case '/': num_stack.push(a / b); break;
            case '%': num_stack.push(fmod(a, b)); break;
        }
    };
    
    // 遍历输入字符串进行处理
    // ... [详细解析逻辑]
}
```

### 运算符优先级处理
```cpp
std::unordered_map<QChar, Priority> pri = {
    {'-', ADD_SUB}, {'+', ADD_SUB},
    {'*', MUL_DIV_MOD}, {'/', MUL_DIV_MOD}, {'%', MUL_DIV_MOD}
};
```

### 小数处理机制
```cpp
// 检测小数点并处理小数部分
else if(c.isDigit() && str[i+1]=='.') {
    double num = QString(c).toDouble();
    int weight = 0;
    // 处理小数部分
    for(int j = i+2; j < str.size()-1; j++) {
        if(!str[j].isDigit()) break;
        weight++;
        num += QString(str[j]).toDouble() / pow(10, weight);
    }
    num_stack.push(num);
}
```

## 注意事项
1. 表达式必须以有效运算符结尾（程序自动添加终止符）
2. 不支持连续运算符输入（例如 `5++3`）
3. 括号必须成对出现，否则可能导致计算错误
4. 小数处理：
   - 整数部分和小数部分只能包含数字字符
   - 不支持科学计数法
5. 结果显示限制为6位有效数字
6. 错误处理：
   - 括号不匹配时行为未定义
   - 除数为零会导致未定义行为
   - 无效表达式可能导致程序异常

> 提示：该计算器设计为单步运算模式，每次计算后会清空当前表达式并显示结果。
