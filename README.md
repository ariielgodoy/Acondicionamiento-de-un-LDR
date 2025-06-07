# 🌟 Acondicionamiento de Señal para LDR

He desarrollado un sistema completo para acondicionar la señal de un **LDR (Light Dependent Resistor)** que incluye varias etapas clave para asegurar una lectura limpia y precisa.

---

## ⚡ 1. Seguidor de Tensión

- Implementé un **seguidor de tensión** con un amplificador operacional para:
  - Evitar la carga sobre el LDR.
  - Mantener una alta impedancia de entrada.
  - Obtener una señal estable y fiel a la variación lumínica.

> 🔍 *Beneficio:* La señal no se ve afectada por la impedancia de las etapas siguientes.

---

## 🎯 2. Filtro Butterworth de Una Etapa

- Añadí un **filtro paso bajo Butterworth** de orden 1 para:
  - Atenuar el ruido de alta frecuencia.
  - Conseguir una respuesta plana en la banda pasante.
  - Mejorar la calidad de la señal antes de la adquisición.

> ⚙️ *Diseño:* Frecuencia de corte ajustada según el rango esperado de luz ambiental.

---

## 📡 3. Adquisición con ESP32

- La señal acondicionada se conecta al **ADC del ESP32** para:
  - Digitalizar la señal analógica.
  - Realizar muestreos a una frecuencia controlada.
  - Procesar y transmitir datos para su análisis o visualización.

> 🚀 *Ventaja:* Microcontrolador potente y versátil con conectividad integrada.

---

## 🛠️ 4. Solución a Problemas de Saturación

Durante la implementación, encontré y solucioné problemas de saturación y distorsión:

| Problema                  | Solución aplicada                                 |
|---------------------------|--------------------------------------------------|
| Señal muy alta saturando ADC | Ajuste de ganancia en seguidor y divisor de tensión |
| Impedancia de entrada baja    | Uso del seguidor para mantener alta impedancia      |
| Distorsión por ruido          | Filtro Butterworth ajustado para mantener linealidad |

> ✅ *Resultado:* Señales limpias, sin saturación, dentro del rango de lectura del ESP32.

---

# 🚩 **Resumen**

Este acondicionamiento mejora significativamente la calidad y precisión en la lectura de señales de LDR, garantizando:

- Protección de la etapa sensor.
- Señal libre de ruido no deseado.
- Adquisición digital eficiente y fiable.
- Eliminación de saturaciones y errores de lectura.

---

Si quieres, puedo ayudarte a generar esquemas, diagramas o código para la implementación en el ESP32. ¿Quieres? 😊
