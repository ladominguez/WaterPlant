# WaterPlant

En este proyecto vamos a crear un sistema autómatico de monitoreo que mida de manera regular la humedad del suelo de una planta. En caso de que la humedad del suelo este por debajo de un umbral el sistema activará un sistema de riego. 

## Materiales

* Micrcontrolador ESP32
* Cable USB-micro-USB
* Sensor de humedad resistivo o capacitivo.
* Pantalla Oled.

# Paso 1 - Descarga Arduino IDE e instala los controladores necesarios.
Vísita  la página https://www.arduino.cc/en/software y descarga la versión de Arduino IDE que requieras dependiendo del sistema operativo que estes utilizando. En caso de que decidas usar una computadora Raspberry Pi, elige la versión de **Linux ARM 32-bits**.
## Paso 1b - Instala el controlador de la tarjeta
1. En el menu de archi selecciona **File->Preferences**
<img src="https://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2016/12/arduino-ide-open-preferences.png?w=196&quality=100&strip=all&ssl=1">

1. En el recuadro de **Additional Boad Managers URLs** escribe **https<nolink>://dl.espressif.com/dl/package_esp32_index.json**  y da click en OK.
  
<div>
<img src="https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2018/06/preferences.png?w=722&quality=100&strip=all&ssl=1">
</div>
3. Abre el administrador de tarjetas (**Board Manager**). **Tools>Board>Boards Manager**
<div>
<img src="https://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2018/06/boardsManager.png?w=628&quality=100&strip=all&ssl=1">
</div>
4. Busca **ESP32** y presional del botón de instalar.
<div>
<img src="https://i1.wp.com/randomnerdtutorials.com/wp-content/uploads/2018/06/installing.png?w=786&quality=100&strip=all&ssl=1">
</div>
## Paso 2
