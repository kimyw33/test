#define Cds 39 // GPIO 36번에 토양 습도 센서 연결 (ESP32의 아날로그 입력 핀 중 하나)

void setup()
{
  Serial.begin(9600);  // 시리얼 통신을 시작하여, 센서 값을 모니터링할 수 있도록 설정 (9600 baud rate)
}

void loop()
{
  int soil_value = analogRead(SOIL);  // 토양 습도 센서로부터 아날로그 값을 읽어들임 (0 ~ 4095), 어두울수록 출력ㄱ
  Serial.println(soil_value);  // 읽어들인 값을 시리얼 모니터에 출력
  delay(1000);  // 1초마다 값을 읽고 출력하여 과도한 출력 방지
}