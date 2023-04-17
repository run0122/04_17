# 04_17

## 1. Bit를 통해서 하드웨어 제어

### 1) 인풋 & 아웃풋 설정 (pinMode와 유사한 기능)

DDRD : 오른쪽부터 0,1,...6,7 

DDRC : A7~A0 (아날로그)

DDRB : -,-,13,12,...,8

ex) DDRD = 0b00001010 : 1,3번핀 pinMode 설정

### 2) 풀업, 풀다운 설정 (digitalWrite와 유사한 기능)

PORTD : 오른쪽부터 0,1,...6,7

PORTC : A7~A0 (아날로그)

PORTB : -,-,13,12,...,8

ex) PORTB = 0b00110000 : 12,13번핀 digitalWrite(HIGH)

### 3) 입력 버퍼 설정 (digitalRead와 유사한 기능)

ex) PIND
```
const int buttonPin = 2;

bool buttonState = PIND & (1 << buttonPin);

  //            249 : 11111001 (기본)
  //            253 : 11111101 (버튼이 눌렷을 때)
  //              1 : 00000001
  // 1 << buttonPin : 00000100 (버튼핀 값만큼 Shift)
  
  if ((PIND & (1 << buttonPin)) == 0b00000100) {
    blink();
  } 
```
PIND & (1 << buttonPin) 구문을 통해서 버튼이 눌린 것을 체크할 수 있습니다. 

이 때 buttonState가 bool 형식인 이유는 buttonState가 1 이상일 때 true(HIGH)로 받아주기 위함입니다.
```
// 버튼이 눌렸을 때
  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH);
  }
  // 버튼이 떼어졌을 때
  else {
    digitalWrite(LED_PIN, LOW);
  }
```
이런 식의 활용도 가능합니다.
