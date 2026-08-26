import unittest

from sensor_nivel import SensorNivel


class TestRegistroDeLeitura(unittest.TestCase):
    def test_registra_somente_quando_ativo_e_dentro_da_faixa(self) -> None:
        sensor = SensorNivel("LT-101", 42.5, "%")

        self.assertEqual(sensor.total_leituras, 0)
        self.assertFalse(sensor.registrar_leitura(50.0))
        self.assertEqual(sensor.valor, 42.5)

        sensor.ativar()
        self.assertTrue(sensor.registrar_leitura(55.0))
        self.assertEqual(sensor.valor, 55.0)
        self.assertEqual(sensor.total_leituras, 1)

        for valor_invalido in (-0.1, 100.1):
            self.assertFalse(sensor.registrar_leitura(valor_invalido))
            self.assertEqual(sensor.valor, 55.0)
            self.assertEqual(sensor.total_leituras, 1)

        sensor.desativar()
        self.assertFalse(sensor.registrar_leitura(60.0))
        self.assertEqual(sensor.valor, 55.0)
        self.assertEqual(sensor.total_leituras, 1)
        self.assertEqual(
            sensor.resumo(),
            "LT-101: 55 % | inativo | leituras: 1",
        )

        with self.assertRaises(AttributeError):
            sensor.total_leituras = 99


if __name__ == "__main__":
    unittest.main()
