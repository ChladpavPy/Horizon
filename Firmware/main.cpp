#include "Arduino.h"

#define LORA_TXEN_PIN       4
#define LORA_TXEN_PORT      GPIOB

#define LORA_RXEN_PIN       5
#define LORA_RXEN_PORT      GPIOB

#define PYRO_FIRE1_PORT     GPIOB
#define PYRO_FIRE1_PIN      11

#define PYRO_FIRE2_PORT     GPIOA
#define PYRO_FIRE2_PIN      0

#define PYRO_CONT1_PORT     GPIOA
#define PYRO_CONT1_PIN      2

#define PYRO_CONT2_PORT     GPIOA
#define PYRO_CONT2_PIN      3

#define VBAT_ADC_PORT       GPIOA
#define VBAT_ADC_PIN        1

#define SPI_SCK_PORT        GPIOA
#define SPI_SCK_PIN         5

#define SPI_MISO_PORT       GPIOA
#define SPI_MISO_PIN        6

#define SPI_MOSI_PORT       GPIOA
#define SPI_MOSI_PIN        7

#define FLASH_CS_PORT       GPIOB
#define FLASH_CS_PIN        0

#define ADXL_CS_PORT        GPIOB
#define ADXL_CS_PIN         1

#define ADXL_INT1_PORT      GPIOB
#define ADXL_INT1_PIN       2

#define LORA_DIO2_PORT      GPIOB
#define LORA_DIO2_PIN       3

#define LORA_NSS_PORT       GPIOA
#define LORA_NSS_PIN        8

#define LORA_NRST_PORT      GPIOC
#define LORA_NRST_PIN       12

#define LORA_BUSY_PORT      GPIOC
#define LORA_BUSY_PIN       13

#define LORA_DIO1_PORT      GPIOC
#define LORA_DIO1_PIN       14

#define I2C_SCL_PORT        GPIOB
#define I2C_SCL_PIN         8

#define I2C_SDA_PORT        GPIOB
#define I2C_SDA_PIN         9

#define ICM_CS_PORT         GPIOB
#define ICM_CS_PIN          10

#define BUZZER_PORT         GPIOB
#define BUZZER_PIN          12

#define ICM_INT_PORT        GPIOB
#define ICM_INT_PIN         13

#define BMP_INT_PORT        GPIOA
#define BMP_INT_PIN         15

#define USB_DM_PORT         GPIOA
#define USB_DM_PIN          11

#define USB_DP_PORT         GPIOA
#define USB_DP_PIN          12

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("Project Horizon");
  Serial.println("Flight Computer Booting...");

  pinMode(BUZZER_PIN, OUTPUT);
  
  pinMode(PYRO_CONT1_PIN, INPUT_PULLDOWN);
  pinMode(PYRO_CONT2_PIN, INPUT_PULLDOWN);

  digitalWrite(BUZZER_PIN, HIGH);
  delay(150);
  digitalWrite(BUZZER_PIN, LOW);
  delay(100);
  digitalWrite(BUZZER_PIN, HIGH);
  delay(150);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Hardware IO test completed. System Ready.");
}

void loop() {
  bool pyro1_cont = digitalRead(PYRO_CONT1_PIN);
  bool pyro2_cont = digitalRead(PYRO_CONT2_PIN);

  Serial.print("Status: STANDBY | ");
  Serial.print("Pyro 1 Cont: ");
  Serial.print(pyro1_cont ? "OK" : "FAIL");
  Serial.print(" | Pyro 2 Cont: ");
  Serial.println(pyro2_cont ? "OK" : "FAIL");

  delay(1000);
}