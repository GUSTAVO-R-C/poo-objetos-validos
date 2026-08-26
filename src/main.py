from sensor_nivel import SensorNivel


sensor = SensorNivel("LT-101", 42.5, "%")
print(sensor.resumo())
print("TODO: adicionar estado operacional e registro de leituras")
